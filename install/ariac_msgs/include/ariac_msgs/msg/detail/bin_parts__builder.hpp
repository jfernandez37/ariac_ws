// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__BUILDER_HPP_

#include "ariac_msgs/msg/detail/bin_parts__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_BinParts_bins
{
public:
  Init_BinParts_bins()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::BinParts bins(::ariac_msgs::msg::BinParts::_bins_type arg)
  {
    msg_.bins = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::BinParts msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::BinParts>()
{
  return ariac_msgs::msg::builder::Init_BinParts_bins();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__BUILDER_HPP_
