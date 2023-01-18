// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/RobotMalfunctionChallenge.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

// Include directives for member types
// Member 'condition'
#include "ariac_msgs/msg/detail/challenge_condition__struct.h"
// Member 'robots_to_disable'
#include "ariac_msgs/msg/detail/robots__struct.h"

// Struct defined in msg/RobotMalfunctionChallenge in the package ariac_msgs.
typedef struct ariac_msgs__msg__RobotMalfunctionChallenge
{
  double duration;
  ariac_msgs__msg__ChallengeCondition condition;
  ariac_msgs__msg__Robots robots_to_disable;
} ariac_msgs__msg__RobotMalfunctionChallenge;

// Struct for a sequence of ariac_msgs__msg__RobotMalfunctionChallenge.
typedef struct ariac_msgs__msg__RobotMalfunctionChallenge__Sequence
{
  ariac_msgs__msg__RobotMalfunctionChallenge * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__RobotMalfunctionChallenge__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__ROBOT_MALFUNCTION_CHALLENGE__STRUCT_H_
