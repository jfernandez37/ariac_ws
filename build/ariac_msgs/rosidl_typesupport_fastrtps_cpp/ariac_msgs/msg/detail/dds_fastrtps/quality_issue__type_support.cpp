// generated from rosidl_typesupport_fastrtps_cpp/resource/idl__type_support.cpp.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/quality_issue__rosidl_typesupport_fastrtps_cpp.hpp"
#include "ariac_msgs/msg/detail/quality_issue__struct.hpp"

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

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_serialize(
  const ariac_msgs::msg::QualityIssue & ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  // Member: all_passed
  cdr << (ros_message.all_passed ? true : false);
  // Member: missing_part
  cdr << (ros_message.missing_part ? true : false);
  // Member: flipped_part
  cdr << (ros_message.flipped_part ? true : false);
  // Member: faulty_part
  cdr << (ros_message.faulty_part ? true : false);
  // Member: incorrect_part_type
  cdr << (ros_message.incorrect_part_type ? true : false);
  // Member: incorrect_part_color
  cdr << (ros_message.incorrect_part_color ? true : false);
  return true;
}

bool
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  ariac_msgs::msg::QualityIssue & ros_message)
{
  // Member: all_passed
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.all_passed = tmp ? true : false;
  }

  // Member: missing_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.missing_part = tmp ? true : false;
  }

  // Member: flipped_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.flipped_part = tmp ? true : false;
  }

  // Member: faulty_part
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.faulty_part = tmp ? true : false;
  }

  // Member: incorrect_part_type
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.incorrect_part_type = tmp ? true : false;
  }

  // Member: incorrect_part_color
  {
    uint8_t tmp;
    cdr >> tmp;
    ros_message.incorrect_part_color = tmp ? true : false;
  }

  return true;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
get_serialized_size(
  const ariac_msgs::msg::QualityIssue & ros_message,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;

  // Member: all_passed
  {
    size_t item_size = sizeof(ros_message.all_passed);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: missing_part
  {
    size_t item_size = sizeof(ros_message.missing_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: flipped_part
  {
    size_t item_size = sizeof(ros_message.flipped_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: faulty_part
  {
    size_t item_size = sizeof(ros_message.faulty_part);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: incorrect_part_type
  {
    size_t item_size = sizeof(ros_message.incorrect_part_type);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }
  // Member: incorrect_part_color
  {
    size_t item_size = sizeof(ros_message.incorrect_part_color);
    current_alignment += item_size +
      eprosima::fastcdr::Cdr::alignment(current_alignment, item_size);
  }

  return current_alignment - initial_alignment;
}

size_t
ROSIDL_TYPESUPPORT_FASTRTPS_CPP_PUBLIC_ariac_msgs
max_serialized_size_QualityIssue(
  bool & full_bounded,
  size_t current_alignment)
{
  size_t initial_alignment = current_alignment;

  const size_t padding = 4;
  const size_t wchar_size = 4;
  (void)padding;
  (void)wchar_size;
  (void)full_bounded;


  // Member: all_passed
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: missing_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: flipped_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: faulty_part
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: incorrect_part_type
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  // Member: incorrect_part_color
  {
    size_t array_size = 1;

    current_alignment += array_size * sizeof(uint8_t);
  }

  return current_alignment - initial_alignment;
}

static bool _QualityIssue__cdr_serialize(
  const void * untyped_ros_message,
  eprosima::fastcdr::Cdr & cdr)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::QualityIssue *>(
    untyped_ros_message);
  return cdr_serialize(*typed_message, cdr);
}

static bool _QualityIssue__cdr_deserialize(
  eprosima::fastcdr::Cdr & cdr,
  void * untyped_ros_message)
{
  auto typed_message =
    static_cast<ariac_msgs::msg::QualityIssue *>(
    untyped_ros_message);
  return cdr_deserialize(cdr, *typed_message);
}

static uint32_t _QualityIssue__get_serialized_size(
  const void * untyped_ros_message)
{
  auto typed_message =
    static_cast<const ariac_msgs::msg::QualityIssue *>(
    untyped_ros_message);
  return static_cast<uint32_t>(get_serialized_size(*typed_message, 0));
}

static size_t _QualityIssue__max_serialized_size(bool & full_bounded)
{
  return max_serialized_size_QualityIssue(full_bounded, 0);
}

static message_type_support_callbacks_t _QualityIssue__callbacks = {
  "ariac_msgs::msg",
  "QualityIssue",
  _QualityIssue__cdr_serialize,
  _QualityIssue__cdr_deserialize,
  _QualityIssue__get_serialized_size,
  _QualityIssue__max_serialized_size
};

static rosidl_message_type_support_t _QualityIssue__handle = {
  rosidl_typesupport_fastrtps_cpp::typesupport_identifier,
  &_QualityIssue__callbacks,
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
get_message_type_support_handle<ariac_msgs::msg::QualityIssue>()
{
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_QualityIssue__handle;
}

}  // namespace rosidl_typesupport_fastrtps_cpp

#ifdef __cplusplus
extern "C"
{
#endif

const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_fastrtps_cpp, ariac_msgs, msg, QualityIssue)() {
  return &ariac_msgs::msg::typesupport_fastrtps_cpp::_QualityIssue__handle;
}

#ifdef __cplusplus
}
#endif
