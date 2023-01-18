// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/ChangeGripper.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__BUILDER_HPP_

#include "ariac_msgs/srv/detail/change_gripper__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeGripper_Request_gripper_type
{
public:
  Init_ChangeGripper_Request_gripper_type()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::ChangeGripper_Request gripper_type(::ariac_msgs::srv::ChangeGripper_Request::_gripper_type_type arg)
  {
    msg_.gripper_type = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripper_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ChangeGripper_Request>()
{
  return ariac_msgs::srv::builder::Init_ChangeGripper_Request_gripper_type();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeGripper_Response_message
{
public:
  explicit Init_ChangeGripper_Response_message(::ariac_msgs::srv::ChangeGripper_Response & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::ChangeGripper_Response message(::ariac_msgs::srv::ChangeGripper_Response::_message_type arg)
  {
    msg_.message = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripper_Response msg_;
};

class Init_ChangeGripper_Response_success
{
public:
  Init_ChangeGripper_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeGripper_Response_message success(::ariac_msgs::srv::ChangeGripper_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return Init_ChangeGripper_Response_message(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripper_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ChangeGripper_Response>()
{
  return ariac_msgs::srv::builder::Init_ChangeGripper_Response_success();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER__BUILDER_HPP_
