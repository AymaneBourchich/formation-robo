// generated from rosidl_typesupport_fastrtps_c/resource/idl__type_support_c.cpp.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice
#include "trajectory_interfaces/msg/detail/trajectory_command__rosidl_typesupport_fastrtps_c.h"


#include <cassert>
#include <limits>
#include <string>
#include "rosidl_typesupport_fastrtps_c/identifier.h"
#include "rosidl_typesupport_fastrtps_c/wstring_conversion.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "trajectory_interfaces/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "trajectory_interfaces/msg/detail/trajectory_command__struct.h"
#include "trajectory_interfaces/msg/detail/trajectory_command__functions.h"
#include "fastcdr/Cdr.h"

#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-parameter"
# ifdef __clang__
#  pragma clang diagnostic ignored "-Wdeprecated-register"
#  pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
# endif
#endif
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif

// includes and forward declarations of message dependencies and their conversion functions

#if defined(__cplusplus)
extern "C"
{
#endif


// forward declare type support functions


using _TrajectoryCommand__ros_msg_type = trajectory_interfaces__msg__TrajectoryCommand;

static bool _TrajectoryCommand__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  const _TrajectoryCommand__ros_msg_type * ros_message = static_cast<const _TrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_speed
  {
    cdr << ros_message->linear_speed;
  }

  // Field name: angular_speed
  {
    cdr << ros_message->angular_speed;
  }

  // Field name: avoid_obstacle
  {
    cdr << (ros_message->avoid_obstacle ? true : false);
  }

  return true;
}

static bool _TrajectoryCommand__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  if (!untyped_ros_message) {
    fprintf(stderr, "ros message handle is null\n");
    return false;
  }
  _TrajectoryCommand__ros_msg_type * ros_message = static_cast<_TrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  // Field name: linear_speed
  {
    cdr >> ros_message->linear_speed;
  }

  // Field name: angular_speed
  {
    cdr >> ros_message->angular_speed;
  }

  // Field name: avoid_obstacle
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message->avoid_obstacle = tmp ? true : false;
  }

  return true;
}  // NOLINT(readability/fn_size)

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_interfaces
size_t get_serialized_size_trajectory_interfaces__msg__TrajectoryCommand(
  const void * untyped_ros_message,
  size_t current_alignment)
{
  const _TrajectoryCommand__ros_msg_type * ros_message = static_cast<const _TrajectoryCommand__ros_msg_type *>(untyped_ros_message);
  (void)ros_message;
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // field.name linear_speed
  {
    size_t item_size = sizeof(ros_message->linear_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name angular_speed
  {
    size_t item_size = sizeof(ros_message->angular_speed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // field.name avoid_obstacle
  {
    size_t item_size = sizeof(ros_message->avoid_obstacle);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

static uint32_t _TrajectoryCommand__get_serialized_size(const void * untyped_ros_message)
{
  return static_cast<uint32_t>(
    get_serialized_size_trajectory_interfaces__msg__TrajectoryCommand(
      untyped_ros_message, 0));
}

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_trajectory_interfaces
size_t max_serialized_size_trajectory_interfaces__msg__TrajectoryCommand(
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

  // member: linear_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: angular_speed
  {
    size_t array_size = 1;

    last_member_size = array_size * sizeof(uint32_t);
    current_alignment += array_size * sizeof(uint32_t) +
      eprosima::fastcdr::Cdr::alignment(current_alignment, sizeof(uint32_t));
  }
  // member: avoid_obstacle
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
    using DataType = trajectory_interfaces__msg__TrajectoryCommand;
    is_plain =
      (
      offsetof(DataType, avoid_obstacle) +
      last_member_size
      ) == ret_val;
  }

  return ret_val;
}

static size_t _TrajectoryCommand__max_serialized_size(char & bounds_info)
{
  bool full_bounded;
  bool is_plain;
  size_t ret_val;

  ret_val = max_serialized_size_trajectory_interfaces__msg__TrajectoryCommand(
    full_bounded, is_plain, 0);

  bounds_info =
    is_plain ? ROSIDL_TYPESUPPORT_FASTRTPS_PLAIN_TYPE :
    full_bounded ? ROSIDL_TYPESUPPORT_FASTRTPS_BOUNDED_TYPE : ROSIDL_TYPESUPPORT_FASTRTPS_UNBOUNDED_TYPE;
  return ret_val;
}


static message_type_support_callbacks_t __callbacks_TrajectoryCommand = {
  "trajectory_interfaces::msg",
  "TrajectoryCommand",
  _TrajectoryCommand__cdr_serialize,
  _TrajectoryCommand__cdr_deserialize,
  _TrajectoryCommand__get_serialized_size,
  _TrajectoryCommand__max_serialized_size
};

static rosidl_message_type_support_t _TrajectoryCommand__type_support = {
  rosidl_typesupport_fastrtps_c__identifier,
  &__callbacks_TrajectoryCommand,
  get_message_typesupport_handle_function,
};

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, trajectory_interfaces, msg, TrajectoryCommand)() {
  return &_TrajectoryCommand__type_support;
}

#if defined(__cplusplus)
}
#endif
