// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim_custom_msgs:msg/Vel.idl
// generated code does not contain a copyright notice

#include "turtlesim_custom_msgs/msg/detail/vel__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim_custom_msgs
const rosidl_type_hash_t *
turtlesim_custom_msgs__msg__Vel__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x5e, 0x6a, 0xdb, 0xf4, 0x4e, 0xe2, 0xca, 0x3c,
      0xf0, 0x83, 0x95, 0x07, 0x47, 0x0e, 0x7c, 0xf6,
      0xd7, 0xdd, 0x4e, 0x84, 0x54, 0xb8, 0x4b, 0xfe,
      0x7d, 0x7c, 0xdb, 0x4b, 0x04, 0x4e, 0x9b, 0x0c,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types

// Hashes for external referenced types
#ifndef NDEBUG
#endif

static char turtlesim_custom_msgs__msg__Vel__TYPE_NAME[] = "turtlesim_custom_msgs/msg/Vel";

// Define type names, field names, and default values
static char turtlesim_custom_msgs__msg__Vel__FIELD_NAME__distance[] = "distance";
static char turtlesim_custom_msgs__msg__Vel__FIELD_NAME__direction[] = "direction";
static char turtlesim_custom_msgs__msg__Vel__FIELD_NAME__threshold[] = "threshold";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__msg__Vel__FIELDS[] = {
  {
    {turtlesim_custom_msgs__msg__Vel__FIELD_NAME__distance, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__msg__Vel__FIELD_NAME__direction, 9, 9},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__msg__Vel__FIELD_NAME__threshold, 9, 9},
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
turtlesim_custom_msgs__msg__Vel__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim_custom_msgs__msg__Vel__TYPE_NAME, 29, 29},
      {turtlesim_custom_msgs__msg__Vel__FIELDS, 3, 3},
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
turtlesim_custom_msgs__msg__Vel__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim_custom_msgs__msg__Vel__TYPE_NAME, 29, 29},
    {msg_encoding, 3, 3},
    {toplevel_type_raw_source, 51, 51},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim_custom_msgs__msg__Vel__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim_custom_msgs__msg__Vel__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}
