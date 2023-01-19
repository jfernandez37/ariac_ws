// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/AssemblyTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__TRAITS_HPP_

#include "ariac_msgs/msg/detail/assembly_task__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'parts'
#include "ariac_msgs/msg/detail/assembly_part__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::AssemblyTask & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: agv_numbers
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.agv_numbers.size() == 0) {
      out << "agv_numbers: []\n";
    } else {
      out << "agv_numbers:\n";
      for (auto item : msg.agv_numbers) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: station
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "station: ";
    value_to_yaml(msg.station, out);
    out << "\n";
  }

  // member: parts
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.parts.size() == 0) {
      out << "parts: []\n";
    } else {
      out << "parts:\n";
      for (auto item : msg.parts) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::AssemblyTask & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::AssemblyTask>()
{
  return "ariac_msgs::msg::AssemblyTask";
}

template<>
inline const char * name<ariac_msgs::msg::AssemblyTask>()
{
  return "ariac_msgs/msg/AssemblyTask";
}

template<>
struct has_fixed_size<ariac_msgs::msg::AssemblyTask>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::AssemblyTask>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::AssemblyTask>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_TASK__TRAITS_HPP_
