// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice
#include "robot_custom_msgs/msg/detail/exam_custom__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `name`
#include "rosidl_runtime_c/string_functions.h"

bool
robot_custom_msgs__msg__ExamCustom__init(robot_custom_msgs__msg__ExamCustom * msg)
{
  if (!msg) {
    return false;
  }
  // linear_velocity
  // angular_velocity
  // name
  if (!rosidl_runtime_c__String__init(&msg->name)) {
    robot_custom_msgs__msg__ExamCustom__fini(msg);
    return false;
  }
  return true;
}

void
robot_custom_msgs__msg__ExamCustom__fini(robot_custom_msgs__msg__ExamCustom * msg)
{
  if (!msg) {
    return;
  }
  // linear_velocity
  // angular_velocity
  // name
  rosidl_runtime_c__String__fini(&msg->name);
}

bool
robot_custom_msgs__msg__ExamCustom__are_equal(const robot_custom_msgs__msg__ExamCustom * lhs, const robot_custom_msgs__msg__ExamCustom * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // linear_velocity
  if (lhs->linear_velocity != rhs->linear_velocity) {
    return false;
  }
  // angular_velocity
  if (lhs->angular_velocity != rhs->angular_velocity) {
    return false;
  }
  // name
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->name), &(rhs->name)))
  {
    return false;
  }
  return true;
}

bool
robot_custom_msgs__msg__ExamCustom__copy(
  const robot_custom_msgs__msg__ExamCustom * input,
  robot_custom_msgs__msg__ExamCustom * output)
{
  if (!input || !output) {
    return false;
  }
  // linear_velocity
  output->linear_velocity = input->linear_velocity;
  // angular_velocity
  output->angular_velocity = input->angular_velocity;
  // name
  if (!rosidl_runtime_c__String__copy(
      &(input->name), &(output->name)))
  {
    return false;
  }
  return true;
}

robot_custom_msgs__msg__ExamCustom *
robot_custom_msgs__msg__ExamCustom__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__msg__ExamCustom * msg = (robot_custom_msgs__msg__ExamCustom *)allocator.allocate(sizeof(robot_custom_msgs__msg__ExamCustom), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_custom_msgs__msg__ExamCustom));
  bool success = robot_custom_msgs__msg__ExamCustom__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_custom_msgs__msg__ExamCustom__destroy(robot_custom_msgs__msg__ExamCustom * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_custom_msgs__msg__ExamCustom__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_custom_msgs__msg__ExamCustom__Sequence__init(robot_custom_msgs__msg__ExamCustom__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__msg__ExamCustom * data = NULL;

  if (size) {
    data = (robot_custom_msgs__msg__ExamCustom *)allocator.zero_allocate(size, sizeof(robot_custom_msgs__msg__ExamCustom), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_custom_msgs__msg__ExamCustom__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_custom_msgs__msg__ExamCustom__fini(&data[i - 1]);
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
robot_custom_msgs__msg__ExamCustom__Sequence__fini(robot_custom_msgs__msg__ExamCustom__Sequence * array)
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
      robot_custom_msgs__msg__ExamCustom__fini(&array->data[i]);
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

robot_custom_msgs__msg__ExamCustom__Sequence *
robot_custom_msgs__msg__ExamCustom__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__msg__ExamCustom__Sequence * array = (robot_custom_msgs__msg__ExamCustom__Sequence *)allocator.allocate(sizeof(robot_custom_msgs__msg__ExamCustom__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_custom_msgs__msg__ExamCustom__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_custom_msgs__msg__ExamCustom__Sequence__destroy(robot_custom_msgs__msg__ExamCustom__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_custom_msgs__msg__ExamCustom__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_custom_msgs__msg__ExamCustom__Sequence__are_equal(const robot_custom_msgs__msg__ExamCustom__Sequence * lhs, const robot_custom_msgs__msg__ExamCustom__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_custom_msgs__msg__ExamCustom__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_custom_msgs__msg__ExamCustom__Sequence__copy(
  const robot_custom_msgs__msg__ExamCustom__Sequence * input,
  robot_custom_msgs__msg__ExamCustom__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_custom_msgs__msg__ExamCustom);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_custom_msgs__msg__ExamCustom * data =
      (robot_custom_msgs__msg__ExamCustom *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_custom_msgs__msg__ExamCustom__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_custom_msgs__msg__ExamCustom__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_custom_msgs__msg__ExamCustom__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
