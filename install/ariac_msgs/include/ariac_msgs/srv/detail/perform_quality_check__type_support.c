// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "ariac_msgs/srv/detail/perform_quality_check__rosidl_typesupport_introspection_c.h"
#include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
#include "ariac_msgs/srv/detail/perform_quality_check__struct.h"


// Include directives for member types
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__PerformQualityCheck_Request__init(message_memory);
}

void PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_fini_function(void * message_memory)
{
  ariac_msgs__srv__PerformQualityCheck_Request__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_member_array[1] = {
  {
    "task_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_STRING,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Request, task_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_members = {
  "ariac_msgs__srv",  // message namespace
  "PerformQualityCheck_Request",  // message name
  1,  // number of fields
  sizeof(ariac_msgs__srv__PerformQualityCheck_Request),
  PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_member_array,  // message members
  PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_type_support_handle = {
  0,
  &PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Request)() {
  if (!PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_type_support_handle.typesupport_identifier) {
    PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PerformQualityCheck_Request__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

// already included above
// #include <stddef.h>
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "rosidl_typesupport_introspection_c/field_types.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
// already included above
// #include "rosidl_typesupport_introspection_c/message_introspection.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__functions.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__struct.h"


// Include directives for member types
// Member `quadrant1`
// Member `quadrant2`
// Member `quadrant3`
// Member `quadrant4`
#include "ariac_msgs/msg/quality_issue.h"
// Member `quadrant1`
// Member `quadrant2`
// Member `quadrant3`
// Member `quadrant4`
#include "ariac_msgs/msg/detail/quality_issue__rosidl_typesupport_introspection_c.h"

#ifdef __cplusplus
extern "C"
{
#endif

void PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  ariac_msgs__srv__PerformQualityCheck_Response__init(message_memory);
}

void PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_fini_function(void * message_memory)
{
  ariac_msgs__srv__PerformQualityCheck_Response__fini(message_memory);
}

static rosidl_typesupport_introspection_c__MessageMember PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array[7] = {
  {
    "valid_id",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, valid_id),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "all_passed",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, all_passed),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "incorrect_tray",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_BOOLEAN,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, incorrect_tray),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quadrant1",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, quadrant1),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quadrant2",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, quadrant2),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quadrant3",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, quadrant3),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "quadrant4",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_MESSAGE,  // type
    0,  // upper bound of string
    NULL,  // members of sub message (initialized later)
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(ariac_msgs__srv__PerformQualityCheck_Response, quadrant4),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_members = {
  "ariac_msgs__srv",  // message namespace
  "PerformQualityCheck_Response",  // message name
  7,  // number of fields
  sizeof(ariac_msgs__srv__PerformQualityCheck_Response),
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array,  // message members
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_init_function,  // function to initialize message memory (memory has to be allocated)
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_type_support_handle = {
  0,
  &PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Response)() {
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array[3].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, QualityIssue)();
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array[4].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, QualityIssue)();
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array[5].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, QualityIssue)();
  PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_member_array[6].members_ =
    ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, msg, QualityIssue)();
  if (!PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_type_support_handle.typesupport_identifier) {
    PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &PerformQualityCheck_Response__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif

#include "rosidl_runtime_c/service_type_support_struct.h"
// already included above
// #include "ariac_msgs/msg/rosidl_typesupport_introspection_c__visibility_control.h"
// already included above
// #include "ariac_msgs/srv/detail/perform_quality_check__rosidl_typesupport_introspection_c.h"
// already included above
// #include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/service_introspection.h"

// this is intentionally not const to allow initialization later to prevent an initialization race
static rosidl_typesupport_introspection_c__ServiceMembers ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_members = {
  "ariac_msgs__srv",  // service namespace
  "PerformQualityCheck",  // service name
  // these two fields are initialized below on the first access
  NULL,  // request message
  // ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_Request_message_type_support_handle,
  NULL  // response message
  // ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_Response_message_type_support_handle
};

static rosidl_service_type_support_t ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_type_support_handle = {
  0,
  &ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_members,
  get_service_typesupport_handle_function,
};

// Forward declaration of request/response type support functions
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Request)();

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Response)();

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_ariac_msgs
const rosidl_service_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__SERVICE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck)() {
  if (!ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_type_support_handle.typesupport_identifier) {
    ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  rosidl_typesupport_introspection_c__ServiceMembers * service_members =
    (rosidl_typesupport_introspection_c__ServiceMembers *)ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_type_support_handle.data;

  if (!service_members->request_members_) {
    service_members->request_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Request)()->data;
  }
  if (!service_members->response_members_) {
    service_members->response_members_ =
      (const rosidl_typesupport_introspection_c__MessageMembers *)
      ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, ariac_msgs, srv, PerformQualityCheck_Response)()->data;
  }

  return &ariac_msgs__srv__detail__perform_quality_check__rosidl_typesupport_introspection_c__PerformQualityCheck_service_type_support_handle;
}
