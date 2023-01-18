// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/ChangeGripperColor.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__BUILDER_HPP_

#include "ariac_msgs/srv/detail/change_gripper_color__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeGripperColor_Request_alpha
{
public:
  explicit Init_ChangeGripperColor_Request_alpha(::ariac_msgs::srv::ChangeGripperColor_Request & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::srv::ChangeGripperColor_Request alpha(::ariac_msgs::srv::ChangeGripperColor_Request::_alpha_type arg)
  {
    msg_.alpha = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripperColor_Request msg_;
};

class Init_ChangeGripperColor_Request_b
{
public:
  explicit Init_ChangeGripperColor_Request_b(::ariac_msgs::srv::ChangeGripperColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeGripperColor_Request_alpha b(::ariac_msgs::srv::ChangeGripperColor_Request::_b_type arg)
  {
    msg_.b = std::move(arg);
    return Init_ChangeGripperColor_Request_alpha(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripperColor_Request msg_;
};

class Init_ChangeGripperColor_Request_g
{
public:
  explicit Init_ChangeGripperColor_Request_g(::ariac_msgs::srv::ChangeGripperColor_Request & msg)
  : msg_(msg)
  {}
  Init_ChangeGripperColor_Request_b g(::ariac_msgs::srv::ChangeGripperColor_Request::_g_type arg)
  {
    msg_.g = std::move(arg);
    return Init_ChangeGripperColor_Request_b(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripperColor_Request msg_;
};

class Init_ChangeGripperColor_Request_r
{
public:
  Init_ChangeGripperColor_Request_r()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_ChangeGripperColor_Request_g r(::ariac_msgs::srv::ChangeGripperColor_Request::_r_type arg)
  {
    msg_.r = std::move(arg);
    return Init_ChangeGripperColor_Request_g(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripperColor_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ChangeGripperColor_Request>()
{
  return ariac_msgs::srv::builder::Init_ChangeGripperColor_Request_r();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ChangeGripperColor_Response_success
{
public:
  Init_ChangeGripperColor_Response_success()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::ChangeGripperColor_Response success(::ariac_msgs::srv::ChangeGripperColor_Response::_success_type arg)
  {
    msg_.success = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ChangeGripperColor_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ChangeGripperColor_Response>()
{
  return ariac_msgs::srv::builder::Init_ChangeGripperColor_Response_success();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__BUILDER_HPP_
