// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_

#include "ariac_msgs/msg/detail/time_condition__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::TimeCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: seconds
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "seconds: ";
    value_to_yaml(msg.seconds, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::TimeCondition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::TimeCondition>()
{
  return "ariac_msgs::msg::TimeCondition";
}

template<>
inline const char * name<ariac_msgs::msg::TimeCondition>()
{
  return "ariac_msgs/msg/TimeCondition";
}

template<>
struct has_fixed_size<ariac_msgs::msg::TimeCondition>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::TimeCondition>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::TimeCondition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__TRAITS_HPP_
