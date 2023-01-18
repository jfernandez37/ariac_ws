// generated from rosidl_generator_c/resource/idl__functions.h.em
// with input from ariac_msgs:msg/CombinedTask.idl
// generated code does not contain a copyright notice

#ifndef ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__FUNCTIONS_H_
#define ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__FUNCTIONS_H_

#ifdef __cplusplus
extern "C"
{
#endif

#include <stdbool.h>
#include <stdlib.h>

#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/rosidl_generator_c__visibility_control.h"

#include "ariac_msgs/msg/detail/combined_task__struct.h"

/// Initialize msg/CombinedTask message.
/**
 * If the init function is called twice for the same message without
 * calling fini inbetween previously allocated memory will be leaked.
 * \param[in,out] msg The previously allocated message pointer.
 * Fields without a default value will not be initialized by this function.
 * You might want to call memset(msg, 0, sizeof(
 * ariac_msgs__msg__CombinedTask
 * )) before or use
 * ariac_msgs__msg__CombinedTask__create()
 * to allocate and initialize the message.
 * \return true if initialization was successful, otherwise false
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__CombinedTask__init(ariac_msgs__msg__CombinedTask * msg);

/// Finalize msg/CombinedTask message.
/**
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__CombinedTask__fini(ariac_msgs__msg__CombinedTask * msg);

/// Create msg/CombinedTask message.
/**
 * It allocates the memory for the message, sets the memory to zero, and
 * calls
 * ariac_msgs__msg__CombinedTask__init().
 * \return The pointer to the initialized message if successful,
 * otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__CombinedTask *
ariac_msgs__msg__CombinedTask__create();

/// Destroy msg/CombinedTask message.
/**
 * It calls
 * ariac_msgs__msg__CombinedTask__fini()
 * and frees the memory of the message.
 * \param[in,out] msg The allocated message pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__CombinedTask__destroy(ariac_msgs__msg__CombinedTask * msg);

/// Check for msg/CombinedTask message equality.
/**
 * \param[in] lhs The message on the left hand size of the equality operator.
 * \param[in] rhs The message on the right hand size of the equality operator.
 * \return true if messages are equal, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__CombinedTask__are_equal(const ariac_msgs__msg__CombinedTask * lhs, const ariac_msgs__msg__CombinedTask * rhs);

/// Copy a msg/CombinedTask message.
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
ariac_msgs__msg__CombinedTask__copy(
  const ariac_msgs__msg__CombinedTask * input,
  ariac_msgs__msg__CombinedTask * output);

/// Initialize array of msg/CombinedTask messages.
/**
 * It allocates the memory for the number of elements and calls
 * ariac_msgs__msg__CombinedTask__init()
 * for each element of the array.
 * \param[in,out] array The allocated array pointer.
 * \param[in] size The size / capacity of the array.
 * \return true if initialization was successful, otherwise false
 * If the array pointer is valid and the size is zero it is guaranteed
 # to return true.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__CombinedTask__Sequence__init(ariac_msgs__msg__CombinedTask__Sequence * array, size_t size);

/// Finalize array of msg/CombinedTask messages.
/**
 * It calls
 * ariac_msgs__msg__CombinedTask__fini()
 * for each element of the array and frees the memory for the number of
 * elements.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__CombinedTask__Sequence__fini(ariac_msgs__msg__CombinedTask__Sequence * array);

/// Create array of msg/CombinedTask messages.
/**
 * It allocates the memory for the array and calls
 * ariac_msgs__msg__CombinedTask__Sequence__init().
 * \param[in] size The size / capacity of the array.
 * \return The pointer to the initialized array if successful, otherwise NULL
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
ariac_msgs__msg__CombinedTask__Sequence *
ariac_msgs__msg__CombinedTask__Sequence__create(size_t size);

/// Destroy array of msg/CombinedTask messages.
/**
 * It calls
 * ariac_msgs__msg__CombinedTask__Sequence__fini()
 * on the array,
 * and frees the memory of the array.
 * \param[in,out] array The initialized array pointer.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
void
ariac_msgs__msg__CombinedTask__Sequence__destroy(ariac_msgs__msg__CombinedTask__Sequence * array);

/// Check for msg/CombinedTask message array equality.
/**
 * \param[in] lhs The message array on the left hand size of the equality operator.
 * \param[in] rhs The message array on the right hand size of the equality operator.
 * \return true if message arrays are equal in size and content, otherwise false.
 */
ROSIDL_GENERATOR_C_PUBLIC_ariac_msgs
bool
ariac_msgs__msg__CombinedTask__Sequence__are_equal(const ariac_msgs__msg__CombinedTask__Sequence * lhs, const ariac_msgs__msg__CombinedTask__Sequence * rhs);

/// Copy an array of msg/CombinedTask messages.
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
ariac_msgs__msg__CombinedTask__Sequence__copy(
  const ariac_msgs__msg__CombinedTask__Sequence * input,
  ariac_msgs__msg__CombinedTask__Sequence * output);

#ifdef __cplusplus
}
#endif

#endif  // ARIAC_MSGS__MSG__DETAIL__COMBINED_TASK__FUNCTIONS_H_
