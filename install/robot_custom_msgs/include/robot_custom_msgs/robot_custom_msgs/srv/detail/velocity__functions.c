// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from robot_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice
#include "robot_custom_msgs/srv/detail/velocity__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
robot_custom_msgs__srv__Velocity_Request__init(robot_custom_msgs__srv__Velocity_Request * msg)
{
  if (!msg) {
    return false;
  }
  // min
  // max
  return true;
}

void
robot_custom_msgs__srv__Velocity_Request__fini(robot_custom_msgs__srv__Velocity_Request * msg)
{
  if (!msg) {
    return;
  }
  // min
  // max
}

bool
robot_custom_msgs__srv__Velocity_Request__are_equal(const robot_custom_msgs__srv__Velocity_Request * lhs, const robot_custom_msgs__srv__Velocity_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // min
  if (lhs->min != rhs->min) {
    return false;
  }
  // max
  if (lhs->max != rhs->max) {
    return false;
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Request__copy(
  const robot_custom_msgs__srv__Velocity_Request * input,
  robot_custom_msgs__srv__Velocity_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // min
  output->min = input->min;
  // max
  output->max = input->max;
  return true;
}

robot_custom_msgs__srv__Velocity_Request *
robot_custom_msgs__srv__Velocity_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Request * msg = (robot_custom_msgs__srv__Velocity_Request *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_custom_msgs__srv__Velocity_Request));
  bool success = robot_custom_msgs__srv__Velocity_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_custom_msgs__srv__Velocity_Request__destroy(robot_custom_msgs__srv__Velocity_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_custom_msgs__srv__Velocity_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_custom_msgs__srv__Velocity_Request__Sequence__init(robot_custom_msgs__srv__Velocity_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Request * data = NULL;

  if (size) {
    data = (robot_custom_msgs__srv__Velocity_Request *)allocator.zero_allocate(size, sizeof(robot_custom_msgs__srv__Velocity_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_custom_msgs__srv__Velocity_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_custom_msgs__srv__Velocity_Request__fini(&data[i - 1]);
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
robot_custom_msgs__srv__Velocity_Request__Sequence__fini(robot_custom_msgs__srv__Velocity_Request__Sequence * array)
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
      robot_custom_msgs__srv__Velocity_Request__fini(&array->data[i]);
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

robot_custom_msgs__srv__Velocity_Request__Sequence *
robot_custom_msgs__srv__Velocity_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Request__Sequence * array = (robot_custom_msgs__srv__Velocity_Request__Sequence *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_custom_msgs__srv__Velocity_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_custom_msgs__srv__Velocity_Request__Sequence__destroy(robot_custom_msgs__srv__Velocity_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_custom_msgs__srv__Velocity_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_custom_msgs__srv__Velocity_Request__Sequence__are_equal(const robot_custom_msgs__srv__Velocity_Request__Sequence * lhs, const robot_custom_msgs__srv__Velocity_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Request__Sequence__copy(
  const robot_custom_msgs__srv__Velocity_Request__Sequence * input,
  robot_custom_msgs__srv__Velocity_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_custom_msgs__srv__Velocity_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_custom_msgs__srv__Velocity_Request * data =
      (robot_custom_msgs__srv__Velocity_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_custom_msgs__srv__Velocity_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_custom_msgs__srv__Velocity_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
robot_custom_msgs__srv__Velocity_Response__init(robot_custom_msgs__srv__Velocity_Response * msg)
{
  if (!msg) {
    return false;
  }
  // x
  // z
  return true;
}

void
robot_custom_msgs__srv__Velocity_Response__fini(robot_custom_msgs__srv__Velocity_Response * msg)
{
  if (!msg) {
    return;
  }
  // x
  // z
}

bool
robot_custom_msgs__srv__Velocity_Response__are_equal(const robot_custom_msgs__srv__Velocity_Response * lhs, const robot_custom_msgs__srv__Velocity_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // x
  if (lhs->x != rhs->x) {
    return false;
  }
  // z
  if (lhs->z != rhs->z) {
    return false;
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Response__copy(
  const robot_custom_msgs__srv__Velocity_Response * input,
  robot_custom_msgs__srv__Velocity_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // x
  output->x = input->x;
  // z
  output->z = input->z;
  return true;
}

robot_custom_msgs__srv__Velocity_Response *
robot_custom_msgs__srv__Velocity_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Response * msg = (robot_custom_msgs__srv__Velocity_Response *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_custom_msgs__srv__Velocity_Response));
  bool success = robot_custom_msgs__srv__Velocity_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_custom_msgs__srv__Velocity_Response__destroy(robot_custom_msgs__srv__Velocity_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_custom_msgs__srv__Velocity_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_custom_msgs__srv__Velocity_Response__Sequence__init(robot_custom_msgs__srv__Velocity_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Response * data = NULL;

  if (size) {
    data = (robot_custom_msgs__srv__Velocity_Response *)allocator.zero_allocate(size, sizeof(robot_custom_msgs__srv__Velocity_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_custom_msgs__srv__Velocity_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_custom_msgs__srv__Velocity_Response__fini(&data[i - 1]);
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
robot_custom_msgs__srv__Velocity_Response__Sequence__fini(robot_custom_msgs__srv__Velocity_Response__Sequence * array)
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
      robot_custom_msgs__srv__Velocity_Response__fini(&array->data[i]);
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

robot_custom_msgs__srv__Velocity_Response__Sequence *
robot_custom_msgs__srv__Velocity_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Response__Sequence * array = (robot_custom_msgs__srv__Velocity_Response__Sequence *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_custom_msgs__srv__Velocity_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_custom_msgs__srv__Velocity_Response__Sequence__destroy(robot_custom_msgs__srv__Velocity_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_custom_msgs__srv__Velocity_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_custom_msgs__srv__Velocity_Response__Sequence__are_equal(const robot_custom_msgs__srv__Velocity_Response__Sequence * lhs, const robot_custom_msgs__srv__Velocity_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Response__Sequence__copy(
  const robot_custom_msgs__srv__Velocity_Response__Sequence * input,
  robot_custom_msgs__srv__Velocity_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_custom_msgs__srv__Velocity_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_custom_msgs__srv__Velocity_Response * data =
      (robot_custom_msgs__srv__Velocity_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_custom_msgs__srv__Velocity_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_custom_msgs__srv__Velocity_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `info`
#include "service_msgs/msg/detail/service_event_info__functions.h"
// Member `request`
// Member `response`
// already included above
// #include "robot_custom_msgs/srv/detail/velocity__functions.h"

bool
robot_custom_msgs__srv__Velocity_Event__init(robot_custom_msgs__srv__Velocity_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    robot_custom_msgs__srv__Velocity_Event__fini(msg);
    return false;
  }
  // request
  if (!robot_custom_msgs__srv__Velocity_Request__Sequence__init(&msg->request, 0)) {
    robot_custom_msgs__srv__Velocity_Event__fini(msg);
    return false;
  }
  // response
  if (!robot_custom_msgs__srv__Velocity_Response__Sequence__init(&msg->response, 0)) {
    robot_custom_msgs__srv__Velocity_Event__fini(msg);
    return false;
  }
  return true;
}

void
robot_custom_msgs__srv__Velocity_Event__fini(robot_custom_msgs__srv__Velocity_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  robot_custom_msgs__srv__Velocity_Request__Sequence__fini(&msg->request);
  // response
  robot_custom_msgs__srv__Velocity_Response__Sequence__fini(&msg->response);
}

bool
robot_custom_msgs__srv__Velocity_Event__are_equal(const robot_custom_msgs__srv__Velocity_Event * lhs, const robot_custom_msgs__srv__Velocity_Event * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__are_equal(
      &(lhs->info), &(rhs->info)))
  {
    return false;
  }
  // request
  if (!robot_custom_msgs__srv__Velocity_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!robot_custom_msgs__srv__Velocity_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Event__copy(
  const robot_custom_msgs__srv__Velocity_Event * input,
  robot_custom_msgs__srv__Velocity_Event * output)
{
  if (!input || !output) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__copy(
      &(input->info), &(output->info)))
  {
    return false;
  }
  // request
  if (!robot_custom_msgs__srv__Velocity_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!robot_custom_msgs__srv__Velocity_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

robot_custom_msgs__srv__Velocity_Event *
robot_custom_msgs__srv__Velocity_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Event * msg = (robot_custom_msgs__srv__Velocity_Event *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(robot_custom_msgs__srv__Velocity_Event));
  bool success = robot_custom_msgs__srv__Velocity_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
robot_custom_msgs__srv__Velocity_Event__destroy(robot_custom_msgs__srv__Velocity_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    robot_custom_msgs__srv__Velocity_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
robot_custom_msgs__srv__Velocity_Event__Sequence__init(robot_custom_msgs__srv__Velocity_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Event * data = NULL;

  if (size) {
    data = (robot_custom_msgs__srv__Velocity_Event *)allocator.zero_allocate(size, sizeof(robot_custom_msgs__srv__Velocity_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = robot_custom_msgs__srv__Velocity_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        robot_custom_msgs__srv__Velocity_Event__fini(&data[i - 1]);
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
robot_custom_msgs__srv__Velocity_Event__Sequence__fini(robot_custom_msgs__srv__Velocity_Event__Sequence * array)
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
      robot_custom_msgs__srv__Velocity_Event__fini(&array->data[i]);
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

robot_custom_msgs__srv__Velocity_Event__Sequence *
robot_custom_msgs__srv__Velocity_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  robot_custom_msgs__srv__Velocity_Event__Sequence * array = (robot_custom_msgs__srv__Velocity_Event__Sequence *)allocator.allocate(sizeof(robot_custom_msgs__srv__Velocity_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = robot_custom_msgs__srv__Velocity_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
robot_custom_msgs__srv__Velocity_Event__Sequence__destroy(robot_custom_msgs__srv__Velocity_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    robot_custom_msgs__srv__Velocity_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
robot_custom_msgs__srv__Velocity_Event__Sequence__are_equal(const robot_custom_msgs__srv__Velocity_Event__Sequence * lhs, const robot_custom_msgs__srv__Velocity_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
robot_custom_msgs__srv__Velocity_Event__Sequence__copy(
  const robot_custom_msgs__srv__Velocity_Event__Sequence * input,
  robot_custom_msgs__srv__Velocity_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(robot_custom_msgs__srv__Velocity_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    robot_custom_msgs__srv__Velocity_Event * data =
      (robot_custom_msgs__srv__Velocity_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!robot_custom_msgs__srv__Velocity_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          robot_custom_msgs__srv__Velocity_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!robot_custom_msgs__srv__Velocity_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
