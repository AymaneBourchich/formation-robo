// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
// generated code does not contain a copyright notice
#include "trajectory_interfaces/msg/detail/trajectory_command__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


bool
trajectory_interfaces__msg__TrajectoryCommand__init(trajectory_interfaces__msg__TrajectoryCommand * msg)
{
  if (!msg) {
    return false;
  }
  // linear_speed
  // angular_speed
  // avoid_obstacle
  return true;
}

void
trajectory_interfaces__msg__TrajectoryCommand__fini(trajectory_interfaces__msg__TrajectoryCommand * msg)
{
  if (!msg) {
    return;
  }
  // linear_speed
  // angular_speed
  // avoid_obstacle
}

bool
trajectory_interfaces__msg__TrajectoryCommand__are_equal(const trajectory_interfaces__msg__TrajectoryCommand * lhs, const trajectory_interfaces__msg__TrajectoryCommand * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_speed
  if (lhs->linear_speed != rhs->linear_speed) {
    return false;
  }
  // angular_speed
  if (lhs->angular_speed != rhs->angular_speed) {
    return false;
  }
  // avoid_obstacle
  if (lhs->avoid_obstacle != rhs->avoid_obstacle) {
    return false;
  }
  return true;
}

bool
trajectory_interfaces__msg__TrajectoryCommand__copy(
  const trajectory_interfaces__msg__TrajectoryCommand * input,
  trajectory_interfaces__msg__TrajectoryCommand * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_speed
  output->linear_speed = input->linear_speed;
  // angular_speed
  output->angular_speed = input->angular_speed;
  // avoid_obstacle
  output->avoid_obstacle = input->avoid_obstacle;
  return true;
}

trajectory_interfaces__msg__TrajectoryCommand *
trajectory_interfaces__msg__TrajectoryCommand__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_interfaces__msg__TrajectoryCommand * msg = (trajectory_interfaces__msg__TrajectoryCommand *)allocator.allocate(sizeof(trajectory_interfaces__msg__TrajectoryCommand), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(trajectory_interfaces__msg__TrajectoryCommand));
  bool success = trajectory_interfaces__msg__TrajectoryCommand__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
trajectory_interfaces__msg__TrajectoryCommand__destroy(trajectory_interfaces__msg__TrajectoryCommand * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    trajectory_interfaces__msg__TrajectoryCommand__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__init(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_interfaces__msg__TrajectoryCommand * data = NULL;

  if (size) {
    data = (trajectory_interfaces__msg__TrajectoryCommand *)allocator.zero_allocate(size, sizeof(trajectory_interfaces__msg__TrajectoryCommand), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = trajectory_interfaces__msg__TrajectoryCommand__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        trajectory_interfaces__msg__TrajectoryCommand__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      trajectory_interfaces__msg__TrajectoryCommand__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

trajectory_interfaces__msg__TrajectoryCommand__Sequence *
trajectory_interfaces__msg__TrajectoryCommand__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  trajectory_interfaces__msg__TrajectoryCommand__Sequence * array = (trajectory_interfaces__msg__TrajectoryCommand__Sequence *)allocator.allocate(sizeof(trajectory_interfaces__msg__TrajectoryCommand__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = trajectory_interfaces__msg__TrajectoryCommand__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
trajectory_interfaces__msg__TrajectoryCommand__Sequence__destroy(trajectory_interfaces__msg__TrajectoryCommand__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    trajectory_interfaces__msg__TrajectoryCommand__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__are_equal(const trajectory_interfaces__msg__TrajectoryCommand__Sequence * lhs, const trajectory_interfaces__msg__TrajectoryCommand__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!trajectory_interfaces__msg__TrajectoryCommand__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
trajectory_interfaces__msg__TrajectoryCommand__Sequence__copy(
  const trajectory_interfaces__msg__TrajectoryCommand__Sequence * input,
  trajectory_interfaces__msg__TrajectoryCommand__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(trajectory_interfaces__msg__TrajectoryCommand);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    trajectory_interfaces__msg__TrajectoryCommand * data =
      (trajectory_interfaces__msg__TrajectoryCommand *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!trajectory_interfaces__msg__TrajectoryCommand__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          trajectory_interfaces__msg__TrajectoryCommand__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!trajectory_interfaces__msg__TrajectoryCommand__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
