// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__BUILDER_HPP_
#define TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "trajectory_interfaces/msg/detail/trajectory_command__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace trajectory_interfaces
{

namespace msg
{

namespace builder
{

class Init_TrajectoryCommand_avoid_obstacle
{
public:
  explicit Init_TrajectoryCommand_avoid_obstacle(::trajectory_interfaces::msg::TrajectoryCommand & msg)
  : msg_(msg)
  {}
  ::trajectory_interfaces::msg::TrajectoryCommand avoid_obstacle(::trajectory_interfaces::msg::TrajectoryCommand::_avoid_obstacle_type arg)
  {
    msg_.avoid_obstacle = std::move(arg);
    return std::move(msg_);
  }

private:
  ::trajectory_interfaces::msg::TrajectoryCommand msg_;
};

class Init_TrajectoryCommand_angular_speed
{
public:
  explicit Init_TrajectoryCommand_angular_speed(::trajectory_interfaces::msg::TrajectoryCommand & msg)
  : msg_(msg)
  {}
  Init_TrajectoryCommand_avoid_obstacle angular_speed(::trajectory_interfaces::msg::TrajectoryCommand::_angular_speed_type arg)
  {
    msg_.angular_speed = std::move(arg);
    return Init_TrajectoryCommand_avoid_obstacle(msg_);
  }

private:
  ::trajectory_interfaces::msg::TrajectoryCommand msg_;
};

class Init_TrajectoryCommand_linear_speed
{
public:
  Init_TrajectoryCommand_linear_speed()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_TrajectoryCommand_angular_speed linear_speed(::trajectory_interfaces::msg::TrajectoryCommand::_linear_speed_type arg)
  {
    msg_.linear_speed = std::move(arg);
    return Init_TrajectoryCommand_angular_speed(msg_);
  }

private:
  ::trajectory_interfaces::msg::TrajectoryCommand msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::trajectory_interfaces::msg::TrajectoryCommand>()
{
  return trajectory_interfaces::msg::builder::Init_TrajectoryCommand_linear_speed();
}

}  // namespace trajectory_interfaces

#endif  // TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__BUILDER_HPP_
