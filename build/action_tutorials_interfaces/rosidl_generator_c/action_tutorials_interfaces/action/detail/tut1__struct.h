// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from action_tutorials_interfaces:action/Tut1.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_tutorials_interfaces/action/tut1.h"


#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__STRUCT_H_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_Goal
{
  float goal;
} action_tutorials_interfaces__action__Tut1_Goal;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_Goal.
typedef struct action_tutorials_interfaces__action__Tut1_Goal__Sequence
{
  action_tutorials_interfaces__action__Tut1_Goal * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_Goal__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'final'
#include "rosidl_runtime_c/string.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_Result
{
  rosidl_runtime_c__String final;
} action_tutorials_interfaces__action__Tut1_Result;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_Result.
typedef struct action_tutorials_interfaces__action__Tut1_Result__Sequence
{
  action_tutorials_interfaces__action__Tut1_Result * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_Result__Sequence;

// Constants defined in the message

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_Feedback
{
  float moving;
} action_tutorials_interfaces__action__Tut1_Feedback;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_Feedback.
typedef struct action_tutorials_interfaces__action__Tut1_Feedback__Sequence
{
  action_tutorials_interfaces__action__Tut1_Feedback * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_Feedback__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
#include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'goal'
#include "action_tutorials_interfaces/action/detail/tut1__struct.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_tutorials_interfaces__action__Tut1_Goal goal;
} action_tutorials_interfaces__action__Tut1_SendGoal_Request;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_SendGoal_Request.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Request__Sequence
{
  action_tutorials_interfaces__action__Tut1_SendGoal_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_SendGoal_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'stamp'
#include "builtin_interfaces/msg/detail/time__struct.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Response
{
  bool accepted;
  builtin_interfaces__msg__Time stamp;
} action_tutorials_interfaces__action__Tut1_SendGoal_Response;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_SendGoal_Response.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Response__Sequence
{
  action_tutorials_interfaces__action__Tut1_SendGoal_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_SendGoal_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
#include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_tutorials_interfaces__action__Tut1_SendGoal_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_tutorials_interfaces__action__Tut1_SendGoal_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_tutorials_interfaces__action__Tut1_SendGoal_Request__Sequence request;
  action_tutorials_interfaces__action__Tut1_SendGoal_Response__Sequence response;
} action_tutorials_interfaces__action__Tut1_SendGoal_Event;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_SendGoal_Event.
typedef struct action_tutorials_interfaces__action__Tut1_SendGoal_Event__Sequence
{
  action_tutorials_interfaces__action__Tut1_SendGoal_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_SendGoal_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Request
{
  unique_identifier_msgs__msg__UUID goal_id;
} action_tutorials_interfaces__action__Tut1_GetResult_Request;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_GetResult_Request.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Request__Sequence
{
  action_tutorials_interfaces__action__Tut1_GetResult_Request * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_GetResult_Request__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'result'
// already included above
// #include "action_tutorials_interfaces/action/detail/tut1__struct.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Response
{
  int8_t status;
  action_tutorials_interfaces__action__Tut1_Result result;
} action_tutorials_interfaces__action__Tut1_GetResult_Response;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_GetResult_Response.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Response__Sequence
{
  action_tutorials_interfaces__action__Tut1_GetResult_Response * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_GetResult_Response__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'info'
// already included above
// #include "service_msgs/msg/detail/service_event_info__struct.h"

// constants for array fields with an upper bound
// request
enum
{
  action_tutorials_interfaces__action__Tut1_GetResult_Event__request__MAX_SIZE = 1
};
// response
enum
{
  action_tutorials_interfaces__action__Tut1_GetResult_Event__response__MAX_SIZE = 1
};

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Event
{
  service_msgs__msg__ServiceEventInfo info;
  action_tutorials_interfaces__action__Tut1_GetResult_Request__Sequence request;
  action_tutorials_interfaces__action__Tut1_GetResult_Response__Sequence response;
} action_tutorials_interfaces__action__Tut1_GetResult_Event;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_GetResult_Event.
typedef struct action_tutorials_interfaces__action__Tut1_GetResult_Event__Sequence
{
  action_tutorials_interfaces__action__Tut1_GetResult_Event * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_GetResult_Event__Sequence;

// Constants defined in the message

// Include directives for member types
// Member 'goal_id'
// already included above
// #include "unique_identifier_msgs/msg/detail/uuid__struct.h"
// Member 'feedback'
// already included above
// #include "action_tutorials_interfaces/action/detail/tut1__struct.h"

/// Struct defined in action/Tut1 in the package action_tutorials_interfaces.
typedef struct action_tutorials_interfaces__action__Tut1_FeedbackMessage
{
  unique_identifier_msgs__msg__UUID goal_id;
  action_tutorials_interfaces__action__Tut1_Feedback feedback;
} action_tutorials_interfaces__action__Tut1_FeedbackMessage;

// Struct for a sequence of action_tutorials_interfaces__action__Tut1_FeedbackMessage.
typedef struct action_tutorials_interfaces__action__Tut1_FeedbackMessage__Sequence
{
  action_tutorials_interfaces__action__Tut1_FeedbackMessage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} action_tutorials_interfaces__action__Tut1_FeedbackMessage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__STRUCT_H_
