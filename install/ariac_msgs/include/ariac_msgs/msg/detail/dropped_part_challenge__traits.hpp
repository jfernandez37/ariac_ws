// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/DroppedPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'part_to_drop'
#include "ariac_msgs/msg/detail/part__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::DroppedPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: robot
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot: ";
    value_to_yaml(msg.robot, out);
    out << "\n";
  }

  // member: part_to_drop
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part_to_drop:\n";
    to_yaml(msg.part_to_drop, out, indentation + 2);
  }

  // member: drop_after_num
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_after_num: ";
    value_to_yaml(msg.drop_after_num, out);
    out << "\n";
  }

  // member: drop_after_time
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "drop_after_time: ";
    value_to_yaml(msg.drop_after_time, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::DroppedPartChallenge & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::DroppedPartChallenge>()
{
  return "ariac_msgs::msg::DroppedPartChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::DroppedPartChallenge>()
{
  return "ariac_msgs/msg/DroppedPartChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::DroppedPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::DroppedPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::DroppedPartChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__DROPPED_PART_CHALLENGE__TRAITS_HPP_
