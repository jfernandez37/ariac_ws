// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/PartLot.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__PART_LOT__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__PART_LOT__TRAITS_HPP_

#include "ariac_msgs/msg/detail/part_lot__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::PartLot & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "part:\n";
    to_yaml(msg.part, out, indentation + 2);
  }

  // member: quantity
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quantity: ";
    value_to_yaml(msg.quantity, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::PartLot & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::PartLot>()
{
  return "ariac_msgs::msg::PartLot";
}

template<>
inline const char * name<ariac_msgs::msg::PartLot>()
{
  return "ariac_msgs/msg/PartLot";
}

template<>
struct has_fixed_size<ariac_msgs::msg::PartLot>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::Part>::value> {};

template<>
struct has_bounded_size<ariac_msgs::msg::PartLot>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::Part>::value> {};

template<>
struct is_message<ariac_msgs::msg::PartLot>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__PART_LOT__TRAITS_HPP_
