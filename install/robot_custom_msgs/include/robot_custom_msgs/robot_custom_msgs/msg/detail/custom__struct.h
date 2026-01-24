// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from robot_custom_msgs:msg/Custom.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/msg/custom.h"


#ifndef ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__STRUCT_H_
#define ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>

// Constants defined in the message

// Include directives for member types
// Member 'direction'
#include "rosidl_runtime_c/string.h"

/// Struct defined in msg/Custom in the package robot_custom_msgs.
typedef struct robot_custom_msgs__msg__Custom
{
  float distance;
  rosidl_runtime_c__String direction;
  float threshold;
} robot_custom_msgs__msg__Custom;

// Struct for a sequence of robot_custom_msgs__msg__Custom.
typedef struct robot_custom_msgs__msg__Custom__Sequence
{
  robot_custom_msgs__msg__Custom * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} robot_custom_msgs__msg__Custom__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ROBOT_CUSTOM_MSGS__MSG__DETAIL__CUSTOM__STRUCT_H_
