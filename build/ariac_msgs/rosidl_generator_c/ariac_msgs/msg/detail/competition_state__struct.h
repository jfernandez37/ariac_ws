// generated from rosidl_generator_c/resource/idl__struct.h.em
// with input from ariac_msgs:msg/CompetitionState.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_H_
#define ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stddef.h>
#include <stdint.h>


// Constants defined in the message

/// Constant 'IDLE'.
enum
{
  ariac_msgs__msg__CompetitionState__IDLE = 0
};

/// Constant 'READY'.
enum
{
  ariac_msgs__msg__CompetitionState__READY = 1
};

/// Constant 'STARTED'.
enum
{
  ariac_msgs__msg__CompetitionState__STARTED = 2
};

/// Constant 'ORDER_ANNOUNCEMENTS_DONE'.
enum
{
  ariac_msgs__msg__CompetitionState__ORDER_ANNOUNCEMENTS_DONE = 3
};

/// Constant 'ENDED'.
enum
{
  ariac_msgs__msg__CompetitionState__ENDED = 4
};

// Struct defined in msg/CompetitionState in the package ariac_msgs.
typedef struct ariac_msgs__msg__CompetitionState
{
  uint8_t competition_state;
} ariac_msgs__msg__CompetitionState;

// Struct for a sequence of ariac_msgs__msg__CompetitionState.
typedef struct ariac_msgs__msg__CompetitionState__Sequence
{
  ariac_msgs__msg__CompetitionState * data;
  /// The number of valid items in data
  size_t size;
  /// The number of allocated items in data
  size_t capacity;
} ariac_msgs__msg__CompetitionState__Sequence;

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__COMPETITION_STATE__STRUCT_H_
