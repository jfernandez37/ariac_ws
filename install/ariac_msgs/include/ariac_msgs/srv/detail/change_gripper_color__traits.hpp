// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/ChangeGripperColor.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__TRAITS_HPP_

#include "ariac_msgs/srv/detail/change_gripper_color__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::ChangeGripperColor_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: r
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "r: ";
    value_to_yaml(msg.r, out);
    out << "\n";
  }

  // member: g
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "g: ";
    value_to_yaml(msg.g, out);
    out << "\n";
  }

  // member: b
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "b: ";
    value_to_yaml(msg.b, out);
    out << "\n";
  }

  // member: alpha
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "alpha: ";
    value_to_yaml(msg.alpha, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::ChangeGripperColor_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::ChangeGripperColor_Request>()
{
  return "ariac_msgs::srv::ChangeGripperColor_Request";
}

template<>
inline const char * name<ariac_msgs::srv::ChangeGripperColor_Request>()
{
  return "ariac_msgs/srv/ChangeGripperColor_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ChangeGripperColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::srv::ChangeGripperColor_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::srv::ChangeGripperColor_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::ChangeGripperColor_Response & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: success
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "success: ";
    value_to_yaml(msg.success, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::ChangeGripperColor_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::ChangeGripperColor_Response>()
{
  return "ariac_msgs::srv::ChangeGripperColor_Response";
}

template<>
inline const char * name<ariac_msgs::srv::ChangeGripperColor_Response>()
{
  return "ariac_msgs/srv/ChangeGripperColor_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ChangeGripperColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::srv::ChangeGripperColor_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::srv::ChangeGripperColor_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::ChangeGripperColor>()
{
  return "ariac_msgs::srv::ChangeGripperColor";
}

template<>
inline const char * name<ariac_msgs::srv::ChangeGripperColor>()
{
  return "ariac_msgs/srv/ChangeGripperColor";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ChangeGripperColor>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::ChangeGripperColor_Request>::value &&
    has_fixed_size<ariac_msgs::srv::ChangeGripperColor_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::ChangeGripperColor>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::ChangeGripperColor_Request>::value &&
    has_bounded_size<ariac_msgs::srv::ChangeGripperColor_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::ChangeGripperColor>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::ChangeGripperColor_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::ChangeGripperColor_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__CHANGE_GRIPPER_COLOR__TRAITS_HPP_
