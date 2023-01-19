// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/OrderCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ORDER_CONDITION__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ORDER_CONDITION__BUILDER_HPP_

#include "ariac_msgs/msg/detail/order_condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_OrderCondition_condition
{
public:
  explicit Init_OrderCondition_condition(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::OrderCondition condition(::ariac_msgs::msg::OrderCondition::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_combined_task
{
public:
  explicit Init_OrderCondition_combined_task(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  Init_OrderCondition_condition combined_task(::ariac_msgs::msg::OrderCondition::_combined_task_type arg)
  {
    msg_.combined_task = std::move(arg);
    return Init_OrderCondition_condition(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_assembly_task
{
public:
  explicit Init_OrderCondition_assembly_task(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  Init_OrderCondition_combined_task assembly_task(::ariac_msgs::msg::OrderCondition::_assembly_task_type arg)
  {
    msg_.assembly_task = std::move(arg);
    return Init_OrderCondition_combined_task(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_kitting_task
{
public:
  explicit Init_OrderCondition_kitting_task(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  Init_OrderCondition_assembly_task kitting_task(::ariac_msgs::msg::OrderCondition::_kitting_task_type arg)
  {
    msg_.kitting_task = std::move(arg);
    return Init_OrderCondition_assembly_task(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_priority
{
public:
  explicit Init_OrderCondition_priority(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  Init_OrderCondition_kitting_task priority(::ariac_msgs::msg::OrderCondition::_priority_type arg)
  {
    msg_.priority = std::move(arg);
    return Init_OrderCondition_kitting_task(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_type
{
public:
  explicit Init_OrderCondition_type(::ariac_msgs::msg::OrderCondition & msg)
  : msg_(msg)
  {}
  Init_OrderCondition_priority type(::ariac_msgs::msg::OrderCondition::_type_type arg)
  {
    msg_.type = std::move(arg);
    return Init_OrderCondition_priority(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

class Init_OrderCondition_id
{
public:
  Init_OrderCondition_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_OrderCondition_type id(::ariac_msgs::msg::OrderCondition::_id_type arg)
  {
    msg_.id = std::move(arg);
    return Init_OrderCondition_type(msg_);
  }

private:
  ::ariac_msgs::msg::OrderCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::OrderCondition>()
{
  return ariac_msgs::msg::builder::Init_OrderCondition_id();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__ORDER_CONDITION__BUILDER_HPP_
