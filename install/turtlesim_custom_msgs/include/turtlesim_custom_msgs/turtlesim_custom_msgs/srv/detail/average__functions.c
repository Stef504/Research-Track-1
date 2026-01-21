// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from turtlesim_custom_msgs:srv/Average.idl
// generated code does not contain a copyright notice
#include "turtlesim_custom_msgs/srv/detail/average__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"

bool
turtlesim_custom_msgs__srv__Average_Request__init(turtlesim_custom_msgs__srv__Average_Request * msg)
{
  if (!msg) {
    return false;
  }
  // count
  return true;
}

void
turtlesim_custom_msgs__srv__Average_Request__fini(turtlesim_custom_msgs__srv__Average_Request * msg)
{
  if (!msg) {
    return;
  }
  // count
}

bool
turtlesim_custom_msgs__srv__Average_Request__are_equal(const turtlesim_custom_msgs__srv__Average_Request * lhs, const turtlesim_custom_msgs__srv__Average_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // count
  if (lhs->count != rhs->count) {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Request__copy(
  const turtlesim_custom_msgs__srv__Average_Request * input,
  turtlesim_custom_msgs__srv__Average_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // count
  output->count = input->count;
  return true;
}

turtlesim_custom_msgs__srv__Average_Request *
turtlesim_custom_msgs__srv__Average_Request__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Request * msg = (turtlesim_custom_msgs__srv__Average_Request *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Request), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msgs__srv__Average_Request));
  bool success = turtlesim_custom_msgs__srv__Average_Request__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msgs__srv__Average_Request__destroy(turtlesim_custom_msgs__srv__Average_Request * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msgs__srv__Average_Request__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msgs__srv__Average_Request__Sequence__init(turtlesim_custom_msgs__srv__Average_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Request * data = NULL;

  if (size) {
    data = (turtlesim_custom_msgs__srv__Average_Request *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msgs__srv__Average_Request), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msgs__srv__Average_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msgs__srv__Average_Request__fini(&data[i - 1]);
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
turtlesim_custom_msgs__srv__Average_Request__Sequence__fini(turtlesim_custom_msgs__srv__Average_Request__Sequence * array)
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
      turtlesim_custom_msgs__srv__Average_Request__fini(&array->data[i]);
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

turtlesim_custom_msgs__srv__Average_Request__Sequence *
turtlesim_custom_msgs__srv__Average_Request__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Request__Sequence * array = (turtlesim_custom_msgs__srv__Average_Request__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Request__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msgs__srv__Average_Request__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msgs__srv__Average_Request__Sequence__destroy(turtlesim_custom_msgs__srv__Average_Request__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msgs__srv__Average_Request__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msgs__srv__Average_Request__Sequence__are_equal(const turtlesim_custom_msgs__srv__Average_Request__Sequence * lhs, const turtlesim_custom_msgs__srv__Average_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Request__Sequence__copy(
  const turtlesim_custom_msgs__srv__Average_Request__Sequence * input,
  turtlesim_custom_msgs__srv__Average_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msgs__srv__Average_Request);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msgs__srv__Average_Request * data =
      (turtlesim_custom_msgs__srv__Average_Request *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msgs__srv__Average_Request__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msgs__srv__Average_Request__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


bool
turtlesim_custom_msgs__srv__Average_Response__init(turtlesim_custom_msgs__srv__Average_Response * msg)
{
  if (!msg) {
    return false;
  }
  // avg_linear
  // avg_angular
  return true;
}

void
turtlesim_custom_msgs__srv__Average_Response__fini(turtlesim_custom_msgs__srv__Average_Response * msg)
{
  if (!msg) {
    return;
  }
  // avg_linear
  // avg_angular
}

bool
turtlesim_custom_msgs__srv__Average_Response__are_equal(const turtlesim_custom_msgs__srv__Average_Response * lhs, const turtlesim_custom_msgs__srv__Average_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // avg_linear
  if (lhs->avg_linear != rhs->avg_linear) {
    return false;
  }
  // avg_angular
  if (lhs->avg_angular != rhs->avg_angular) {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Response__copy(
  const turtlesim_custom_msgs__srv__Average_Response * input,
  turtlesim_custom_msgs__srv__Average_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // avg_linear
  output->avg_linear = input->avg_linear;
  // avg_angular
  output->avg_angular = input->avg_angular;
  return true;
}

turtlesim_custom_msgs__srv__Average_Response *
turtlesim_custom_msgs__srv__Average_Response__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Response * msg = (turtlesim_custom_msgs__srv__Average_Response *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Response), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msgs__srv__Average_Response));
  bool success = turtlesim_custom_msgs__srv__Average_Response__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msgs__srv__Average_Response__destroy(turtlesim_custom_msgs__srv__Average_Response * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msgs__srv__Average_Response__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msgs__srv__Average_Response__Sequence__init(turtlesim_custom_msgs__srv__Average_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Response * data = NULL;

  if (size) {
    data = (turtlesim_custom_msgs__srv__Average_Response *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msgs__srv__Average_Response), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msgs__srv__Average_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msgs__srv__Average_Response__fini(&data[i - 1]);
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
turtlesim_custom_msgs__srv__Average_Response__Sequence__fini(turtlesim_custom_msgs__srv__Average_Response__Sequence * array)
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
      turtlesim_custom_msgs__srv__Average_Response__fini(&array->data[i]);
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

turtlesim_custom_msgs__srv__Average_Response__Sequence *
turtlesim_custom_msgs__srv__Average_Response__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Response__Sequence * array = (turtlesim_custom_msgs__srv__Average_Response__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Response__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msgs__srv__Average_Response__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msgs__srv__Average_Response__Sequence__destroy(turtlesim_custom_msgs__srv__Average_Response__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msgs__srv__Average_Response__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msgs__srv__Average_Response__Sequence__are_equal(const turtlesim_custom_msgs__srv__Average_Response__Sequence * lhs, const turtlesim_custom_msgs__srv__Average_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Response__Sequence__copy(
  const turtlesim_custom_msgs__srv__Average_Response__Sequence * input,
  turtlesim_custom_msgs__srv__Average_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msgs__srv__Average_Response);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msgs__srv__Average_Response * data =
      (turtlesim_custom_msgs__srv__Average_Response *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msgs__srv__Average_Response__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msgs__srv__Average_Response__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Response__copy(
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
// #include "turtlesim_custom_msgs/srv/detail/average__functions.h"

bool
turtlesim_custom_msgs__srv__Average_Event__init(turtlesim_custom_msgs__srv__Average_Event * msg)
{
  if (!msg) {
    return false;
  }
  // info
  if (!service_msgs__msg__ServiceEventInfo__init(&msg->info)) {
    turtlesim_custom_msgs__srv__Average_Event__fini(msg);
    return false;
  }
  // request
  if (!turtlesim_custom_msgs__srv__Average_Request__Sequence__init(&msg->request, 0)) {
    turtlesim_custom_msgs__srv__Average_Event__fini(msg);
    return false;
  }
  // response
  if (!turtlesim_custom_msgs__srv__Average_Response__Sequence__init(&msg->response, 0)) {
    turtlesim_custom_msgs__srv__Average_Event__fini(msg);
    return false;
  }
  return true;
}

void
turtlesim_custom_msgs__srv__Average_Event__fini(turtlesim_custom_msgs__srv__Average_Event * msg)
{
  if (!msg) {
    return;
  }
  // info
  service_msgs__msg__ServiceEventInfo__fini(&msg->info);
  // request
  turtlesim_custom_msgs__srv__Average_Request__Sequence__fini(&msg->request);
  // response
  turtlesim_custom_msgs__srv__Average_Response__Sequence__fini(&msg->response);
}

bool
turtlesim_custom_msgs__srv__Average_Event__are_equal(const turtlesim_custom_msgs__srv__Average_Event * lhs, const turtlesim_custom_msgs__srv__Average_Event * rhs)
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
  if (!turtlesim_custom_msgs__srv__Average_Request__Sequence__are_equal(
      &(lhs->request), &(rhs->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_custom_msgs__srv__Average_Response__Sequence__are_equal(
      &(lhs->response), &(rhs->response)))
  {
    return false;
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Event__copy(
  const turtlesim_custom_msgs__srv__Average_Event * input,
  turtlesim_custom_msgs__srv__Average_Event * output)
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
  if (!turtlesim_custom_msgs__srv__Average_Request__Sequence__copy(
      &(input->request), &(output->request)))
  {
    return false;
  }
  // response
  if (!turtlesim_custom_msgs__srv__Average_Response__Sequence__copy(
      &(input->response), &(output->response)))
  {
    return false;
  }
  return true;
}

turtlesim_custom_msgs__srv__Average_Event *
turtlesim_custom_msgs__srv__Average_Event__create(void)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Event * msg = (turtlesim_custom_msgs__srv__Average_Event *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Event), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(turtlesim_custom_msgs__srv__Average_Event));
  bool success = turtlesim_custom_msgs__srv__Average_Event__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
turtlesim_custom_msgs__srv__Average_Event__destroy(turtlesim_custom_msgs__srv__Average_Event * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    turtlesim_custom_msgs__srv__Average_Event__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
turtlesim_custom_msgs__srv__Average_Event__Sequence__init(turtlesim_custom_msgs__srv__Average_Event__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Event * data = NULL;

  if (size) {
    data = (turtlesim_custom_msgs__srv__Average_Event *)allocator.zero_allocate(size, sizeof(turtlesim_custom_msgs__srv__Average_Event), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = turtlesim_custom_msgs__srv__Average_Event__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        turtlesim_custom_msgs__srv__Average_Event__fini(&data[i - 1]);
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
turtlesim_custom_msgs__srv__Average_Event__Sequence__fini(turtlesim_custom_msgs__srv__Average_Event__Sequence * array)
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
      turtlesim_custom_msgs__srv__Average_Event__fini(&array->data[i]);
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

turtlesim_custom_msgs__srv__Average_Event__Sequence *
turtlesim_custom_msgs__srv__Average_Event__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  turtlesim_custom_msgs__srv__Average_Event__Sequence * array = (turtlesim_custom_msgs__srv__Average_Event__Sequence *)allocator.allocate(sizeof(turtlesim_custom_msgs__srv__Average_Event__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = turtlesim_custom_msgs__srv__Average_Event__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
turtlesim_custom_msgs__srv__Average_Event__Sequence__destroy(turtlesim_custom_msgs__srv__Average_Event__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    turtlesim_custom_msgs__srv__Average_Event__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
turtlesim_custom_msgs__srv__Average_Event__Sequence__are_equal(const turtlesim_custom_msgs__srv__Average_Event__Sequence * lhs, const turtlesim_custom_msgs__srv__Average_Event__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Event__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
turtlesim_custom_msgs__srv__Average_Event__Sequence__copy(
  const turtlesim_custom_msgs__srv__Average_Event__Sequence * input,
  turtlesim_custom_msgs__srv__Average_Event__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(turtlesim_custom_msgs__srv__Average_Event);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    turtlesim_custom_msgs__srv__Average_Event * data =
      (turtlesim_custom_msgs__srv__Average_Event *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!turtlesim_custom_msgs__srv__Average_Event__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          turtlesim_custom_msgs__srv__Average_Event__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!turtlesim_custom_msgs__srv__Average_Event__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
