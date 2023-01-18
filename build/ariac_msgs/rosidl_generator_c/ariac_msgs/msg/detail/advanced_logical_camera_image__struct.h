// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/AdvancedLogicalCameraImage.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_

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
#include "ariac_msgs/msg/detail/part_pose__struct.h"
// Member 'tray_poses'
#include "ariac_msgs/msg/detail/kit_tray_pose__struct.h"
// Member 'sensor_pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/AdvancedLogicalCameraImage in the package ariac_msgs.
typedef struct ariac_msgs__msg__AdvancedLogicalCameraImage
{
  ariac_msgs__msg__PartPose__Sequence part_poses;
  ariac_msgs__msg__KitTrayPose__Sequence tray_poses;
  geometry_msgs__msg__Pose sensor_pose;
} ariac_msgs__msg__AdvancedLogicalCameraImage;

// Struct for a sequence of ariac_msgs__msg__AdvancedLogicalCameraImage.
typedef struct ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence
{
  ariac_msgs__msg__AdvancedLogicalCameraImage * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__AdvancedLogicalCameraImage__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ADVANCED_LOGICAL_CAMERA_IMAGE__STRUCT_H_
