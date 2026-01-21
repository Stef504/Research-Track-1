// generated from rosidl_generator_c/resource/idl__description.c.em
// with input from turtlesim_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice

#include "turtlesim_custom_msgs/srv/detail/velocity__functions.h"

ROSIDL_GENERATOR_C_PUBLIC_turtlesim_custom_msgs
const rosidl_type_hash_t *
turtlesim_custom_msgs__srv__Velocity__get_type_hash(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0x67, 0x14, 0x74, 0xf1, 0xdc, 0x6d, 0xda, 0xbc,
      0xfa, 0xe6, 0x04, 0x8d, 0xc5, 0x4c, 0xaf, 0xbf,
      0xb1, 0x42, 0x75, 0x68, 0x19, 0xc3, 0xe7, 0x9a,
      0x18, 0x39, 0x2e, 0xab, 0x82, 0x3e, 0xb0, 0x72,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim_custom_msgs
const rosidl_type_hash_t *
turtlesim_custom_msgs__srv__Velocity_Request__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xd0, 0x9e, 0x31, 0x70, 0x56, 0x2d, 0x3a, 0x70,
      0xf7, 0xe4, 0xea, 0x3b, 0x5e, 0xd4, 0xf1, 0x81,
      0xb9, 0x73, 0x74, 0x5a, 0x76, 0xa7, 0xd6, 0x21,
      0x90, 0x12, 0xf9, 0xdb, 0x04, 0xf1, 0xee, 0x43,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim_custom_msgs
const rosidl_type_hash_t *
turtlesim_custom_msgs__srv__Velocity_Response__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xc3, 0xd8, 0x15, 0x02, 0xc4, 0x4b, 0x6c, 0x40,
      0xb2, 0x02, 0x77, 0xa6, 0x9e, 0x75, 0x5d, 0xc6,
      0x36, 0x52, 0x81, 0x1f, 0x12, 0x69, 0x9f, 0x33,
      0xe3, 0x87, 0x17, 0x9b, 0x67, 0x08, 0x40, 0x82,
    }};
  return &hash;
}

ROSIDL_GENERATOR_C_PUBLIC_turtlesim_custom_msgs
const rosidl_type_hash_t *
turtlesim_custom_msgs__srv__Velocity_Event__get_type_hash(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_type_hash_t hash = {1, {
      0xa8, 0x3d, 0x47, 0x51, 0x22, 0x5b, 0x63, 0xa7,
      0xf5, 0x2f, 0x45, 0xce, 0xbc, 0x0d, 0xa1, 0x77,
      0xec, 0xe1, 0x1a, 0x09, 0xf2, 0xf4, 0xca, 0xfa,
      0x42, 0x79, 0xc5, 0x0a, 0x88, 0xcb, 0x5c, 0xd5,
    }};
  return &hash;
}

#include <assert.h>
#include <string.h>

// Include directives for referenced types
#include "builtin_interfaces/msg/detail/time__functions.h"
#include "service_msgs/msg/detail/service_event_info__functions.h"

// Hashes for external referenced types
#ifndef NDEBUG
static const rosidl_type_hash_t builtin_interfaces__msg__Time__EXPECTED_HASH = {1, {
    0xb1, 0x06, 0x23, 0x5e, 0x25, 0xa4, 0xc5, 0xed,
    0x35, 0x09, 0x8a, 0xa0, 0xa6, 0x1a, 0x3e, 0xe9,
    0xc9, 0xb1, 0x8d, 0x19, 0x7f, 0x39, 0x8b, 0x0e,
    0x42, 0x06, 0xce, 0xa9, 0xac, 0xf9, 0xc1, 0x97,
  }};
static const rosidl_type_hash_t service_msgs__msg__ServiceEventInfo__EXPECTED_HASH = {1, {
    0x41, 0xbc, 0xbb, 0xe0, 0x7a, 0x75, 0xc9, 0xb5,
    0x2b, 0xc9, 0x6b, 0xfd, 0x5c, 0x24, 0xd7, 0xf0,
    0xfc, 0x0a, 0x08, 0xc0, 0xcb, 0x79, 0x21, 0xb3,
    0x37, 0x3c, 0x57, 0x32, 0x34, 0x5a, 0x6f, 0x45,
  }};
#endif

