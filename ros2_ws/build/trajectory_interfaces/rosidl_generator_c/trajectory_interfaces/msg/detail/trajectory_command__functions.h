// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice

#ifndef TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__FUNCTIONS_H_
#define TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "trajectory_interfaces/msg/rosidl_generator_c__visibility_control.h"

#include "trajectory_interfaces/msg/detail/trajectory_command__struct.h"

/// Initialize msg/TrajectoryCommand message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * trajectory_interfaces__msg__TrajectoryCommand
 * )) before or use
 * trajectory_interfaces__msg__TrajectoryCommand__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__init(trajectory_interfaces__msg__TrajectoryCommand * msg);

/// Finalize msg/TrajectoryCommand message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
void
trajectory_interfaces__msg__TrajectoryCommand__fini(trajectory_interfaces__msg__TrajectoryCommand * msg);

/// Create msg/TrajectoryCommand message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * trajectory_interfaces__msg__TrajectoryCommand__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
trajectory_interfaces__msg__TrajectoryCommand *
trajectory_interfaces__msg__TrajectoryCommand__create();

/// Destroy msg/TrajectoryCommand message.
/**
 * It calls
 * trajectory_interfaces__msg__TrajectoryCommand__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
void
trajectory_interfaces__msg__TrajectoryCommand__destroy(trajectory_interfaces__msg__TrajectoryCommand * msg);

/// Check for msg/TrajectoryCommand message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__are_equal(const trajectory_interfaces__msg__TrajectoryCommand * lhs, const trajectory_interfaces__msg__TrajectoryCommand * rhs);

/// Copy a msg/TrajectoryCommand message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__copy(
  const trajectory_interfaces__msg__TrajectoryCommand * input,
  trajectory_interfaces__msg__TrajectoryCommand * output);

/// Initialize array of msg/TrajectoryCommand messages.
/**
 * It allocates the memory for the number of elements and calls
 * trajectory_interfaces__msg__TrajectoryCommand__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__init(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array, size_t size);

/// Finalize array of msg/TrajectoryCommand messages.
/**
 * It calls
 * trajectory_interfaces__msg__TrajectoryCommand__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
void
trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array);

/// Create array of msg/TrajectoryCommand messages.
/**
 * It allocates the memory for the array and calls
 * trajectory_interfaces__msg__TrajectoryCommand__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
trajectory_interfaces__msg__TrajectoryCommand__Sequence *
trajectory_interfaces__msg__TrajectoryCommand__Sequence__create(size_t size);

/// Destroy array of msg/TrajectoryCommand messages.
/**
 * It calls
 * trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
void
trajectory_interfaces__msg__TrajectoryCommand__Sequence__destroy(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array);

/// Check for msg/TrajectoryCommand message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__are_equal(const trajectory_interfaces__msg__TrajectoryCommand__Sequence * lhs, const trajectory_interfaces__msg__TrajectoryCommand__Sequence * rhs);

/// Copy an array of msg/TrajectoryCommand messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_trajectory_interfaces
bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__copy(
  const trajectory_interfaces__msg__TrajectoryCommand__Sequence * input,
  trajectory_interfaces__msg__TrajectoryCommand__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // TRAJECTORY_INTERFACES__MSG__DETAIL__TRAJECTORY_COMMAND__FUNCTIONS_H_
