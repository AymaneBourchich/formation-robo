// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice
#include "trajectory_interfaces/msg/detail/trajectory_command__rosidl_typesupport_fastrtps_cpp.hpp"
#include "trajectory_interfaces/msg/detail/trajectory_command__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions

namespace trajectory_interfaces
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_trajectory_interfaces
cdr_serialize(
  const trajectory_interfaces::msg::TrajectoryCommand & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: linear_speed
  cdr << ros_message.linear_speed;
  // Member: angular_speed
  cdr << ros_message.angular_speed;
  // Member: avoid_obstacle
  cdr << (ros_message.avoid_obstacle ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_trajectory_interfaces
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  trajectory_interfaces::msg::TrajectoryCommand & ros_message)
{
  // Member: linear_speed
  cdr >> ros_message.linear_speed;

  // Member: angular_speed
  cdr >> ros_message.angular_speed;

  // Member: avoid_obstacle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.avoid_obstacle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_trajectory_interfaces
get_serialized_size(
  const trajectory_interfaces::msg::TrajectoryCommand & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: linear_speed
  {
    size_t item_size = sizeof(ros_message.linear_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: angular_speed
  {
    size_t item_size = sizeof(ros_message.angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: avoid_obstacle
  {
    size_t item_size = sizeof(ros_message.avoid_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_trajectory_interfaces
max_serialized_size_TrajectoryCommand(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  size_t last_member_size = 0;
  (void)last_member_size;
  (void)padding;
  (void)wchar_size;

  full_bounded = true;
  is_plain = true;


  // Member: linear_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: angular_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }

  // Member: avoid_obstacle
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint8_t);
    current_alignment += array_size * sizeof(uint8_t);
  }

  size_t ret_val = current_alignment - initial_alignment;
  if (is_plain) {
    // All members are plain, and type is not empty.
    // We still need to check that the in-memory alignment
    // is the same as the CDR mandated alignment.
    using DataType = trajectory_interfaces::msg::TrajectoryCommand;
    is_plain =
      (
      offsetof(DataType, avoid_obstacle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static bool _TrajectoryCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const trajectory_interfaces::msg::TrajectoryCommand *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _TrajectoryCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<trajectory_interfaces::msg::TrajectoryCommand *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _TrajectoryCommand__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const trajectory_interfaces::msg::TrajectoryCommand *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _TrajectoryCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_TrajectoryCommand(full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}

static message_type_support_callbacks_t _TrajectoryCommand__callbacks = {
  "trajectory_interfaces::msg",
  "TrajectoryCommand",
  _TrajectoryCommand__cdr_serialize,
  _TrajectoryCommand__cdr_deserialize,
  _TrajectoryCommand__get_serialized_size,
  _TrajectoryCommand__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryCommand__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_TrajectoryCommand__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace trajectory_interfaces

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_trajectory_interfaces
const rosidl_message_type_support_t *
get_message_type_support_handle<trajectory_interfaces::msg::TrajectoryCommand>()
{
  return &trajectory_interfaces::msg::typesupport_fastrtps_cpp::_TrajectoryCommand__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, trajectory_interfaces, msg, TrajectoryCommand)() {
  return &trajectory_interfaces::msg::typesupport_fastrtps_cpp::_TrajectoryCommand__handle;
}

#ifdef __cplusplus
}
#endif
