// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/Order.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ORDER__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ORDER__TRAITS_HPP_

#include "ariac_msgs/msg/detail/order__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'kitting_task'
#include "ariac_msgs/msg/detail/kitting_task__traits.hpp"
// Member 'assembly_task'
#include "ariac_msgs/msg/detail/assembly_task__traits.hpp"
// Member 'combined_task'
#include "ariac_msgs/msg/detail/combined_task__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::Order & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "id: ";
    value_to_yaml(msg.id, out);
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

  // member: priority
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "priority: ";
    value_to_yaml(msg.priority, out);
    out << "\n";
  }

  // member: kitting_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "kitting_task:\n";
    to_yaml(msg.kitting_task, out, indentation + 2);
  }

  // member: assembly_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "assembly_task:\n";
    to_yaml(msg.assembly_task, out, indentation + 2);
  }

  // member: combined_task
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "combined_task:\n";
    to_yaml(msg.combined_task, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::Order & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::Order>()
{
  return "ariac_msgs::msg::Order";
}

template<>
inline const char * name<ariac_msgs::msg::Order>()
{
  return "ariac_msgs/msg/Order";
}

template<>
struct has_fixed_size<ariac_msgs::msg::Order>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::Order>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::Order>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ORDER__TRAITS_HPP_
