// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ariac_msgs:msg/TimeCondition.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__FUNCTIONS_H_
#define ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ariac_msgs/msg/detail/time_condition__struct.h"

/// Initialize msg/TimeCondition message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ariac_msgs__msg__TimeCondition
 * )) before or use
 * ariac_msgs__msg__TimeCondition__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__init(ariac_msgs__msg__TimeCondition * msg);

/// Finalize msg/TimeCondition message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__TimeCondition__fini(ariac_msgs__msg__TimeCondition * msg);

/// Create msg/TimeCondition message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ariac_msgs__msg__TimeCondition__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__TimeCondition *
ariac_msgs__msg__TimeCondition__create();

/// Destroy msg/TimeCondition message.
/**
 * It calls
 * ariac_msgs__msg__TimeCondition__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__TimeCondition__destroy(ariac_msgs__msg__TimeCondition * msg);

/// Check for msg/TimeCondition message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__are_equal(const ariac_msgs__msg__TimeCondition * lhs, const ariac_msgs__msg__TimeCondition * rhs);

/// Copy a msg/TimeCondition message.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source message pointer.
 * \param[out] output The target message pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer is null
 *   or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__copy(
  const ariac_msgs__msg__TimeCondition * input,
  ariac_msgs__msg__TimeCondition * output);

/// Initialize array of msg/TimeCondition messages.
/**
 * It allocates the memory for the number of elements and calls
 * ariac_msgs__msg__TimeCondition__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__Sequence__init(ariac_msgs__msg__TimeCondition__Sequence * array, size_t size);

/// Finalize array of msg/TimeCondition messages.
/**
 * It calls
 * ariac_msgs__msg__TimeCondition__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__TimeCondition__Sequence__fini(ariac_msgs__msg__TimeCondition__Sequence * array);

/// Create array of msg/TimeCondition messages.
/**
 * It allocates the memory for the array and calls
 * ariac_msgs__msg__TimeCondition__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__TimeCondition__Sequence *
ariac_msgs__msg__TimeCondition__Sequence__create(size_t size);

/// Destroy array of msg/TimeCondition messages.
/**
 * It calls
 * ariac_msgs__msg__TimeCondition__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__TimeCondition__Sequence__destroy(ariac_msgs__msg__TimeCondition__Sequence * array);

/// Check for msg/TimeCondition message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__Sequence__are_equal(const ariac_msgs__msg__TimeCondition__Sequence * lhs, const ariac_msgs__msg__TimeCondition__Sequence * rhs);

/// Copy an array of msg/TimeCondition messages.
/**
 * This functions performs a deep copy, as opposed to the shallow copy that
 * plain assignment yields.
 *
 * \param[in] input The source array pointer.
 * \param[out] output The target array pointer, which must
 *   have been initialized before calling this function.
 * \return true if successful, or false if either pointer
 *   is null or memory allocation fails.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__TimeCondition__Sequence__copy(
  const ariac_msgs__msg__TimeCondition__Sequence * input,
  ariac_msgs__msg__TimeCondition__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__TIME_CONDITION__FUNCTIONS_H_
