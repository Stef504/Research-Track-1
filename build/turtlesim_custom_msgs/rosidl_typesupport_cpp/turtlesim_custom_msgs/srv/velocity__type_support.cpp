// generated from rosidl_typesupport_cpp/resource/idl__type_support.cpp.em
// with input from turtlesim_custom_msgs:srv/Velocity.idl
// generated code does not contain a copyright notice

#include "cstddef"
#include "rosidl_runtime_c/message_type_support_struct.h"
#include "turtlesim_custom_msgs/srv/detail/velocity__functions.h"
#include "turtlesim_custom_msgs/srv/detail/velocity__struct.hpp"
#include "rosidl_typesupport_cpp/identifier.hpp"
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
#include "rosidl_typesupport_cpp/visibility_control.h"
#include "rosidl_typesupport_interface/macros.h"

namespace turtlesim_custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Velocity_Request_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Velocity_Request_type_support_ids_t;

static const _Velocity_Request_type_support_ids_t _Velocity_Request_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Velocity_Request_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Velocity_Request_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Velocity_Request_type_support_symbol_names_t _Velocity_Request_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim_custom_msgs, srv, Velocity_Request)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim_custom_msgs, srv, Velocity_Request)),
  }
};

typedef struct _Velocity_Request_type_support_data_t
{
  void * data[2];
} _Velocity_Request_type_support_data_t;

static _Velocity_Request_type_support_data_t _Velocity_Request_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Velocity_Request_message_typesupport_map = {
  2,
  "turtlesim_custom_msgs",
  &_Velocity_Request_message_typesupport_ids.typesupport_identifier[0],
  &_Velocity_Request_message_typesupport_symbol_names.symbol_name[0],
  &_Velocity_Request_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Velocity_Request_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Velocity_Request_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim_custom_msgs__srv__Velocity_Request__get_type_hash,
  &turtlesim_custom_msgs__srv__Velocity_Request__get_type_description,
  &turtlesim_custom_msgs__srv__Velocity_Request__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim_custom_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Request>()
{
  return &::turtlesim_custom_msgs::srv::rosidl_typesupport_cpp::Velocity_Request_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim_custom_msgs, srv, Velocity_Request)() {
  return get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Request>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim_custom_msgs/srv/detail/velocity__functions.h"
// already included above
// #include "turtlesim_custom_msgs/srv/detail/velocity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim_custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Velocity_Response_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Velocity_Response_type_support_ids_t;

static const _Velocity_Response_type_support_ids_t _Velocity_Response_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Velocity_Response_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Velocity_Response_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Velocity_Response_type_support_symbol_names_t _Velocity_Response_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim_custom_msgs, srv, Velocity_Response)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim_custom_msgs, srv, Velocity_Response)),
  }
};

typedef struct _Velocity_Response_type_support_data_t
{
  void * data[2];
} _Velocity_Response_type_support_data_t;

static _Velocity_Response_type_support_data_t _Velocity_Response_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Velocity_Response_message_typesupport_map = {
  2,
  "turtlesim_custom_msgs",
  &_Velocity_Response_message_typesupport_ids.typesupport_identifier[0],
  &_Velocity_Response_message_typesupport_symbol_names.symbol_name[0],
  &_Velocity_Response_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Velocity_Response_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Velocity_Response_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim_custom_msgs__srv__Velocity_Response__get_type_hash,
  &turtlesim_custom_msgs__srv__Velocity_Response__get_type_description,
  &turtlesim_custom_msgs__srv__Velocity_Response__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim_custom_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Response>()
{
  return &::turtlesim_custom_msgs::srv::rosidl_typesupport_cpp::Velocity_Response_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim_custom_msgs, srv, Velocity_Response)() {
  return get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Response>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
// already included above
// #include "rosidl_runtime_c/message_type_support_struct.h"
// already included above
// #include "turtlesim_custom_msgs/srv/detail/velocity__functions.h"
// already included above
// #include "turtlesim_custom_msgs/srv/detail/velocity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
// already included above
// #include "rosidl_typesupport_cpp/message_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim_custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Velocity_Event_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Velocity_Event_type_support_ids_t;

static const _Velocity_Event_type_support_ids_t _Velocity_Event_message_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Velocity_Event_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Velocity_Event_type_support_symbol_names_t;

#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Velocity_Event_type_support_symbol_names_t _Velocity_Event_message_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim_custom_msgs, srv, Velocity_Event)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim_custom_msgs, srv, Velocity_Event)),
  }
};

typedef struct _Velocity_Event_type_support_data_t
{
  void * data[2];
} _Velocity_Event_type_support_data_t;

static _Velocity_Event_type_support_data_t _Velocity_Event_message_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Velocity_Event_message_typesupport_map = {
  2,
  "turtlesim_custom_msgs",
  &_Velocity_Event_message_typesupport_ids.typesupport_identifier[0],
  &_Velocity_Event_message_typesupport_symbol_names.symbol_name[0],
  &_Velocity_Event_message_typesupport_data.data[0],
};

