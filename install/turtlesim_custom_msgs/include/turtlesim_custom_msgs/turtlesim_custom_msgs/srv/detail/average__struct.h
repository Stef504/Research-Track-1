// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from turtlesim_custom_msgs:srv/Average.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/srv/average.h"


#ifndef TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_
#define TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in srv/Average in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Average_Request
{
  uint8_t structure_needs_at_least_one_member;
} turtlesim_custom_msgs__srv__Average_Request;

// Struct for a sequence of turtlesim_custom_msgs__srv__Average_Request.
typedef struct turtlesim_custom_msgs__srv__Average_Request__Sequence
{
  turtlesim_custom_msgs__srv__Average_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Average_Request__Sequence;

// Constants defined in the message

/// Struct defined in srv/Average in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Average_Response
{
  float avg_linear;
  float avg_angular;
} turtlesim_custom_msgs__srv__Average_Response;

// Struct for a sequence of turtlesim_custom_msgs__srv__Average_Response.
typedef struct turtlesim_custom_msgs__srv__Average_Response__Sequence
{
  turtlesim_custom_msgs__srv__Average_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Average_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  turtlesim_custom_msgs__srv__Average_Event__request__MAX_SIZE = 1
};
// response
enum
{
  turtlesim_custom_msgs__srv__Average_Event__response__MAX_SIZE = 1
};

/// Struct defined in srv/Average in the package turtlesim_custom_msgs.
typedef struct turtlesim_custom_msgs__srv__Average_Event
{
  service_msgs__msg__ServiceEventInfo info;
  turtlesim_custom_msgs__srv__Average_Request__Sequence request;
  turtlesim_custom_msgs__srv__Average_Response__Sequence response;
} turtlesim_custom_msgs__srv__Average_Event;

// Struct for a sequence of turtlesim_custom_msgs__srv__Average_Event.
typedef struct turtlesim_custom_msgs__srv__Average_Event__Sequence
{
  turtlesim_custom_msgs__srv__Average_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} turtlesim_custom_msgs__srv__Average_Event__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__STRUCT_H_
