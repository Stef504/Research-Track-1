// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from robot_custom_msgs:srv/Threshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "robot_custom_msgs/srv/threshold.hpp"


#ifndef ROBOT_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_
#define ROBOT_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "robot_custom_msgs/srv/detail/threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Threshold_Request_threshold
{
public:
  Init_Threshold_Request_threshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_custom_msgs::srv::Threshold_Request threshold(::robot_custom_msgs::srv::Threshold_Request::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Threshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Threshold_Request>()
{
  return robot_custom_msgs::srv::builder::Init_Threshold_Request_threshold();
}

}  // namespace robot_custom_msgs


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Threshold_Response_newthreshold
{
public:
  Init_Threshold_Response_newthreshold()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::robot_custom_msgs::srv::Threshold_Response newthreshold(::robot_custom_msgs::srv::Threshold_Response::_newthreshold_type arg)
  {
    msg_.newthreshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Threshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Threshold_Response>()
{
  return robot_custom_msgs::srv::builder::Init_Threshold_Response_newthreshold();
}

}  // namespace robot_custom_msgs


namespace robot_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Threshold_Event_response
{
public:
  explicit Init_Threshold_Event_response(::robot_custom_msgs::srv::Threshold_Event & msg)
  : msg_(msg)
  {}
  ::robot_custom_msgs::srv::Threshold_Event response(::robot_custom_msgs::srv::Threshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::robot_custom_msgs::srv::Threshold_Event msg_;
};

class Init_Threshold_Event_request
{
public:
  explicit Init_Threshold_Event_request(::robot_custom_msgs::srv::Threshold_Event & msg)
  : msg_(msg)
  {}
  Init_Threshold_Event_response request(::robot_custom_msgs::srv::Threshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Threshold_Event_response(msg_);
  }

private:
  ::robot_custom_msgs::srv::Threshold_Event msg_;
};

class Init_Threshold_Event_info
{
public:
  Init_Threshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Threshold_Event_request info(::robot_custom_msgs::srv::Threshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Threshold_Event_request(msg_);
  }

private:
  ::robot_custom_msgs::srv::Threshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::robot_custom_msgs::srv::Threshold_Event>()
{
  return robot_custom_msgs::srv::builder::Init_Threshold_Event_info();
}

}  // namespace robot_custom_msgs

#endif  // ROBOT_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_
