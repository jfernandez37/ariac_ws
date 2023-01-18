// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/MoveAGV.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__TRAITS_HPP_

#include "ariac_msgs/srv/detail/move_agv__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::MoveAGV_Request & msg,
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
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::MoveAGV_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::MoveAGV_Request>()
{
  return "ariac_msgs::srv::MoveAGV_Request";
}

template<>
inline const char * name<ariac_msgs::srv::MoveAGV_Request>()
{
  return "ariac_msgs/srv/MoveAGV_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::MoveAGV_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::srv::MoveAGV_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::srv::MoveAGV_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::MoveAGV_Response & msg,
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

  // member: message
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "message: ";
    value_to_yaml(msg.message, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::MoveAGV_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::MoveAGV_Response>()
{
  return "ariac_msgs::srv::MoveAGV_Response";
}

template<>
inline const char * name<ariac_msgs::srv::MoveAGV_Response>()
{
  return "ariac_msgs/srv/MoveAGV_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::MoveAGV_Response>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::srv::MoveAGV_Response>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::srv::MoveAGV_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::MoveAGV>()
{
  return "ariac_msgs::srv::MoveAGV";
}

template<>
inline const char * name<ariac_msgs::srv::MoveAGV>()
{
  return "ariac_msgs/srv/MoveAGV";
}

template<>
struct has_fixed_size<ariac_msgs::srv::MoveAGV>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::MoveAGV_Request>::value &&
    has_fixed_size<ariac_msgs::srv::MoveAGV_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::MoveAGV>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::MoveAGV_Request>::value &&
    has_bounded_size<ariac_msgs::srv::MoveAGV_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::MoveAGV>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::MoveAGV_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::MoveAGV_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__MOVE_AGV__TRAITS_HPP_
