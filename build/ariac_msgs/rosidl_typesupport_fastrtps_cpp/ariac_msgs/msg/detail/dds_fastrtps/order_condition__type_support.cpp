// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/OrderCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/order_condition__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/order_condition__struct.hpp"

#include <limits>
#include <stdexcept>
#include <string>
#include "rosidl_typesupport_cpp/message_type_support.hpp"
#include "rosidl_typesupport_fastrtps_cpp/identifier.hpp"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support.h"
#include "rosidl_typesupport_fastrtps_cpp/message_type_support_decl.hpp"
#include "rosidl_typesupport_fastrtps_cpp/wstring_conversion.hpp"
#include "fastcdr/Cdr.h"


// forward declaration of message dependencies and their conversion functions
namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::KittingTask &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::KittingTask &);
size_t get_serialized_size(
  const ariac_msgs::msg::KittingTask &,
  size_t current_alignment);
size_t
max_serialized_size_KittingTask(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::AssemblyTask &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::AssemblyTask &);
size_t get_serialized_size(
  const ariac_msgs::msg::AssemblyTask &,
  size_t current_alignment);
size_t
max_serialized_size_AssemblyTask(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::CombinedTask &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::CombinedTask &);
size_t get_serialized_size(
  const ariac_msgs::msg::CombinedTask &,
  size_t current_alignment);
size_t
max_serialized_size_CombinedTask(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs

namespace ariac_msgs
{
namespace msg
{
namespace typesupport_fastrtps_cpp
{
bool cdr_serialize(
  const ariac_msgs::msg::Condition &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Condition &);
size_t get_serialized_size(
  const ariac_msgs::msg::Condition &,
  size_t current_alignment);
size_t
max_serialized_size_Condition(
  bool & full_bounded,
  size_t current_alignment);
}  // namespace typesupport_fastrtps_cpp
}  // namespace msg
}  // namespace ariac_msgs


namespace ariac_msgs
{

namespace msg
{

namespace typesupport_fastrtps_cpp
{

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::OrderCondition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: id
  cdr << ros_message.id;
  // Member: type
  cdr << ros_message.type;
  // Member: priority
  cdr << (ros_message.priority ? true : false);
  // Member: kitting_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.kitting_task,
    cdr);
  // Member: assembly_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.assembly_task,
    cdr);
  // Member: combined_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.combined_task,
    cdr);
  // Member: condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.condition,
    cdr);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::OrderCondition & ros_message)
{
  // Member: id
  cdr >> ros_message.id;

  // Member: type
  cdr >> ros_message.type;

  // Member: priority
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.priority = tmp ? true : false;
  }

  // Member: kitting_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.kitting_task);

  // Member: assembly_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.assembly_task);

  // Member: combined_task
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.combined_task);

  // Member: condition
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.condition);

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::OrderCondition & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: id
  current_alignment += padding +
    eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
    (ros_message.id.size() + 1);
  // Member: type
  {
    size_t item_size = sizeof(ros_message.type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: priority
  {
    size_t item_size = sizeof(ros_message.priority);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: kitting_task

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.kitting_task, current_alignment);
  // Member: assembly_task

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.assembly_task, current_alignment);
  // Member: combined_task

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.combined_task, current_alignment);
  // Member: condition

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.condition, current_alignment);

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_OrderCondition(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: id
  {
    size_t array_size = 1;

    full_bounded = false;
    for (size_t index = 0; index < array_size; ++index) {
      current_alignment += padding +
        eprosima::fastcdr::Cdr::alignment(current_alignment, padding) +
        1;
    }
  }

  // Member: type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: priority
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: kitting_task
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_KittingTask(
        full_bounded, current_alignment);
    }
  }

  // Member: assembly_task
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_AssemblyTask(
        full_bounded, current_alignment);
    }
  }

  // Member: combined_task
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_CombinedTask(
        full_bounded, current_alignment);
    }
  }

  // Member: condition
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Condition(
        full_bounded, current_alignment);
    }
  }

  return current_alignment - initial_alignment;
}

static bool _OrderCondition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::OrderCondition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _OrderCondition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::OrderCondition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _OrderCondition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::OrderCondition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _OrderCondition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_OrderCondition(full_bounded, 0);
}

static message_type_support_callbacks_t _OrderCondition__callbacks = {
  "ariac_msgs::msg",
  "OrderCondition",
  _OrderCondition__cdr_serialize,
  _OrderCondition__cdr_deserialize,
  _OrderCondition__get_serialized_size,
  _OrderCondition__max_serialized_size
};

static rosidl_message_type_support_t _OrderCondition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_OrderCondition__callbacks,
  get_message_typesupport_handle_function,
};

}  // namespace typesupport_fastrtps_cpp

}  // namespace msg

}  // namespace ariac_msgs

namespace rosidl_typesupport_fastrtps_cpp
{

template<>
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_EXPORT_ariac_msgs
const rosidl_message_type_support_t *
get_message_type_support_handle<ariac_msgs::msg::OrderCondition>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_OrderCondition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, OrderCondition)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_OrderCondition__handle;
}

#ifdef __cplusplus
}
#endif
