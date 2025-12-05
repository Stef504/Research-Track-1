// generated from rosidl_typesupport_fastrtps_c/resource/idl__rosidl_typesupport_fastrtps_c.h.em
// with input from turtlesim_custom_msgs:msg/Vel.idl
// generated code does not contain a copyright notice
#ifndef TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
#define TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_


#include <stddef.h>
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "rosidl_typesupport_interface/macros.h"
#include "turtlesim_custom_msgs/msg/rosidl_typesupport_fastrtps_c__visibility_control.h"
#include "turtlesim_custom_msgs/msg/detail/vel__struct.h"
#include "fastcdr/Cdr.h"

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
bool cdr_serialize_turtlesim_custom_msgs__msg__Vel(
  const turtlesim_custom_msgs__msg__Vel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
bool cdr_deserialize_turtlesim_custom_msgs__msg__Vel(
  eprosima::fastcdr::Cdr &,
  turtlesim_custom_msgs__msg__Vel * ros_message);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
size_t get_serialized_size_turtlesim_custom_msgs__msg__Vel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
size_t max_serialized_size_turtlesim_custom_msgs__msg__Vel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
bool cdr_serialize_key_turtlesim_custom_msgs__msg__Vel(
  const turtlesim_custom_msgs__msg__Vel * ros_message,
  eprosima::fastcdr::Cdr & cdr);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
size_t get_serialized_size_key_turtlesim_custom_msgs__msg__Vel(
  const void * untyped_ros_message,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
size_t max_serialized_size_key_turtlesim_custom_msgs__msg__Vel(
  bool & full_bounded,
  bool & is_plain,
  size_t current_alignment);

ROSIDL_TYPESUPPORT_FASTRTPS_C_PUBLIC_turtlesim_custom_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_c, turtlesim_custom_msgs, msg, Vel)();

#ifdef __cplusplus
}
#endif

#endif  // TURTLESIM_CUSTOM_MSGS__MSG__DETAIL__VEL__ROSIDL_TYPESUPPORT_FASTRTPS_C_H_
