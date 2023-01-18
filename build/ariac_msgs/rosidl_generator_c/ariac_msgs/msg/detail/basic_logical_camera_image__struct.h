// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/BasicLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'part_poses'
// Member 'tray_poses'
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/BasicLogicalCameraImage in the package ariac_msgs.
typedef struct ariac_msgs__msg__BasicLogicalCameraImage
{
  geometry_msgs__msg__Pose__Sequence part_poses;
  geometry_msgs__msg__Pose__Sequence tray_poses;
  geometry_msgs__msg__Pose sensor_pose;
} ariac_msgs__msg__BasicLogicalCameraImage;

// Struct for a sequence of ariac_msgs__msg__BasicLogicalCameraImage.
typedef struct ariac_msgs__msg__BasicLogicalCameraImage__Sequence
{
  ariac_msgs__msg__BasicLogicalCameraImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__BasicLogicalCameraImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__BASIC_LOGICAL_CAMERA_IMAGE__STRUCT_H_