static char turtlesim_custom_msgs__srv__Velocity__TYPE_NAME[] = "turtlesim_custom_msgs/srv/Velocity";
static char builtin_interfaces__msg__Time__TYPE_NAME[] = "builtin_interfaces/msg/Time";
static char service_msgs__msg__ServiceEventInfo__TYPE_NAME[] = "service_msgs/msg/ServiceEventInfo";
static char turtlesim_custom_msgs__srv__Velocity_Event__TYPE_NAME[] = "turtlesim_custom_msgs/srv/Velocity_Event";
static char turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME[] = "turtlesim_custom_msgs/srv/Velocity_Request";
static char turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME[] = "turtlesim_custom_msgs/srv/Velocity_Response";

// Define type names, field names, and default values
static char turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__request_message[] = "request_message";
static char turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__response_message[] = "response_message";
static char turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__event_message[] = "event_message";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__srv__Velocity__FIELDS[] = {
  {
    {turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__request_message, 15, 15},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__response_message, 16, 16},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity__FIELD_NAME__event_message, 13, 13},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {turtlesim_custom_msgs__srv__Velocity_Event__TYPE_NAME, 40, 40},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim_custom_msgs__srv__Velocity__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Event__TYPE_NAME, 40, 40},
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim_custom_msgs__srv__Velocity__get_type_description(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim_custom_msgs__srv__Velocity__TYPE_NAME, 34, 34},
      {turtlesim_custom_msgs__srv__Velocity__FIELDS, 3, 3},
    },
    {turtlesim_custom_msgs__srv__Velocity__REFERENCED_TYPE_DESCRIPTIONS, 5, 5},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim_custom_msgs__srv__Velocity_Event__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim_custom_msgs__srv__Velocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[4].fields = turtlesim_custom_msgs__srv__Velocity_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim_custom_msgs__srv__Velocity_Request__FIELD_NAME__min[] = "min";
static char turtlesim_custom_msgs__srv__Velocity_Request__FIELD_NAME__max[] = "max";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__srv__Velocity_Request__FIELDS[] = {
  {
    {turtlesim_custom_msgs__srv__Velocity_Request__FIELD_NAME__min, 3, 3},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Request__FIELD_NAME__max, 3, 3},
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
turtlesim_custom_msgs__srv__Velocity_Request__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
      {turtlesim_custom_msgs__srv__Velocity_Request__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim_custom_msgs__srv__Velocity_Response__FIELD_NAME__x[] = "x";
static char turtlesim_custom_msgs__srv__Velocity_Response__FIELD_NAME__z[] = "z";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__srv__Velocity_Response__FIELDS[] = {
  {
    {turtlesim_custom_msgs__srv__Velocity_Response__FIELD_NAME__x, 1, 1},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_FLOAT,
      0,
      0,
      {NULL, 0, 0},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Response__FIELD_NAME__z, 1, 1},
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
turtlesim_custom_msgs__srv__Velocity_Response__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
      {turtlesim_custom_msgs__srv__Velocity_Response__FIELDS, 2, 2},
    },
    {NULL, 0, 0},
  };
  if (!constructed) {
    constructed = true;
  }
  return &description;
}
// Define type names, field names, and default values
static char turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__info[] = "info";
static char turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__request[] = "request";
static char turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__response[] = "response";

static rosidl_runtime_c__type_description__Field turtlesim_custom_msgs__srv__Velocity_Event__FIELDS[] = {
  {
    {turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__info, 4, 4},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE,
      0,
      0,
      {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__request, 7, 7},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
    },
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Event__FIELD_NAME__response, 8, 8},
    {
      rosidl_runtime_c__type_description__FieldType__FIELD_TYPE_NESTED_TYPE_BOUNDED_SEQUENCE,
      1,
      0,
      {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
    },
    {NULL, 0, 0},
  },
};

