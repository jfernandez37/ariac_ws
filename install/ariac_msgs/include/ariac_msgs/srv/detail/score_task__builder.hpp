// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:srv/ScoreTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__BUILDER_HPP_
#define ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__BUILDER_HPP_

#include "ariac_msgs/srv/detail/score_task__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTask_Request_order_id
{
public:
  Init_ScoreTask_Request_order_id()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::ScoreTask_Request order_id(::ariac_msgs::srv::ScoreTask_Request::_order_id_type arg)
  {
    msg_.order_id = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ScoreTask_Request msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ScoreTask_Request>()
{
  return ariac_msgs::srv::builder::Init_ScoreTask_Request_order_id();
}

}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace srv
{

namespace builder
{

class Init_ScoreTask_Response_score
{
public:
  Init_ScoreTask_Response_score()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  ::ariac_msgs::srv::ScoreTask_Response score(::ariac_msgs::srv::ScoreTask_Response::_score_type arg)
  {
    msg_.score = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::srv::ScoreTask_Response msg_;
};

}  // namespace builder

}  // namespace srv

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::srv::ScoreTask_Response>()
{
  return ariac_msgs::srv::builder::Init_ScoreTask_Response_score();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__SRV__DETAIL__SCORE_TASK__BUILDER_HPP_
