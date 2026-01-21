// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msgs:srv/Threshold.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/srv/threshold.hpp"


#ifndef TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msgs/srv/detail/threshold__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msgs
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
  ::turtlesim_custom_msgs::srv::Threshold_Request threshold(::turtlesim_custom_msgs::srv::Threshold_Request::_threshold_type arg)
  {
    msg_.threshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Threshold_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Threshold_Request>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Threshold_Request_threshold();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
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
  ::turtlesim_custom_msgs::srv::Threshold_Response newthreshold(::turtlesim_custom_msgs::srv::Threshold_Response::_newthreshold_type arg)
  {
    msg_.newthreshold = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Threshold_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Threshold_Response>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Threshold_Response_newthreshold();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Threshold_Event_response
{
public:
  explicit Init_Threshold_Event_response(::turtlesim_custom_msgs::srv::Threshold_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Threshold_Event response(::turtlesim_custom_msgs::srv::Threshold_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Threshold_Event msg_;
};

class Init_Threshold_Event_request
{
public:
  explicit Init_Threshold_Event_request(::turtlesim_custom_msgs::srv::Threshold_Event & msg)
  : msg_(msg)
  {}
  Init_Threshold_Event_response request(::turtlesim_custom_msgs::srv::Threshold_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Threshold_Event_response(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Threshold_Event msg_;
};

class Init_Threshold_Event_info
{
public:
  Init_Threshold_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Threshold_Event_request info(::turtlesim_custom_msgs::srv::Threshold_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Threshold_Event_request(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Threshold_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Threshold_Event>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Threshold_Event_info();
}

}  // namespace turtlesim_custom_msgs

#endif  // TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__THRESHOLD__BUILDER_HPP_
