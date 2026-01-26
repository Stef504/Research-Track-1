// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_custom_msgs:msg/ExamCustom.idl
// generated code does not contain a copyright notice

#include "robot_custom_msgs/msg/detail/exam_custom__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_custom_msgs
const rosidl_type_hash_t *
robot_custom_msgs__msg__ExamCustom__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x6e, 0xe3, 0x5d, 0x01, 0xcd, 0x69, 0x87, 0x64,
      0x92, 0xc7, 0x51, 0xa8, 0xff, 0x7c, 0x1f, 0xc0,
      0xb4, 0xb7, 0x23, 0xff, 0xee, 0xa1, 0x00, 0xd2,
      0xcc, 0x80, 0xaa, 0x6c, 0x43, 0x5c, 0xef, 0x29,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_custom_msgs__msg__ExamCustom__TYPE_NAME[] = "robot_custom_msgs/msg/ExamCustom";

// Define type names, field names, and default values
static char robot_custom_msgs__msg__ExamCustom__FIELD_NAME__linear_velocity[] = "linear_velocity";
static char robot_custom_msgs__msg__ExamCustom__FIELD_NAME__angular_velocity[] = "angular_velocity";
static char robot_custom_msgs__msg__ExamCustom__FIELD_NAME__name[] = "name";

static rosidl_runtime_c__type_description__Field robot_custom_msgs__msg__ExamCustom__FIELDS[] = {
  {
    {robot_custom_msgs__msg__ExamCustom__FIELD_NAME__linear_velocity, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_custom_msgs__msg__ExamCustom__FIELD_NAME__angular_velocity, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_custom_msgs__msg__ExamCustom__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_custom_msgs__msg__ExamCustom__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_custom_msgs__msg__ExamCustom__TYPE_NAME, 32, 32},
      {robot_custom_msgs__msg__ExamCustom__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 linear_velocity\n"
  "float32 angular_velocity\n"
  "string name";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_custom_msgs__msg__ExamCustom__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_custom_msgs__msg__ExamCustom__TYPE_NAME, 32, 32},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 60, 60},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_custom_msgs__msg__ExamCustom__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_custom_msgs__msg__ExamCustom__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
