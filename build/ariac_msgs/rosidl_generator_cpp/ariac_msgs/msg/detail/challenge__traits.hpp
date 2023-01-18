// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/challenge__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'faulty_part_challenge'
#include "ariac_msgs/msg/detail/faulty_part_challenge__traits.hpp"
// Member 'dropped_part_challenge'
#include "ariac_msgs/msg/detail/dropped_part_challenge__traits.hpp"
// Member 'sensor_blackout_challenge'
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__traits.hpp"
// Member 'robot_malfunction_challenge'
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::Challenge & msg,
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

  // member: faulty_part_challenge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "faulty_part_challenge:\n";
    to_yaml(msg.faulty_part_challenge, out, indentation + 2);
  }

  // member: dropped_part_challenge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "dropped_part_challenge:\n";
    to_yaml(msg.dropped_part_challenge, out, indentation + 2);
  }

  // member: sensor_blackout_challenge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_blackout_challenge:\n";
    to_yaml(msg.sensor_blackout_challenge, out, indentation + 2);
  }

  // member: robot_malfunction_challenge
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "robot_malfunction_challenge:\n";
    to_yaml(msg.robot_malfunction_challenge, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::Challenge & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::Challenge>()
{
  return "ariac_msgs::msg::Challenge";
}

template<>
inline const char * name<ariac_msgs::msg::Challenge>()
{
  return "ariac_msgs/msg/Challenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Challenge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Challenge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::Challenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE__TRAITS_HPP_
