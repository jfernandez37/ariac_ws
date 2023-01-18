// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:srv/ScoreTask.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/srv/detail/score_task__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/srv/detail/score_task__functions.h"
#include "ariac_msgs/srv/detail/score_task__struct.h"


// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__ScoreTask_Request__init(message_memory);
}

void ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_fini_function(void * message_memory)
{
  ariac_msgs__srv__ScoreTask_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_member_array[1] = {
  {
    "order_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ScoreTask_Request, order_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_members = {
  "ariac_msgs__srv",  // message namespace
  "ScoreTask_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__ScoreTask_Request),
  ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_member_array,  // message members
  ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_type_support_handle = {
  0,
  &ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Request)() {
  if (!ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_type_support_handle.typesupport_identifier) {
    ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScoreTask_Request__rosidl_typesupport_introspection_c__ScoreTask_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/score_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/score_task__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/score_task__struct.h"


#ifdef __cplusplus
extern "C"
{
#endif

void ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__ScoreTask_Response__init(message_memory);
}

void ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_fini_function(void * message_memory)
{
  ariac_msgs__srv__ScoreTask_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_member_array[1] = {
  {
    "score",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_DOUBLE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__ScoreTask_Response, score),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_members = {
  "ariac_msgs__srv",  // message namespace
  "ScoreTask_Response",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__ScoreTask_Response),
  ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_member_array,  // message members
  ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_type_support_handle = {
  0,
  &ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Response)() {
  if (!ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_type_support_handle.typesupport_identifier) {
    ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &ScoreTask_Response__rosidl_typesupport_introspection_c__ScoreTask_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/score_task__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_members = {
  "ariac_msgs__srv",  // service namespace
  "ScoreTask",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_Request_message_type_support_handle,
  NULL  // response message
  // ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_Response_message_type_support_handle
};

static rosidl_service_type_support_t ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_type_support_handle = {
  0,
  &ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask)() {
  if (!ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, ScoreTask_Response)()->data;
  }

  return &ariac_msgs__srv__detail__score_task__rosidl_typesupport_introspection_c__ScoreTask_service_type_support_handle;
}
