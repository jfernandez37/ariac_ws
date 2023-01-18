// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/ChallengeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__TRAITS_HPP_

#include "ariac_msgs/msg/detail/challenge_condition__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'time_condition'
#include "ariac_msgs/msg/detail/time_condition__traits.hpp"
// Member 'part_place_condition'
#include "ariac_msgs/msg/detail/part_place_condition__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::ChallengeCondition & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }

  // member: time_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_condition:\n";
    to_yaml(msg.time_condition, out, indentation + 2);
  }

  // member: part_place_condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_place_condition:\n";
    to_yaml(msg.part_place_condition, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::ChallengeCondition & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::ChallengeCondition>()
{
  return "ariac_msgs::msg::ChallengeCondition";
}

template<>
inline const char * name<ariac_msgs::msg::ChallengeCondition>()
{
  return "ariac_msgs/msg/ChallengeCondition";
}

template<>
struct has_fixed_size<ariac_msgs::msg::ChallengeCondition>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::ChallengeCondition>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::ChallengeCondition>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE_CONDITION__TRAITS_HPP_
