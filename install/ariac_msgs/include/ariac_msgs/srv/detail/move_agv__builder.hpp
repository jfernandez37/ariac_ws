// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/MoveAGV.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__BUILDER_HPP_

#include "ariac_msgs/srv/detail/move_agv__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveAGV_Request_location
{
public:
  Init_MoveAGV_Request_location()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::MoveAGV_Request location(::ariac_msgs::srv::MoveAGV_Request::_location_type arg)
  {
    msg_.location = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::MoveAGV_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::MoveAGV_Request>()
{
  return ariac_msgs::srv::builder::Init_MoveAGV_Request_location();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_MoveAGV_Response_message
{
public:
  explicit Init_MoveAGV_Response_message(::ariac_msgs::srv::MoveAGV_Response & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::MoveAGV_Response message(::ariac_msgs::srv::MoveAGV_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::MoveAGV_Response msg_;
};

class Init_MoveAGV_Response_success
{
public:
  Init_MoveAGV_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MoveAGV_Response_message success(::ariac_msgs::srv::MoveAGV_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_MoveAGV_Response_message(msg_);
  }

private:
  ::ariac_msgs::srv::MoveAGV_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::MoveAGV_Response>()
{
  return ariac_msgs::srv::builder::Init_MoveAGV_Response_success();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__BUILDER_HPP_
