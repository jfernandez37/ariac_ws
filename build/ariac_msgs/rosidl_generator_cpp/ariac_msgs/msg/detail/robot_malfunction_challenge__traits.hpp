// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/challenge_condition__traits.hpp"
// Member 'robots_to_disable'
#include "ariac_msgs/msg/detail/robots__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::RobotMalfunctionChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: duration
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "duration: ";
    value_to_yaml(msg.duration, out);
    out << "\n";
  }

  // member: condition
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "condition:\n";
    to_yaml(msg.condition, out, indentation + 2);
  }

  // member: robots_to_disable
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robots_to_disable:\n";
    to_yaml(msg.robots_to_disable, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::RobotMalfunctionChallenge & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return "ariac_msgs::msg::RobotMalfunctionChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::RobotMalfunctionChallenge>()
{
  return "ariac_msgs/msg/RobotMalfunctionChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::ChallengeCondition>::value && has_fixed_size<ariac_msgs::msg::Robots>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::ChallengeCondition>::value && has_bounded_size<ariac_msgs::msg::Robots>::value> {};

template<>
struct is_message<ariac_msgs::msg::RobotMalfunctionChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__TRAITS_HPP_
