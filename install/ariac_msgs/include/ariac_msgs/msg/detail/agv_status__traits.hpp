// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/AGVStatus.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__TRAITS_HPP_

#include "ariac_msgs/msg/detail/agv_status__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::AGVStatus & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: location
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "location: ";
    value_to_yaml(msg.location, out);
    out << "\n";
  }

  // member: position
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "position: ";
    value_to_yaml(msg.position, out);
    out << "\n";
  }

  // member: velocity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "velocity: ";
    value_to_yaml(msg.velocity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::AGVStatus & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::AGVStatus>()
{
  return "ariac_msgs::msg::AGVStatus";
}

template<>
inline const char * name<ariac_msgs::msg::AGVStatus>()
{
  return "ariac_msgs/msg/AGVStatus";
}

template<>
struct has_fixed_size<ariac_msgs::msg::AGVStatus>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::msg::AGVStatus>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::msg::AGVStatus>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__AGV_STATUS__TRAITS_HPP_
