// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from action_tutorials_interfaces:action/Tut1.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "action_tutorials_interfaces/action/tut1.hpp"


#ifndef ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__BUILDER_HPP_
#define ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "action_tutorials_interfaces/action/detail/tut1__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_Goal_goal
{
public:
  Init_Tut1_Goal_goal()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Tut1_Goal goal(::action_tutorials_interfaces::action::Tut1_Goal::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_Goal msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_Goal>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_Goal_goal();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_Result_final
{
public:
  Init_Tut1_Result_final()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Tut1_Result final(::action_tutorials_interfaces::action::Tut1_Result::_final_type arg)
  {
    msg_.final = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_Result msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_Result>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_Result_final();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_Feedback_moving
{
public:
  Init_Tut1_Feedback_moving()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Tut1_Feedback moving(::action_tutorials_interfaces::action::Tut1_Feedback::_moving_type arg)
  {
    msg_.moving = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_Feedback msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_Feedback>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_Feedback_moving();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_SendGoal_Request_goal
{
public:
  explicit Init_Tut1_SendGoal_Request_goal(::action_tutorials_interfaces::action::Tut1_SendGoal_Request & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Request goal(::action_tutorials_interfaces::action::Tut1_SendGoal_Request::_goal_type arg)
  {
    msg_.goal = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Request msg_;
};

class Init_Tut1_SendGoal_Request_goal_id
{
public:
  Init_Tut1_SendGoal_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_SendGoal_Request_goal goal_id(::action_tutorials_interfaces::action::Tut1_SendGoal_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tut1_SendGoal_Request_goal(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_SendGoal_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_SendGoal_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_SendGoal_Response_stamp
{
public:
  explicit Init_Tut1_SendGoal_Response_stamp(::action_tutorials_interfaces::action::Tut1_SendGoal_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Response stamp(::action_tutorials_interfaces::action::Tut1_SendGoal_Response::_stamp_type arg)
  {
    msg_.stamp = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Response msg_;
};

class Init_Tut1_SendGoal_Response_accepted
{
public:
  Init_Tut1_SendGoal_Response_accepted()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_SendGoal_Response_stamp accepted(::action_tutorials_interfaces::action::Tut1_SendGoal_Response::_accepted_type arg)
  {
    msg_.accepted = std::move(arg);
    return Init_Tut1_SendGoal_Response_stamp(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_SendGoal_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_SendGoal_Response_accepted();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_SendGoal_Event_response
{
public:
  explicit Init_Tut1_SendGoal_Event_response(::action_tutorials_interfaces::action::Tut1_SendGoal_Event & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Event response(::action_tutorials_interfaces::action::Tut1_SendGoal_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Event msg_;
};

class Init_Tut1_SendGoal_Event_request
{
public:
  explicit Init_Tut1_SendGoal_Event_request(::action_tutorials_interfaces::action::Tut1_SendGoal_Event & msg)
  : msg_(msg)
  {}
  Init_Tut1_SendGoal_Event_response request(::action_tutorials_interfaces::action::Tut1_SendGoal_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Tut1_SendGoal_Event_response(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Event msg_;
};

class Init_Tut1_SendGoal_Event_info
{
public:
  Init_Tut1_SendGoal_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_SendGoal_Event_request info(::action_tutorials_interfaces::action::Tut1_SendGoal_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Tut1_SendGoal_Event_request(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_SendGoal_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_SendGoal_Event>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_SendGoal_Event_info();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_GetResult_Request_goal_id
{
public:
  Init_Tut1_GetResult_Request_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::action_tutorials_interfaces::action::Tut1_GetResult_Request goal_id(::action_tutorials_interfaces::action::Tut1_GetResult_Request::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Request msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_GetResult_Request>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_GetResult_Request_goal_id();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_GetResult_Response_result
{
public:
  explicit Init_Tut1_GetResult_Response_result(::action_tutorials_interfaces::action::Tut1_GetResult_Response & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_GetResult_Response result(::action_tutorials_interfaces::action::Tut1_GetResult_Response::_result_type arg)
  {
    msg_.result = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Response msg_;
};

class Init_Tut1_GetResult_Response_status
{
public:
  Init_Tut1_GetResult_Response_status()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_GetResult_Response_result status(::action_tutorials_interfaces::action::Tut1_GetResult_Response::_status_type arg)
  {
    msg_.status = std::move(arg);
    return Init_Tut1_GetResult_Response_result(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Response msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_GetResult_Response>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_GetResult_Response_status();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_GetResult_Event_response
{
public:
  explicit Init_Tut1_GetResult_Event_response(::action_tutorials_interfaces::action::Tut1_GetResult_Event & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_GetResult_Event response(::action_tutorials_interfaces::action::Tut1_GetResult_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Event msg_;
};

class Init_Tut1_GetResult_Event_request
{
public:
  explicit Init_Tut1_GetResult_Event_request(::action_tutorials_interfaces::action::Tut1_GetResult_Event & msg)
  : msg_(msg)
  {}
  Init_Tut1_GetResult_Event_response request(::action_tutorials_interfaces::action::Tut1_GetResult_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Tut1_GetResult_Event_response(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Event msg_;
};

class Init_Tut1_GetResult_Event_info
{
public:
  Init_Tut1_GetResult_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_GetResult_Event_request info(::action_tutorials_interfaces::action::Tut1_GetResult_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Tut1_GetResult_Event_request(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_GetResult_Event msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_GetResult_Event>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_GetResult_Event_info();
}

}  // namespace action_tutorials_interfaces


namespace action_tutorials_interfaces
{

namespace action
{

namespace builder
{

class Init_Tut1_FeedbackMessage_feedback
{
public:
  explicit Init_Tut1_FeedbackMessage_feedback(::action_tutorials_interfaces::action::Tut1_FeedbackMessage & msg)
  : msg_(msg)
  {}
  ::action_tutorials_interfaces::action::Tut1_FeedbackMessage feedback(::action_tutorials_interfaces::action::Tut1_FeedbackMessage::_feedback_type arg)
  {
    msg_.feedback = std::move(arg);
    return std::move(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_FeedbackMessage msg_;
};

class Init_Tut1_FeedbackMessage_goal_id
{
public:
  Init_Tut1_FeedbackMessage_goal_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Tut1_FeedbackMessage_feedback goal_id(::action_tutorials_interfaces::action::Tut1_FeedbackMessage::_goal_id_type arg)
  {
    msg_.goal_id = std::move(arg);
    return Init_Tut1_FeedbackMessage_feedback(msg_);
  }

private:
  ::action_tutorials_interfaces::action::Tut1_FeedbackMessage msg_;
};

}  // namespace builder

}  // namespace action

template<typename MessageType>
auto build();

template<>
inline
auto build<::action_tutorials_interfaces::action::Tut1_FeedbackMessage>()
{
  return action_tutorials_interfaces::action::builder::Init_Tut1_FeedbackMessage_goal_id();
}

}  // namespace action_tutorials_interfaces

#endif  // ACTION_TUTORIALS_INTERFACES__ACTION__DETAIL__TUT1__BUILDER_HPP_
