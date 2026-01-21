// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from turtlesim_custom_msgs:srv/Average.idl
// generated code does not contain a copyright notice

// IWYU pragma: private, include "turtlesim_custom_msgs/srv/average.hpp"


#ifndef TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_
#define TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "turtlesim_custom_msgs/srv/detail/average__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Average_Request_count
{
public:
  Init_Average_Request_count()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::turtlesim_custom_msgs::srv::Average_Request count(::turtlesim_custom_msgs::srv::Average_Request::_count_type arg)
  {
    msg_.count = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Average_Request>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Average_Request_count();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Average_Response_avg_angular
{
public:
  explicit Init_Average_Response_avg_angular(::turtlesim_custom_msgs::srv::Average_Response & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Average_Response avg_angular(::turtlesim_custom_msgs::srv::Average_Response::_avg_angular_type arg)
  {
    msg_.avg_angular = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Response msg_;
};

class Init_Average_Response_avg_linear
{
public:
  Init_Average_Response_avg_linear()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Average_Response_avg_angular avg_linear(::turtlesim_custom_msgs::srv::Average_Response::_avg_linear_type arg)
  {
    msg_.avg_linear = std::move(arg);
    return Init_Average_Response_avg_angular(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Average_Response>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Average_Response_avg_linear();
}

}  // namespace turtlesim_custom_msgs


namespace turtlesim_custom_msgs
{

namespace srv
{

namespace builder
{

class Init_Average_Event_response
{
public:
  explicit Init_Average_Event_response(::turtlesim_custom_msgs::srv::Average_Event & msg)
  : msg_(msg)
  {}
  ::turtlesim_custom_msgs::srv::Average_Event response(::turtlesim_custom_msgs::srv::Average_Event::_response_type arg)
  {
    msg_.response = std::move(arg);
    return std::move(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Event msg_;
};

class Init_Average_Event_request
{
public:
  explicit Init_Average_Event_request(::turtlesim_custom_msgs::srv::Average_Event & msg)
  : msg_(msg)
  {}
  Init_Average_Event_response request(::turtlesim_custom_msgs::srv::Average_Event::_request_type arg)
  {
    msg_.request = std::move(arg);
    return Init_Average_Event_response(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Event msg_;
};

class Init_Average_Event_info
{
public:
  Init_Average_Event_info()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Average_Event_request info(::turtlesim_custom_msgs::srv::Average_Event::_info_type arg)
  {
    msg_.info = std::move(arg);
    return Init_Average_Event_request(msg_);
  }

private:
  ::turtlesim_custom_msgs::srv::Average_Event msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::turtlesim_custom_msgs::srv::Average_Event>()
{
  return turtlesim_custom_msgs::srv::builder::Init_Average_Event_info();
}

}  // namespace turtlesim_custom_msgs

#endif  // TURTLESIM_CUSTOM_MSGS__SRV__DETAIL__AVERAGE__BUILDER_HPP_
