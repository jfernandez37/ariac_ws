// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from ariac_msgs:msg/BasicLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
#define ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_

#include "ariac_msgs/msg/detail/basic_logical_camera_image__struct.hpp"
#include <stdint.h>
#include <rosidl_runtime_cpp/traits.hpp>
#include <sstream>
#include <string>
#include <type_traits>

// Include directives for member types
// Member 'part_poses'
// Member 'tray_poses'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__traits.hpp"

namespace rosidl_generator_traits
{

inline void to_yaml(
  const ariac_msgs::msg::BasicLogicalCameraImage & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: part_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.part_poses.size() == 0) {
      out << "part_poses: []\n";
    } else {
      out << "part_poses:\n";
      for (auto item : msg.part_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: tray_poses
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.tray_poses.size() == 0) {
      out << "tray_poses: []\n";
    } else {
      out << "tray_poses:\n";
      for (auto item : msg.tray_poses) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "-\n";
        to_yaml(item, out, indentation + 2);
      }
    }
  }

  // member: sensor_pose
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "sensor_pose:\n";
    to_yaml(msg.sensor_pose, out, indentation + 2);
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const ariac_msgs::msg::BasicLogicalCameraImage & msg)
{
  std::ostringstream out;
  to_yaml(msg, out);
  return out.str();
}

template<>
inline const char * data_type<ariac_msgs::msg::BasicLogicalCameraImage>()
{
  return "ariac_msgs::msg::BasicLogicalCameraImage";
}

template<>
inline const char * name<ariac_msgs::msg::BasicLogicalCameraImage>()
{
  return "ariac_msgs/msg/BasicLogicalCameraImage";
}

template<>
struct has_fixed_size<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<ariac_msgs::msg::BasicLogicalCameraImage>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__TRAITS_HPP_
