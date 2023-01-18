// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_

#include "ariac_msgs/srv/detail/perform_quality_check__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::PerformQualityCheck_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: task_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "task_id: ";
    value_to_yaml(msg.task_id, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::PerformQualityCheck_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return "ariac_msgs::srv::PerformQualityCheck_Request";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck_Request>()
{
  return "ariac_msgs/srv/PerformQualityCheck_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

// Include directives for member types
// Member 'quadrant1'
// Member 'quadrant2'
// Member 'quadrant3'
// Member 'quadrant4'
#include "ariac_msgs/msg/detail/quality_issue__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::PerformQualityCheck_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: valid_id
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "valid_id: ";
    value_to_yaml(msg.valid_id, out);
    out << "\n";
  }

  // member: all_passed
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "all_passed: ";
    value_to_yaml(msg.all_passed, out);
    out << "\n";
  }

  // member: incorrect_tray
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "incorrect_tray: ";
    value_to_yaml(msg.incorrect_tray, out);
    out << "\n";
  }

  // member: quadrant1
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant1:\n";
    to_yaml(msg.quadrant1, out, indentation + 2);
  }

  // member: quadrant2
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant2:\n";
    to_yaml(msg.quadrant2, out, indentation + 2);
  }

  // member: quadrant3
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant3:\n";
    to_yaml(msg.quadrant3, out, indentation + 2);
  }

  // member: quadrant4
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "quadrant4:\n";
    to_yaml(msg.quadrant4, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::PerformQualityCheck_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return "ariac_msgs::srv::PerformQualityCheck_Response";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck_Response>()
{
  return "ariac_msgs/srv/PerformQualityCheck_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::integral_constant<bool, has_fixed_size<ariac_msgs::msg::QualityIssue>::value> {};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::integral_constant<bool, has_bounded_size<ariac_msgs::msg::QualityIssue>::value> {};

template<>
struct is_message<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::PerformQualityCheck>()
{
  return "ariac_msgs::srv::PerformQualityCheck";
}

template<>
inline const char * name<ariac_msgs::srv::PerformQualityCheck>()
{
  return "ariac_msgs/srv/PerformQualityCheck";
}

template<>
struct has_fixed_size<ariac_msgs::srv::PerformQualityCheck>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Request>::value &&
    has_fixed_size<ariac_msgs::srv::PerformQualityCheck_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::PerformQualityCheck>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Request>::value &&
    has_bounded_size<ariac_msgs::srv::PerformQualityCheck_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::PerformQualityCheck>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::PerformQualityCheck_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::PerformQualityCheck_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__PERFORM_QUALITY_CHECK__TRAITS_HPP_
