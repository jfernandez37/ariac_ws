// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/SubmissionCondition.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/submission_condition__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


// Include directives for member types
// Member `order_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__msg__SubmissionCondition__init(ariac_msgs__msg__SubmissionCondition * msg)
{
  if (!msg) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__init(&msg->order_id)) {
    ariac_msgs__msg__SubmissionCondition__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__msg__SubmissionCondition__fini(ariac_msgs__msg__SubmissionCondition * msg)
{
  if (!msg) {
    return;
  }
  // order_id
  rosidl_runtime_c__String__fini(&msg->order_id);
}

bool
ariac_msgs__msg__SubmissionCondition__are_equal(const ariac_msgs__msg__SubmissionCondition * lhs, const ariac_msgs__msg__SubmissionCondition * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->order_id), &(rhs->order_id)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__SubmissionCondition__copy(
  const ariac_msgs__msg__SubmissionCondition * input,
  ariac_msgs__msg__SubmissionCondition * output)
{
  if (!input || !output) {
    return false;
  }
  // order_id
  if (!rosidl_runtime_c__String__copy(
      &(input->order_id), &(output->order_id)))
  {
    return false;
  }
  return true;
}

ariac_msgs__msg__SubmissionCondition *
ariac_msgs__msg__SubmissionCondition__create()
{
  ariac_msgs__msg__SubmissionCondition * msg = (ariac_msgs__msg__SubmissionCondition *)malloc(sizeof(ariac_msgs__msg__SubmissionCondition));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__SubmissionCondition));
  bool success = ariac_msgs__msg__SubmissionCondition__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__SubmissionCondition__destroy(ariac_msgs__msg__SubmissionCondition * msg)
{
  if (msg) {
    ariac_msgs__msg__SubmissionCondition__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__SubmissionCondition__Sequence__init(ariac_msgs__msg__SubmissionCondition__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__SubmissionCondition * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__SubmissionCondition *)calloc(size, sizeof(ariac_msgs__msg__SubmissionCondition));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__SubmissionCondition__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__SubmissionCondition__fini(&data[i - 1]);
      }
      free(data);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
ariac_msgs__msg__SubmissionCondition__Sequence__fini(ariac_msgs__msg__SubmissionCondition__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__SubmissionCondition__fini(&array->data[i]);
    }
    free(array->data);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

ariac_msgs__msg__SubmissionCondition__Sequence *
ariac_msgs__msg__SubmissionCondition__Sequence__create(size_t size)
{
  ariac_msgs__msg__SubmissionCondition__Sequence * array = (ariac_msgs__msg__SubmissionCondition__Sequence *)malloc(sizeof(ariac_msgs__msg__SubmissionCondition__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__SubmissionCondition__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__SubmissionCondition__Sequence__destroy(ariac_msgs__msg__SubmissionCondition__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__SubmissionCondition__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__SubmissionCondition__Sequence__are_equal(const ariac_msgs__msg__SubmissionCondition__Sequence * lhs, const ariac_msgs__msg__SubmissionCondition__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__SubmissionCondition__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__SubmissionCondition__Sequence__copy(
  const ariac_msgs__msg__SubmissionCondition__Sequence * input,
  ariac_msgs__msg__SubmissionCondition__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__SubmissionCondition);
    ariac_msgs__msg__SubmissionCondition * data =
      (ariac_msgs__msg__SubmissionCondition *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__SubmissionCondition__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__SubmissionCondition__fini(&data[i]);
        }
        free(data);
        return false;
      }
    }
    output->data = data;
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!ariac_msgs__msg__SubmissionCondition__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
