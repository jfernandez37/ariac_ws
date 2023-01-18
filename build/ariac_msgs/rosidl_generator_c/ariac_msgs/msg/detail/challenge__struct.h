// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'type'
#include "rosidl_runtime_c/string.h"
// Member 'faulty_part_challenge'
#include "ariac_msgs/msg/detail/faulty_part_challenge__struct.h"
// Member 'dropped_part_challenge'
#include "ariac_msgs/msg/detail/dropped_part_challenge__struct.h"
// Member 'sensor_blackout_challenge'
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.h"
// Member 'robot_malfunction_challenge'
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__struct.h"

// Struct defined in msg/Challenge in the package ariac_msgs.
typedef struct ariac_msgs__msg__Challenge
{
  rosidl_runtime_c__String type;
  ariac_msgs__msg__FaultyPartChallenge faulty_part_challenge;
  ariac_msgs__msg__DroppedPartChallenge dropped_part_challenge;
  ariac_msgs__msg__SensorBlackoutChallenge sensor_blackout_challenge;
  ariac_msgs__msg__RobotMalfunctionChallenge robot_malfunction_challenge;
} ariac_msgs__msg__Challenge;

// Struct for a sequence of ariac_msgs__msg__Challenge.
typedef struct ariac_msgs__msg__Challenge__Sequence
{
  ariac_msgs__msg__Challenge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__Challenge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__CHALLENGE__STRUCT_H_
