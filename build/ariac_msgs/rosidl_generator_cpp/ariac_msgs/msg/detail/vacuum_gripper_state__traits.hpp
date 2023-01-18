// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/VacuumGripperState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/vacuum_gripper_state__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::VacuumGripperState & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: enabled
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "enabled: ";
    value_to_yaml(msg.enabled, out);
    out << "\n";
  }

  // member: attached
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "attached: ";
    value_to_yaml(msg.attached, out);
    out << "\n";
  }

  // member: type
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "type: ";
    value_to_yaml(msg.type, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::VacuumGripperState & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::VacuumGripperState>()
{
  return "ariac_msgs::msg::VacuumGripperState";
}

template<>
inline const char * name<ariac_msgs::msg::VacuumGripperState>()
{
  return "ariac_msgs/msg/VacuumGripperState";
}

template<>
struct has_fixed_size<ariac_msgs::msg::VacuumGripperState>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::VacuumGripperState>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::VacuumGripperState>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__VACUUM_GRIPPER_STATE__TRAITS_HPP_
