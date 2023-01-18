// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/ConveyorBeltState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/conveyor_belt_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::ConveyorBeltState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    value_to_yaml(msg.power, out);
    out << "\n";
  }

  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    value_to_yaml(msg.enabled, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::ConveyorBeltState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::ConveyorBeltState>()
{
  return "ariac_msgs::msg::ConveyorBeltState";
}

template<>
inline const char * name<ariac_msgs::msg::ConveyorBeltState>()
{
  return "ariac_msgs/msg/ConveyorBeltState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::ConveyorBeltState>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::ConveyorBeltState>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::ConveyorBeltState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__CONVEYOR_BELT_STATE__TRAITS_HPP_
