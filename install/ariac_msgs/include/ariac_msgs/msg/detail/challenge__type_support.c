// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/Challenge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/challenge__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/challenge__functions.h"
#include "ariac_msgs/msg/detail/challenge__struct.h"


// Include directives for member types
// Member `type`
#include "rosidl_runtime_c/string_functions.h"
// Member `faulty_part_challenge`
#include "ariac_msgs/msg/faulty_part_challenge.h"
// Member `faulty_part_challenge`
#include "ariac_msgs/msg/detail/faulty_part_challenge__rosidl_typesupport_introspection_c.h"
// Member `dropped_part_challenge`
#include "ariac_msgs/msg/dropped_part_challenge.h"
// Member `dropped_part_challenge`
#include "ariac_msgs/msg/detail/dropped_part_challenge__rosidl_typesupport_introspection_c.h"
// Member `sensor_blackout_challenge`
#include "ariac_msgs/msg/sensor_blackout_challenge.h"
// Member `sensor_blackout_challenge`
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__rosidl_typesupport_introspection_c.h"
// Member `robot_malfunction_challenge`
#include "ariac_msgs/msg/robot_malfunction_challenge.h"
// Member `robot_malfunction_challenge`
#include "ariac_msgs/msg/detail/robot_malfunction_challenge__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void Challenge__rosidl_typesupport_introspection_c__Challenge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__Challenge__init(message_memory);
}

void Challenge__rosidl_typesupport_introspection_c__Challenge_fini_function(void * message_memory)
{
  ariac_msgs__msg__Challenge__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array[5] = {
  {
    "type",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Challenge, type),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "faulty_part_challenge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Challenge, faulty_part_challenge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "dropped_part_challenge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Challenge, dropped_part_challenge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensor_blackout_challenge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Challenge, sensor_blackout_challenge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "robot_malfunction_challenge",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__Challenge, robot_malfunction_challenge),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers Challenge__rosidl_typesupport_introspection_c__Challenge_message_members = {
  "ariac_msgs__msg",  // message namespace
  "Challenge",  // message name
  5,  // number of fields
  sizeof(ariac_msgs__msg__Challenge),
  Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array,  // message members
  Challenge__rosidl_typesupport_introspection_c__Challenge_init_function,  // function to initialize message memory (memory has to be allocated)
  Challenge__rosidl_typesupport_introspection_c__Challenge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t Challenge__rosidl_typesupport_introspection_c__Challenge_message_type_support_handle = {
  0,
  &Challenge__rosidl_typesupport_introspection_c__Challenge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Challenge)() {
  Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, FaultyPartChallenge)();
  Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, DroppedPartChallenge)();
  Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, SensorBlackoutChallenge)();
  Challenge__rosidl_typesupport_introspection_c__Challenge_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, RobotMalfunctionChallenge)();
  if (!Challenge__rosidl_typesupport_introspection_c__Challenge_message_type_support_handle.typesupport_identifier) {
    Challenge__rosidl_typesupport_introspection_c__Challenge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &Challenge__rosidl_typesupport_introspection_c__Challenge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
