// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_HPP_
#define TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <cstdint>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__trajectory_interfaces__msg__TrajectoryCommand __attribute__((deprecated))
#else
# define DEPRECATED__trajectory_interfaces__msg__TrajectoryCommand __declspec(deprecated)
#endif

namespace trajectory_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct TrajectoryCommand_
{
  using Type = TrajectoryCommand_<ContainerAllocator>;

  explicit TrajectoryCommand_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
      this->avoid_obstacle = false;
    }
  }

  explicit TrajectoryCommand_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->linear_speed = 0.0f;
      this->angular_speed = 0.0f;
      this->avoid_obstacle = false;
    }
  }

  // field types and members
  using _linear_speed_type =
    float;
  _linear_speed_type linear_speed;
  using _angular_speed_type =
    float;
  _angular_speed_type angular_speed;
  using _avoid_obstacle_type =
    bool;
  _avoid_obstacle_type avoid_obstacle;

  // setters for named parameter idiom
  Type & set__linear_speed(
    const float & _arg)
  {
    this->linear_speed = _arg;
    return *this;
  }
  Type & set__angular_speed(
    const float & _arg)
  {
    this->angular_speed = _arg;
    return *this;
  }
  Type & set__avoid_obstacle(
    const bool & _arg)
  {
    this->avoid_obstacle = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> *;
  using ConstRawPtr =
    const trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__trajectory_interfaces__msg__TrajectoryCommand
    std::shared_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__trajectory_interfaces__msg__TrajectoryCommand
    std::shared_ptr<trajectory_interfaces::msg::TrajectoryCommand_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const TrajectoryCommand_ & other) const
  {
    if (this->linear_speed != other.linear_speed) {
      return false;
    }
    if (this->angular_speed != other.angular_speed) {
      return false;
    }
    if (this->avoid_obstacle != other.avoid_obstacle) {
      return false;
    }
    return true;
  }
  bool operator!=(const TrajectoryCommand_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct TrajectoryCommand_

// alias to use template instance with default allocator
using TrajectoryCommand =
  trajectory_interfaces::msg::TrajectoryCommand_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace trajectory_interfaces

#endif  // TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__STRUCT_HPP_
