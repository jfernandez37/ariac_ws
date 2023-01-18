// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/BreakBeamStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__TRAITS_HPP_

#include "ariac_msgs/msg/detail/break_beam_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'header'
#include "std_msgs/msg/detail/header__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::BreakBeamStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: header
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "header:\n";
    to_yaml(msg.header, out, indentation + 2);
  }

  // member: object_detected
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "object_detected: ";
    value_to_yaml(msg.object_detected, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::BreakBeamStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::BreakBeamStatus>()
{
  return "ariac_msgs::msg::BreakBeamStatus";
}

template<>
inline const char * name<ariac_msgs::msg::BreakBeamStatus>()
{
  return "ariac_msgs/msg/BreakBeamStatus";
}

template<>
struct has_fixed_size<ariac_msgs::msg::BreakBeamStatus>
  : std::integral_constant<bool, has_fixed_size<std_msgs::msg::Header>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::BreakBeamStatus>
  : std::integral_constant<bool, has_bounded_size<std_msgs::msg::Header>::value> {};

template<>
struct is_message<ariac_msgs::msg::BreakBeamStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__BREAK_BEAM_STATUS__TRAITS_HPP_
