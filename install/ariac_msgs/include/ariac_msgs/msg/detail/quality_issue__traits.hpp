// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/quality_issue__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::QualityIssue & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: all_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_passed: ";
    value_to_yaml(msg.all_passed, out);
    out << "\n";
  }

  // member: missing_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "missing_part: ";
    value_to_yaml(msg.missing_part, out);
    out << "\n";
  }

  // member: flipped_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "flipped_part: ";
    value_to_yaml(msg.flipped_part, out);
    out << "\n";
  }

  // member: faulty_part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faulty_part: ";
    value_to_yaml(msg.faulty_part, out);
    out << "\n";
  }

  // member: incorrect_part_type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_part_type: ";
    value_to_yaml(msg.incorrect_part_type, out);
    out << "\n";
  }

  // member: incorrect_part_color
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_part_color: ";
    value_to_yaml(msg.incorrect_part_color, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::QualityIssue & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::QualityIssue>()
{
  return "ariac_msgs::msg::QualityIssue";
}

template<>
inline const char * name<ariac_msgs::msg::QualityIssue>()
{
  return "ariac_msgs/msg/QualityIssue";
}

template<>
struct has_fixed_size<ariac_msgs::msg::QualityIssue>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::QualityIssue>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::QualityIssue>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__QUALITY_ISSUE__TRAITS_HPP_
