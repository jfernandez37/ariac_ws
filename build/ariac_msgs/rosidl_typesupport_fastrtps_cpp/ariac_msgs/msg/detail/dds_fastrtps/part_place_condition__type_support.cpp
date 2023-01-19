// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/PartPlaceCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/part_place_condition__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/part_place_condition__struct.hpp"

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
  const ariac_msgs::msg::Part &,
  eprosima::fastcdr::Cdr &);
bool cdr_deserialize(
  eprosima::fastcdr::Cdr &,
  ariac_msgs::msg::Part &);
size_t get_serialized_size(
  const ariac_msgs::msg::Part &,
  size_t current_alignment);
size_t
max_serialized_size_Part(
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
  const ariac_msgs::msg::PartPlaceCondition & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: part
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_serialize(
    ros_message.part,
    cdr);
  // Member: agv
  cdr << ros_message.agv;
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::PartPlaceCondition & ros_message)
{
  // Member: part
  ariac_msgs::msg::typesupport_fastrtps_cpp::cdr_deserialize(
    cdr, ros_message.part);

  // Member: agv
  cdr >> ros_message.agv;

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::PartPlaceCondition & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: part

  current_alignment +=
    ariac_msgs::msg::typesupport_fastrtps_cpp::get_serialized_size(
    ros_message.part, current_alignment);
  // Member: agv
  {
    size_t item_size = sizeof(ros_message.agv);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_PartPlaceCondition(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: part
  {
    size_t array_size = 1;


    for (size_t index = 0; index < array_size; ++index) {
      current_alignment +=
        ariac_msgs::msg::typesupport_fastrtps_cpp::max_serialized_size_Part(
        full_bounded, current_alignment);
    }
  }

  // Member: agv
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _PartPlaceCondition__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::PartPlaceCondition *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _PartPlaceCondition__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::PartPlaceCondition *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _PartPlaceCondition__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::PartPlaceCondition *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _PartPlaceCondition__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_PartPlaceCondition(full_bounded, 0);
}

static message_type_support_callbacks_t _PartPlaceCondition__callbacks = {
  "ariac_msgs::msg",
  "PartPlaceCondition",
  _PartPlaceCondition__cdr_serialize,
  _PartPlaceCondition__cdr_deserialize,
  _PartPlaceCondition__get_serialized_size,
  _PartPlaceCondition__max_serialized_size
};

static rosidl_message_type_support_t _PartPlaceCondition__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_PartPlaceCondition__callbacks,
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
get_message_type_support_handle<ariac_msgs::msg::PartPlaceCondition>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_PartPlaceCondition__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, PartPlaceCondition)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_PartPlaceCondition__handle;
}

#ifdef __cplusplus
}
#endif
