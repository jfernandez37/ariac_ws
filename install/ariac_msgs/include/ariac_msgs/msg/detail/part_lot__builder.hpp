// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/PartLot.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_LOT__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_LOT__BUILDER_HPP_

#include "ariac_msgs/msg/detail/part_lot__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_PartLot_quantity
{
public:
  explicit Init_PartLot_quantity(::ariac_msgs::msg::PartLot & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::PartLot quantity(::ariac_msgs::msg::PartLot::_quantity_type arg)
  {
    msg_.quantity = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::PartLot msg_;
};

class Init_PartLot_part
{
public:
  Init_PartLot_part()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_PartLot_quantity part(::ariac_msgs::msg::PartLot::_part_type arg)
  {
    msg_.part = std::move(arg);
    return Init_PartLot_quantity(msg_);
  }

private:
  ::ariac_msgs::msg::PartLot msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::PartLot>()
{
  return ariac_msgs::msg::builder::Init_PartLot_part();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_LOT__BUILDER_HPP_
