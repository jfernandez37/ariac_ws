// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TRIAL__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__TRIAL__TRAITS_HPP_

#include "ariac_msgs/msg/detail/trial__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'orders'
#include "ariac_msgs/msg/detail/order__traits.hpp"
// Member 'order_conditions'
#include "ariac_msgs/msg/detail/order_condition__traits.hpp"
// Member 'challenges'
#include "ariac_msgs/msg/detail/challenge__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::Trial & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: time_limit
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "time_limit: ";
    value_to_yaml(msg.time_limit, out);
    out << "\n";
  }

  // member: trial_name
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "trial_name: ";
    value_to_yaml(msg.trial_name, out);
    out << "\n";
  }

  // member: orders
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.orders.size() == 0) {
      out << "orders: []\n";
    } else {
      out << "orders:\n";
      for (auto item : msg.orders) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: order_conditions
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.order_conditions.size() == 0) {
      out << "order_conditions: []\n";
    } else {
      out << "order_conditions:\n";
      for (auto item : msg.order_conditions) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: challenges
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.challenges.size() == 0) {
      out << "challenges: []\n";
    } else {
      out << "challenges:\n";
      for (auto item : msg.challenges) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::Trial & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::Trial>()
{
  return "ariac_msgs::msg::Trial";
}

template<>
inline const char * name<ariac_msgs::msg::Trial>()
{
  return "ariac_msgs/msg/Trial";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Trial>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Trial>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::Trial>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__TRIAL__TRAITS_HPP_
