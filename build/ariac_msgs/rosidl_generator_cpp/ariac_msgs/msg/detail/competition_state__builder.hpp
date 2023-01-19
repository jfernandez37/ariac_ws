// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/CompetitionState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/competition_state__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_CompetitionState_competition_state
{
public:
  Init_CompetitionState_competition_state()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::msg::CompetitionState competition_state(::ariac_msgs::msg::CompetitionState::_competition_state_type arg)
  {
    msg_.competition_state = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::CompetitionState msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::CompetitionState>()
{
  return ariac_msgs::msg::builder::Init_CompetitionState_competition_state();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__BUILDER_HPP_
