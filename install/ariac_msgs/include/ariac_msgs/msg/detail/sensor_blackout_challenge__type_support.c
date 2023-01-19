// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:msg/SensorBlackoutChallenge.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__functions.h"
#include "ariac_msgs/msg/detail/sensor_blackout_challenge__struct.h"


// Include directives for member types
// Member `condition`
#include "ariac_msgs/msg/condition.h"
// Member `condition`
#include "ariac_msgs/msg/detail/condition__rosidl_typesupport_introspection_c.h"
// Member `sensors_to_disable`
#include "ariac_msgs/msg/sensors.h"
// Member `sensors_to_disable`
#include "ariac_msgs/msg/detail/sensors__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__msg__SensorBlackoutChallenge__init(message_memory);
}

void SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_fini_function(void * message_memory)
{
  ariac_msgs__msg__SensorBlackoutChallenge__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_member_array[3] = {
  {
    "duration",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__SensorBlackoutChallenge, duration),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "condition",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__SensorBlackoutChallenge, condition),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "sensors_to_disable",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__msg__SensorBlackoutChallenge, sensors_to_disable),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_members = {
  "ariac_msgs__msg",  // message namespace
  "SensorBlackoutChallenge",  // message name
  3,  // number of fields
  sizeof(ariac_msgs__msg__SensorBlackoutChallenge),
  SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_member_array,  // message members
  SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_init_function,  // function to initialize message memory (memory has to be allocated)
  SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_type_support_handle = {
  0,
  &SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, SensorBlackoutChallenge)() {
  SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_member_array[1].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Condition)();
  SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_member_array[2].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, Sensors)();
  if (!SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_type_support_handle.typesupport_identifier) {
    SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &SensorBlackoutChallenge__rosidl_typesupport_introspection_c__SensorBlackoutChallenge_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
