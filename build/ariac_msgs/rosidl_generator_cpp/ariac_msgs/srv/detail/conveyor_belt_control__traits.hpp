// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:srv/ConveyorBeltControl.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__TRAITS_HPP_
#define ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__TRAITS_HPP_

#include "ariac_msgs/srv/detail/conveyor_belt_control__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::ConveyorBeltControl_Request & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: power
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "power: ";
    value_to_yaml(msg.power, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::srv::ConveyorBeltControl_Request & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::ConveyorBeltControl_Request>()
{
  return "ariac_msgs::srv::ConveyorBeltControl_Request";
}

template<>
inline const char * name<ariac_msgs::srv::ConveyorBeltControl_Request>()
{
  return "ariac_msgs/srv/ConveyorBeltControl_Request";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ConveyorBeltControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::srv::ConveyorBeltControl_Request>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::srv::ConveyorBeltControl_Request>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::srv::ConveyorBeltControl_Response & msg,
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

inline std::string to_yaml(const ariac_msgs::srv::ConveyorBeltControl_Response & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::srv::ConveyorBeltControl_Response>()
{
  return "ariac_msgs::srv::ConveyorBeltControl_Response";
}

template<>
inline const char * name<ariac_msgs::srv::ConveyorBeltControl_Response>()
{
  return "ariac_msgs/srv/ConveyorBeltControl_Response";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ConveyorBeltControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct has_bounded_size<ariac_msgs::srv::ConveyorBeltControl_Response>
  : std::integral_constant<bool, true> {};

template<>
struct is_message<ariac_msgs::srv::ConveyorBeltControl_Response>
  : std::true_type {};

}  // namespace rosidl_generator_traits

namespace rosidl_generator_traits
{

template<>
inline const char * data_type<ariac_msgs::srv::ConveyorBeltControl>()
{
  return "ariac_msgs::srv::ConveyorBeltControl";
}

template<>
inline const char * name<ariac_msgs::srv::ConveyorBeltControl>()
{
  return "ariac_msgs/srv/ConveyorBeltControl";
}

template<>
struct has_fixed_size<ariac_msgs::srv::ConveyorBeltControl>
  : std::integral_constant<
    bool,
    has_fixed_size<ariac_msgs::srv::ConveyorBeltControl_Request>::value &&
    has_fixed_size<ariac_msgs::srv::ConveyorBeltControl_Response>::value
  >
{
};

template<>
struct has_bounded_size<ariac_msgs::srv::ConveyorBeltControl>
  : std::integral_constant<
    bool,
    has_bounded_size<ariac_msgs::srv::ConveyorBeltControl_Request>::value &&
    has_bounded_size<ariac_msgs::srv::ConveyorBeltControl_Response>::value
  >
{
};

template<>
struct is_service<ariac_msgs::srv::ConveyorBeltControl>
  : std::true_type
{
};

template<>
struct is_service_request<ariac_msgs::srv::ConveyorBeltControl_Request>
  : std::true_type
{
};

template<>
struct is_service_response<ariac_msgs::srv::ConveyorBeltControl_Response>
  : std::true_type
{
};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__SRV__DETAIL__CONVEYOR_BELT_CONTROL__TRAITS_HPP_
