// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/KitTrayPose.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'pose'
#include "geometry_msgs/msg/detail/pose__struct.h"

// Struct defined in msg/KitTrayPose in the package ariac_msgs.
typedef struct ariac_msgs__msg__KitTrayPose
{
  int8_t id;
  geometry_msgs__msg__Pose pose;
} ariac_msgs__msg__KitTrayPose;

// Struct for a sequence of ariac_msgs__msg__KitTrayPose.
typedef struct ariac_msgs__msg__KitTrayPose__Sequence
{
  ariac_msgs__msg__KitTrayPose * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__KitTrayPose__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__KIT_TRAY_POSE__STRUCT_H_
