// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/AssemblyPart.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'part'
#include "ariac_msgs/msg/detail/part__struct.h"
// Member 'assembled_pose'
#include "geometry_msgs/msg/detail/pose_stamped__struct.h"
// Member 'install_direction'
#include "geometry_msgs/msg/detail/vector3__struct.h"

// Struct defined in msg/AssemblyPart in the package ariac_msgs.
typedef struct ariac_msgs__msg__AssemblyPart
{
  ariac_msgs__msg__Part part;
  geometry_msgs__msg__PoseStamped assembled_pose;
  geometry_msgs__msg__Vector3 install_direction;
} ariac_msgs__msg__AssemblyPart;

// Struct for a sequence of ariac_msgs__msg__AssemblyPart.
typedef struct ariac_msgs__msg__AssemblyPart__Sequence
{
  ariac_msgs__msg__AssemblyPart * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__AssemblyPart__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ASSEMBLY_PART__STRUCT_H_
