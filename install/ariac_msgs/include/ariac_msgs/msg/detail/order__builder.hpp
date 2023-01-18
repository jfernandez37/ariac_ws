// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ORDER__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ORDER__BUILDER_HPP_

#include "ariac_msgs/msg/detail/order__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Order_combined_task
{
public:
  explicit Init_Order_combined_task(::ariac_msgs::msg::Order & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Order combined_task(::ariac_msgs::msg::Order::_combined_task_type arg)
  {
    msg_.combined_task = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

class Init_Order_assembly_task
{
public:
  explicit Init_Order_assembly_task(::ariac_msgs::msg::Order & msg)
  : msg_(msg)
  {}
  Init_Order_combined_task assembly_task(::ariac_msgs::msg::Order::_assembly_task_type arg)
  {
    msg_.assembly_task = std::move(arg);
    return Init_Order_combined_task(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

class Init_Order_kitting_task
{
public:
  explicit Init_Order_kitting_task(::ariac_msgs::msg::Order & msg)
  : msg_(msg)
  {}
  Init_Order_assembly_task kitting_task(::ariac_msgs::msg::Order::_kitting_task_type arg)
  {
    msg_.kitting_task = std::move(arg);
    return Init_Order_assembly_task(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

class Init_Order_priority
{
public:
  explicit Init_Order_priority(::ariac_msgs::msg::Order & msg)
  : msg_(msg)
  {}
  Init_Order_kitting_task priority(::ariac_msgs::msg::Order::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_Order_kitting_task(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

class Init_Order_type
{
public:
  explicit Init_Order_type(::ariac_msgs::msg::Order & msg)
  : msg_(msg)
  {}
  Init_Order_priority type(::ariac_msgs::msg::Order::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_Order_priority(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

class Init_Order_id
{
public:
  Init_Order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Order_type id(::ariac_msgs::msg::Order::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_Order_type(msg_);
  }

private:
  ::ariac_msgs::msg::Order msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Order>()
{
  return ariac_msgs::msg::builder::Init_Order_id();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ORDER__BUILDER_HPP_
