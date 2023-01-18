// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/FaultyPartChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::FaultyPartChallenge & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: order_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "order_id: ";
    value_to_yaml(msg.order_id, out);
    out << "\n";
  }

  // member: quandrant1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quandrant1: ";
    value_to_yaml(msg.quandrant1, out);
    out << "\n";
  }

  // member: quandrant2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quandrant2: ";
    value_to_yaml(msg.quandrant2, out);
    out << "\n";
  }

  // member: quandrant3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quandrant3: ";
    value_to_yaml(msg.quandrant3, out);
    out << "\n";
  }

  // member: quandrant4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quandrant4: ";
    value_to_yaml(msg.quandrant4, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::FaultyPartChallenge & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::FaultyPartChallenge>()
{
  return "ariac_msgs::msg::FaultyPartChallenge";
}

template<>
inline const char * name<ariac_msgs::msg::FaultyPartChallenge>()
{
  return "ariac_msgs/msg/FaultyPartChallenge";
}

template<>
struct has_fixed_size<ariac_msgs::msg::FaultyPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::FaultyPartChallenge>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::FaultyPartChallenge>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__FAULTY_PART_CHALLENGE__TRAITS_HPP_
