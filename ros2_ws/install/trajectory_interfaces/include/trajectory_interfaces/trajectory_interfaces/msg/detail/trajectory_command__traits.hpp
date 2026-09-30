// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__TRAITS_HPP_
#define TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "trajectory_interfaces/msg/detail/trajectory_command__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace trajectory_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const TrajectoryCommand & msg,
  std::ostream & out)
{
  out << "{";
  // member: linear_speed
  {
    out << "linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_speed, out);
    out << ", ";
  }

  // member: angular_speed
  {
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
    out << ", ";
  }

  // member: avoid_obstacle
  {
    out << "avoid_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_obstacle, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const TrajectoryCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: linear_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "linear_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.linear_speed, out);
    out << "\n";
  }

  // member: angular_speed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "angular_speed: ";
    rosidl_generator_traits::value_to_yaml(msg.angular_speed, out);
    out << "\n";
  }

  // member: avoid_obstacle
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "avoid_obstacle: ";
    rosidl_generator_traits::value_to_yaml(msg.avoid_obstacle, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const TrajectoryCommand & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace trajectory_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use trajectory_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const trajectory_interfaces::msg::TrajectoryCommand & msg,
  std::ostream & out, size_t indentation = 0)
{
  trajectory_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use trajectory_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const trajectory_interfaces::msg::TrajectoryCommand & msg)
{
  return trajectory_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<trajectory_interfaces::msg::TrajectoryCommand>()
{
  return "trajectory_interfaces::msg::TrajectoryCommand";
}

template<>
inline const char * name<trajectory_interfaces::msg::TrajectoryCommand>()
{
  return "trajectory_interfaces/msg/TrajectoryCommand";
}

template<>
struct has_fixed_size<trajectory_interfaces::msg::TrajectoryCommand>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<trajectory_interfaces::msg::TrajectoryCommand>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<trajectory_interfaces::msg::TrajectoryCommand>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__TRAITS_HPP_
