// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/BinInfo.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_INFO__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_INFO__BUILDER_HPP_

#include "ariac_msgs/msg/detail/bin_info__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_BinInfo_parts
{
public:
  explicit Init_BinInfo_parts(::ariac_msgs::msg::BinInfo & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::BinInfo parts(::ariac_msgs::msg::BinInfo::_parts_type arg)
  {
    msg_.parts = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::BinInfo msg_;
};

class Init_BinInfo_bin_number
{
public:
  Init_BinInfo_bin_number()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_BinInfo_parts bin_number(::ariac_msgs::msg::BinInfo::_bin_number_type arg)
  {
    msg_.bin_number = std::move(arg);
    return Init_BinInfo_parts(msg_);
  }

private:
  ::ariac_msgs::msg::BinInfo msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::BinInfo>()
{
  return ariac_msgs::msg::builder::Init_BinInfo_bin_number();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_INFO__BUILDER_HPP_
