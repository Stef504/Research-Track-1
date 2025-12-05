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
      0x4d, 0xf2, 0x0f, 0xe3, 0xa0, 0x80, 0x1e, 0x12,
      0x53, 0xc4, 0xd4, 0x75, 0xce, 0x1a, 0x6d, 0xde,
      0xfb, 0xaf, 0x3e, 0x38, 0x1c, 0xa0, 0x0d, 0x45,
      0x4c, 0xf6, 0x10, 0x73, 0x75, 0x57, 0xda, 0xb7,
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
static char turtlesim_custom_msgs__msg__Vel__FIELD_NAME__name[] = "name";
static char turtlesim_custom_msgs__msg__Vel__FIELD_NAME__vel[] = "vel";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__msg__Vel__FIELDS[] = {
  {
    {turtlesim_custom_msgs__msg__Vel__FIELD_NAME__name, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_STRING,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__msg__Vel__FIELD_NAME__vel, 3, 3},
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
      {turtlesim_custom_msgs__msg__Vel__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "string name\n"
  "float32 vel";

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
    {toplevel_type_raw_source, 23, 23},
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
