/*
 * commander_node.cpp
 *
 * Node "cerveau" du projet : calcule la commande de deplacement de la tortue
 * et la publie sur /trajectory_cmd. Le node "turtle_executor" (Python) se
 * charge de transformer cette commande en Twist pour turtlesim.
 */

#include <chrono>
#include <cmath>
#include <memory>

#include "rclcpp/rclcpp.hpp"
#include "std_msgs/msg/bool.hpp"
#include "trajectory_interfaces/msg/trajectory_command.hpp"

using namespace std::chrono_literals;

class CommanderNode : public rclcpp::Node
{
public:
  CommanderNode()
  : Node("commander_node")
  {

    // Un noeud externe pour publier sur /obstacle_alert afin de simuler la detection d'un obstacle.
    //
    publisher_ = this->create_publisher<trajectory_interfaces::msg::TrajectoryCommand> ("/trajectory_cmd", 10);

    obstacle_subscription_ = this->create_subscription<std_msgs::msg::Bool>("/obstacle_alert", 10, std::bind(&CommanderNode::obstacle_callback, this, std::placeholders::_1));

    state_start_ = this->now();
    timer_ = this->create_wall_timer(100ms, std::bind(&CommanderNode::timer_callback, this));  // stored!

    RCLCPP_INFO(this->get_logger(), "commander_node demarre.");
  }

private:
  enum class State { FORWARD, TURN };
  rclcpp::Publisher<trajectory_interfaces::msg::TrajectoryCommand>::SharedPtr publisher_;
  rclcpp::Subscription<std_msgs::msg::Bool>::SharedPtr obstacle_subscription_;
  rclcpp::TimerBase::SharedPtr timer_;


  State state_ = State::FORWARD;
  rclcpp::Time state_start_;
  bool obstacle_detected_ = false;

  const double forward_speed_ = 1.0;          // units/s
  const double forward_duration_ = 2.0;       // s  -> side length of 2
  const double turn_speed_ = M_PI / 2.0;      // rad/s
  const double turn_duration_ = 1.0;          // s  -> speed * time = 90 degrees

  void obstacle_callback(const std_msgs::msg::Bool::SharedPtr msg)
  {

    if (obstacle_detected_ && !msg->data) {
      state_start_ = this->now();
    }
    obstacle_detected_ = msg->data;
    RCLCPP_WARN(this->get_logger(), "Obstacle alert: %s", msg->data ? "true" : "false");
  }

  void timer_callback()
  {
    trajectory_interfaces::msg::TrajectoryCommand message;

    if (obstacle_detected_)
     {
      message.linear_speed = 0.0;
      message.angular_speed = 1.0;
      message.avoid_obstacle = true;
    } else {
      // TODO 1: square = FORWARD -> TURN -> FORWARD -> TURN ...
      const double elapsed = (this->now() - state_start_).seconds();
      message.avoid_obstacle = false;

      switch (state_) {
        case State::FORWARD:
          message.linear_speed = forward_speed_;
          message.angular_speed = 0.0;
          if (elapsed >= forward_duration_) {
            state_ = State::TURN;
            state_start_ = this->now();
          }
          break;

        case State::TURN:
          message.linear_speed = 0.0;
          message.angular_speed = turn_speed_;
          if (elapsed >= turn_duration_) {
            state_ = State::FORWARD;
            state_start_ = this->now();
          }
          break;
      }
    }

    publisher_->publish(message);
  }

 
};

int main(int argc, char * argv[])
{
  rclcpp::init(argc, argv);
  rclcpp::spin(std::make_shared<CommanderNode>());
  rclcpp::shutdown();
  return 0;
}
