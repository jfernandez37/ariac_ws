// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TRIAL__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TRIAL__BUILDER_HPP_

#include "ariac_msgs/msg/detail/trial__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_Trial_challenges
{
public:
  explicit Init_Trial_challenges(::ariac_msgs::msg::Trial & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::Trial challenges(::ariac_msgs::msg::Trial::_challenges_type arg)
  {
    msg_.challenges = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::Trial msg_;
};

class Init_Trial_order_conditions
{
public:
  explicit Init_Trial_order_conditions(::ariac_msgs::msg::Trial & msg)
  : msg_(msg)
  {}
  Init_Trial_challenges order_conditions(::ariac_msgs::msg::Trial::_order_conditions_type arg)
  {
    msg_.order_conditions = std::move(arg);
    return Init_Trial_challenges(msg_);
  }

private:
  ::ariac_msgs::msg::Trial msg_;
};

class Init_Trial_orders
{
public:
  explicit Init_Trial_orders(::ariac_msgs::msg::Trial & msg)
  : msg_(msg)
  {}
  Init_Trial_order_conditions orders(::ariac_msgs::msg::Trial::_orders_type arg)
  {
    msg_.orders = std::move(arg);
    return Init_Trial_order_conditions(msg_);
  }

private:
  ::ariac_msgs::msg::Trial msg_;
};

class Init_Trial_trial_name
{
public:
  explicit Init_Trial_trial_name(::ariac_msgs::msg::Trial & msg)
  : msg_(msg)
  {}
  Init_Trial_orders trial_name(::ariac_msgs::msg::Trial::_trial_name_type arg)
  {
    msg_.trial_name = std::move(arg);
    return Init_Trial_orders(msg_);
  }

private:
  ::ariac_msgs::msg::Trial msg_;
};

class Init_Trial_time_limit
{
public:
  Init_Trial_time_limit()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_Trial_trial_name time_limit(::ariac_msgs::msg::Trial::_time_limit_type arg)
  {
    msg_.time_limit = std::move(arg);
    return Init_Trial_trial_name(msg_);
  }

private:
  ::ariac_msgs::msg::Trial msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::Trial>()
{
  return ariac_msgs::msg::builder::Init_Trial_time_limit();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__TRIAL__BUILDER_HPP_