static rosidl_runtime_c__type_description__IndividualTypeDescription turtlesim_custom_msgs__srv__Velocity_Event__REFERENCED_TYPE_DESCRIPTIONS[] = {
  {
    {builtin_interfaces__msg__Time__TYPE_NAME, 27, 27},
    {NULL, 0, 0},
  },
  {
    {service_msgs__msg__ServiceEventInfo__TYPE_NAME, 33, 33},
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
    {NULL, 0, 0},
  },
  {
    {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
    {NULL, 0, 0},
  },
};

const rosidl_runtime_c__type_description__TypeDescription *
turtlesim_custom_msgs__srv__Velocity_Event__get_type_description(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static bool constructed = false;
  static const rosidl_runtime_c__type_description__TypeDescription description = {
    {
      {turtlesim_custom_msgs__srv__Velocity_Event__TYPE_NAME, 40, 40},
      {turtlesim_custom_msgs__srv__Velocity_Event__FIELDS, 3, 3},
    },
    {turtlesim_custom_msgs__srv__Velocity_Event__REFERENCED_TYPE_DESCRIPTIONS, 4, 4},
  };
  if (!constructed) {
    assert(0 == memcmp(&builtin_interfaces__msg__Time__EXPECTED_HASH, builtin_interfaces__msg__Time__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[0].fields = builtin_interfaces__msg__Time__get_type_description(NULL)->type_description.fields;
    assert(0 == memcmp(&service_msgs__msg__ServiceEventInfo__EXPECTED_HASH, service_msgs__msg__ServiceEventInfo__get_type_hash(NULL), sizeof(rosidl_type_hash_t)));
    description.referenced_type_descriptions.data[1].fields = service_msgs__msg__ServiceEventInfo__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[2].fields = turtlesim_custom_msgs__srv__Velocity_Request__get_type_description(NULL)->type_description.fields;
    description.referenced_type_descriptions.data[3].fields = turtlesim_custom_msgs__srv__Velocity_Response__get_type_description(NULL)->type_description.fields;
    constructed = true;
  }
  return &description;
}

static char toplevel_type_raw_source[] =
  "float32 min\n"
  "float32 max\n"
  "---\n"
  "float32 x\n"
  "float32 z";

static char srv_encoding[] = "srv";
static char implicit_encoding[] = "implicit";

// Define all individual source functions

const rosidl_runtime_c__type_description__TypeSource *
turtlesim_custom_msgs__srv__Velocity__get_individual_type_description_source(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim_custom_msgs__srv__Velocity__TYPE_NAME, 34, 34},
    {srv_encoding, 3, 3},
    {toplevel_type_raw_source, 47, 47},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim_custom_msgs__srv__Velocity_Request__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim_custom_msgs__srv__Velocity_Request__TYPE_NAME, 42, 42},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim_custom_msgs__srv__Velocity_Response__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim_custom_msgs__srv__Velocity_Response__TYPE_NAME, 43, 43},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource *
turtlesim_custom_msgs__srv__Velocity_Event__get_individual_type_description_source(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static const rosidl_runtime_c__type_description__TypeSource source = {
    {turtlesim_custom_msgs__srv__Velocity_Event__TYPE_NAME, 40, 40},
    {implicit_encoding, 8, 8},
    {NULL, 0, 0},
  };
  return &source;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim_custom_msgs__srv__Velocity__get_type_description_sources(
  const rosidl_service_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[6];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 6, 6};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim_custom_msgs__srv__Velocity__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim_custom_msgs__srv__Velocity_Event__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim_custom_msgs__srv__Velocity_Request__get_individual_type_description_source(NULL);
    sources[5] = *turtlesim_custom_msgs__srv__Velocity_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim_custom_msgs__srv__Velocity_Request__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim_custom_msgs__srv__Velocity_Request__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim_custom_msgs__srv__Velocity_Response__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[1];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 1, 1};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim_custom_msgs__srv__Velocity_Response__get_individual_type_description_source(NULL),
    constructed = true;
  }
  return &source_sequence;
}

const rosidl_runtime_c__type_description__TypeSource__Sequence *
turtlesim_custom_msgs__srv__Velocity_Event__get_type_description_sources(
  const rosidl_message_type_support_t * type_support)
{
  (void)type_support;
  static rosidl_runtime_c__type_description__TypeSource sources[5];
  static const rosidl_runtime_c__type_description__TypeSource__Sequence source_sequence = {sources, 5, 5};
  static bool constructed = false;
  if (!constructed) {
    sources[0] = *turtlesim_custom_msgs__srv__Velocity_Event__get_individual_type_description_source(NULL),
    sources[1] = *builtin_interfaces__msg__Time__get_individual_type_description_source(NULL);
    sources[2] = *service_msgs__msg__ServiceEventInfo__get_individual_type_description_source(NULL);
    sources[3] = *turtlesim_custom_msgs__srv__Velocity_Request__get_individual_type_description_source(NULL);
    sources[4] = *turtlesim_custom_msgs__srv__Velocity_Response__get_individual_type_description_source(NULL);
    constructed = true;
  }
  return &source_sequence;
}
