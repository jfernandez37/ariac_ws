// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__SENSOR_BLACKOUT_CHALLENGE__BUILDER_HPP_
#define ARIAC_MSGS__MSG__DETAIL__SENSOR_BLACKOUT_CHALLENGE__BUILDER_HPP_

#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.hpp"
#include <rosidl_runtime_cpp/message_initialization.hpp>
#include <algorithm>
#include <utility>


namespace ariac_msgs
{

namespace msg
{

namespace builder
{

class Init_SensorBlackoutChallenge_sensors_to_disable
{
public:
  explicit Init_SensorBlackoutChallenge_sensors_to_disable(::ariac_msgs::msg::SensorBlackoutChallenge & msg)
  : msg_(msg)
  {}
  ::ariac_msgs::msg::SensorBlackoutChallenge sensors_to_disable(::ariac_msgs::msg::SensorBlackoutChallenge::_sensors_to_disable_type arg)
  {
    msg_.sensors_to_disable = std::move(arg);
    return std::move(msg_);
  }

private:
  ::ariac_msgs::msg::SensorBlackoutChallenge msg_;
};

class Init_SensorBlackoutChallenge_condition
{
public:
  explicit Init_SensorBlackoutChallenge_condition(::ariac_msgs::msg::SensorBlackoutChallenge & msg)
  : msg_(msg)
  {}
  Init_SensorBlackoutChallenge_sensors_to_disable condition(::ariac_msgs::msg::SensorBlackoutChallenge::_condition_type arg)
  {
    msg_.condition = std::move(arg);
    return Init_SensorBlackoutChallenge_sensors_to_disable(msg_);
  }

private:
  ::ariac_msgs::msg::SensorBlackoutChallenge msg_;
};

class Init_SensorBlackoutChallenge_duration
{
public:
  Init_SensorBlackoutChallenge_duration()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_SensorBlackoutChallenge_condition duration(::ariac_msgs::msg::SensorBlackoutChallenge::_duration_type arg)
  {
    msg_.duration = std::move(arg);
    return Init_SensorBlackoutChallenge_condition(msg_);
  }

private:
  ::ariac_msgs::msg::SensorBlackoutChallenge msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::ariac_msgs::msg::SensorBlackoutChallenge>()
{
  return ariac_msgs::msg::builder::Init_SensorBlackoutChallenge_duration();
}

}  // namespace ariac_msgs

#endif  // ARIAC_MSGS__MSG__DETAIL__SENSOR_BLACKOUT_CHALLENGE__BUILDER_HPP_
