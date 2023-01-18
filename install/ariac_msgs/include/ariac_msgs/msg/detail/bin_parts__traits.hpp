// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/BinParts.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_

#include "ariac_msgs/msg/detail/bin_parts__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'bins'
#include "ariac_msgs/msg/detail/bin_info__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::BinParts & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: bins
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.bins.size() == 0) {
      out << "bins: []\n";
    } else {
      out << "bins:\n";
      for (auto item : msg.bins) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::BinParts & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::BinParts>()
{
  return "ariac_msgs::msg::BinParts";
}

template<>
inline const char * name<ariac_msgs::msg::BinParts>()
{
  return "ariac_msgs/msg/BinParts";
}

template<>
struct has_fixed_size<ariac_msgs::msg::BinParts>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::BinParts>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::BinParts>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__BIN_PARTS__TRAITS_HPP_