static const rosidl_message_type_support_t Velocity_Event_message_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Velocity_Event_message_typesupport_map),
  ::rosidl_typesupport_cpp::get_message_typesupport_handle_function,
  &turtlesim_custom_msgs__srv__Velocity_Event__get_type_hash,
  &turtlesim_custom_msgs__srv__Velocity_Event__get_type_description,
  &turtlesim_custom_msgs__srv__Velocity_Event__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim_custom_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Event>()
{
  return &::turtlesim_custom_msgs::srv::rosidl_typesupport_cpp::Velocity_Event_message_type_support_handle;
}

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim_custom_msgs, srv, Velocity_Event)() {
  return get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Event>();
}

#ifdef __cplusplus
}
#endif
}  // namespace rosidl_typesupport_cpp

// already included above
// #include "cstddef"
#include "rosidl_runtime_c/service_type_support_struct.h"
#include "rosidl_typesupport_cpp/service_type_support.hpp"
// already included above
// #include "turtlesim_custom_msgs/srv/detail/velocity__struct.hpp"
// already included above
// #include "rosidl_typesupport_cpp/identifier.hpp"
// already included above
// #include "rosidl_typesupport_c/type_support_map.h"
#include "rosidl_typesupport_cpp/service_type_support_dispatch.hpp"
// already included above
// #include "rosidl_typesupport_cpp/visibility_control.h"
// already included above
// #include "rosidl_typesupport_interface/macros.h"

namespace turtlesim_custom_msgs
{

namespace srv
{

namespace rosidl_typesupport_cpp
{

typedef struct _Velocity_type_support_ids_t
{
  const char * typesupport_identifier[2];
} _Velocity_type_support_ids_t;

static const _Velocity_type_support_ids_t _Velocity_service_typesupport_ids = {
  {
    "rosidl_typesupport_fastrtps_cpp",  // ::rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
    "rosidl_typesupport_introspection_cpp",  // ::rosidl_typesupport_introspection_cpp::typesupport_identifier,
  }
};

typedef struct _Velocity_type_support_symbol_names_t
{
  const char * symbol_name[2];
} _Velocity_type_support_symbol_names_t;
#define STRINGIFY_(s) #s
#define STRINGIFY(s) STRINGIFY_(s)

static const _Velocity_type_support_symbol_names_t _Velocity_service_typesupport_symbol_names = {
  {
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, turtlesim_custom_msgs, srv, Velocity)),
    STRINGIFY(ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_cpp, turtlesim_custom_msgs, srv, Velocity)),
  }
};

typedef struct _Velocity_type_support_data_t
{
  void * data[2];
} _Velocity_type_support_data_t;

static _Velocity_type_support_data_t _Velocity_service_typesupport_data = {
  {
    0,  // will store the shared library later
    0,  // will store the shared library later
  }
};

static const type_support_map_t _Velocity_service_typesupport_map = {
  2,
  "turtlesim_custom_msgs",
  &_Velocity_service_typesupport_ids.typesupport_identifier[0],
  &_Velocity_service_typesupport_symbol_names.symbol_name[0],
  &_Velocity_service_typesupport_data.data[0],
};

static const rosidl_service_type_support_t Velocity_service_type_support_handle = {
  ::rosidl_typesupport_cpp::typesupport_identifier,
  reinterpret_cast<const type_support_map_t *>(&_Velocity_service_typesupport_map),
  ::rosidl_typesupport_cpp::get_service_typesupport_handle_function,
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Request>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Response>(),
  ::rosidl_typesupport_cpp::get_message_type_support_handle<turtlesim_custom_msgs::srv::Velocity_Event>(),
  &::rosidl_typesupport_cpp::service_create_event_message<turtlesim_custom_msgs::srv::Velocity>,
  &::rosidl_typesupport_cpp::service_destroy_event_message<turtlesim_custom_msgs::srv::Velocity>,
  &turtlesim_custom_msgs__srv__Velocity__get_type_hash,
  &turtlesim_custom_msgs__srv__Velocity__get_type_description,
  &turtlesim_custom_msgs__srv__Velocity__get_type_description_sources,
};

}  // namespace rosidl_typesupport_cpp

}  // namespace srv

}  // namespace turtlesim_custom_msgs

namespace rosidl_typesupport_cpp
{

template<>
ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
get_service_type_support_handle<turtlesim_custom_msgs::srv::Velocity>()
{
  return &::turtlesim_custom_msgs::srv::rosidl_typesupport_cpp::Velocity_service_type_support_handle;
}

}  // namespace rosidl_typesupport_cpp

#ifdef __cplusplus
extern "C"
{
#endif

ROSIDL_TYPESUPPORT_CPP_PUBLIC
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_cpp, turtlesim_custom_msgs, srv, Velocity)() {
  return ::rosidl_typesupport_cpp::get_service_type_support_handle<turtlesim_custom_msgs::srv::Velocity>();
}

#ifdef __cplusplus
}
#endif
