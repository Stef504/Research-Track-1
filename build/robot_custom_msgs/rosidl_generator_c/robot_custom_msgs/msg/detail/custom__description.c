// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from robot_custom_msgs:msg/Custom.idl
// generated code does not contain a copyright notice

#include "robot_custom_msgs/msg/detail/custom__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_robot_custom_msgs
const rosidl_type_hash_t *
robot_custom_msgs__msg__Custom__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xf4, 0x65, 0xb9, 0xd9, 0xbe, 0x37, 0xd4, 0xa0,
      0x92, 0x72, 0xe0, 0xbb, 0xee, 0x81, 0xf2, 0xd3,
      0xb2, 0xcd, 0x73, 0x34, 0xe5, 0x46, 0xbe, 0x7d,
      0x4a, 0x7b, 0xe5, 0x3f, 0xbe, 0x67, 0xad, 0xa8,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char robot_custom_msgs__msg__Custom__TYPE_NAME[] = "robot_custom_msgs/msg/Custom";

// Define type names, field names, and default values
static char robot_custom_msgs__msg__Custom__FIELD_NAME__distance[] = "distance";
static char robot_custom_msgs__msg__Custom__FIELD_NAME__direction[] = "direction";
static char robot_custom_msgs__msg__Custom__FIELD_NAME__threshold[] = "threshold";

static rosidl_runtime_c__type_description__Field robot_custom_msgs__msg__Custom__FIELDS[] = {
  {
    {robot_custom_msgs__msg__Custom__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_custom_msgs__msg__Custom__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {robot_custom_msgs__msg__Custom__FIELD_NAME__threshold, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
robot_custom_msgs__msg__Custom__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {robot_custom_msgs__msg__Custom__TYPE_NAME, 28, 28},
      {robot_custom_msgs__msg__Custom__FIELDS, 3, 3},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 distance\n"
  "string direction\n"
  "float32 threshold";

static char msg_encoding[] = "msg";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
robot_custom_msgs__msg__Custom__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {robot_custom_msgs__msg__Custom__TYPE_NAME, 28, 28},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
robot_custom_msgs__msg__Custom__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *robot_custom_msgs__msg__Custom__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
