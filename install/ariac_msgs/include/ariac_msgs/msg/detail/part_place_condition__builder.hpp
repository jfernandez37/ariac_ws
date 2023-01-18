// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__BUILDER_HPP_

#include "ariac_msgs/msg/detail/part_place_condition__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_PartPlaceCondition_agv
{
public:
  explicit Init_PartPlaceCondition_agv(::ariac_msgs::msg::PartPlaceCondition & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::PartPlaceCondition agv(::ariac_msgs::msg::PartPlaceCondition::_agv_type arg)
  {
    msg_.agv = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::PartPlaceCondition msg_;
};

class Init_PartPlaceCondition_part
{
public:
  Init_PartPlaceCondition_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartPlaceCondition_agv part(::ariac_msgs::msg::PartPlaceCondition::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_PartPlaceCondition_agv(msg_);
  }

private:
  ::ariac_msgs::msg::PartPlaceCondition msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::PartPlaceCondition>()
{
  return ariac_msgs::msg::builder::Init_PartPlaceCondition_part();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_PLACE_CONDITION__BUILDER_HPP_
