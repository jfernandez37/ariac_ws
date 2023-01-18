// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:srv/PerformQualityCheck.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/srv/detail/perform_quality_check__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

// Include directives for member types
// Member `task_id`
#include "rosidl_runtime_c/string_functions.h"

bool
ariac_msgs__srv__PerformQualityCheck_Request__init(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  if (!msg) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__init(&msg->task_id)) {
    ariac_msgs__srv__PerformQualityCheck_Request__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__fini(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  if (!msg) {
    return;
  }
  // task_id
  rosidl_runtime_c__String__fini(&msg->task_id);
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__are_equal(const ariac_msgs__srv__PerformQualityCheck_Request * lhs, const ariac_msgs__srv__PerformQualityCheck_Request * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__are_equal(
      &(lhs->task_id), &(rhs->task_id)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__copy(
  const ariac_msgs__srv__PerformQualityCheck_Request * input,
  ariac_msgs__srv__PerformQualityCheck_Request * output)
{
  if (!input || !output) {
    return false;
  }
  // task_id
  if (!rosidl_runtime_c__String__copy(
      &(input->task_id), &(output->task_id)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__PerformQualityCheck_Request *
ariac_msgs__srv__PerformQualityCheck_Request__create()
{
  ariac_msgs__srv__PerformQualityCheck_Request * msg = (ariac_msgs__srv__PerformQualityCheck_Request *)malloc(sizeof(ariac_msgs__srv__PerformQualityCheck_Request));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__PerformQualityCheck_Request));
  bool success = ariac_msgs__srv__PerformQualityCheck_Request__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__destroy(ariac_msgs__srv__PerformQualityCheck_Request * msg)
{
  if (msg) {
    ariac_msgs__srv__PerformQualityCheck_Request__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__init(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__srv__PerformQualityCheck_Request * data = NULL;
  if (size) {
    data = (ariac_msgs__srv__PerformQualityCheck_Request *)calloc(size, sizeof(ariac_msgs__srv__PerformQualityCheck_Request));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__PerformQualityCheck_Request__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__PerformQualityCheck_Request__fini(&data[i - 1]);
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
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__fini(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__srv__PerformQualityCheck_Request__fini(&array->data[i]);
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

ariac_msgs__srv__PerformQualityCheck_Request__Sequence *
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__create(size_t size)
{
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array = (ariac_msgs__srv__PerformQualityCheck_Request__Sequence *)malloc(sizeof(ariac_msgs__srv__PerformQualityCheck_Request__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__PerformQualityCheck_Request__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__destroy(ariac_msgs__srv__PerformQualityCheck_Request__Sequence * array)
{
  if (array) {
    ariac_msgs__srv__PerformQualityCheck_Request__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__are_equal(const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * lhs, const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Request__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Request__Sequence__copy(
  const ariac_msgs__srv__PerformQualityCheck_Request__Sequence * input,
  ariac_msgs__srv__PerformQualityCheck_Request__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__PerformQualityCheck_Request);
    ariac_msgs__srv__PerformQualityCheck_Request * data =
      (ariac_msgs__srv__PerformQualityCheck_Request *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__PerformQualityCheck_Request__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__PerformQualityCheck_Request__fini(&data[i]);
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
    if (!ariac_msgs__srv__PerformQualityCheck_Request__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}


// Include directives for member types
// Member `quadrant1`
// Member `quadrant2`
// Member `quadrant3`
// Member `quadrant4`
#include "ariac_msgs/msg/detail/quality_issue__functions.h"

bool
ariac_msgs__srv__PerformQualityCheck_Response__init(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  if (!msg) {
    return false;
  }
  // valid_id
  // all_passed
  // incorrect_tray
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant1)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant2)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant3)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__init(&msg->quadrant4)) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
    return false;
  }
  return true;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__fini(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  if (!msg) {
    return;
  }
  // valid_id
  // all_passed
  // incorrect_tray
  // quadrant1
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant1);
  // quadrant2
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant2);
  // quadrant3
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant3);
  // quadrant4
  ariac_msgs__msg__QualityIssue__fini(&msg->quadrant4);
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__are_equal(const ariac_msgs__srv__PerformQualityCheck_Response * lhs, const ariac_msgs__srv__PerformQualityCheck_Response * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // valid_id
  if (lhs->valid_id != rhs->valid_id) {
    return false;
  }
  // all_passed
  if (lhs->all_passed != rhs->all_passed) {
    return false;
  }
  // incorrect_tray
  if (lhs->incorrect_tray != rhs->incorrect_tray) {
    return false;
  }
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant1), &(rhs->quadrant1)))
  {
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant2), &(rhs->quadrant2)))
  {
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant3), &(rhs->quadrant3)))
  {
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__are_equal(
      &(lhs->quadrant4), &(rhs->quadrant4)))
  {
    return false;
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__copy(
  const ariac_msgs__srv__PerformQualityCheck_Response * input,
  ariac_msgs__srv__PerformQualityCheck_Response * output)
{
  if (!input || !output) {
    return false;
  }
  // valid_id
  output->valid_id = input->valid_id;
  // all_passed
  output->all_passed = input->all_passed;
  // incorrect_tray
  output->incorrect_tray = input->incorrect_tray;
  // quadrant1
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant1), &(output->quadrant1)))
  {
    return false;
  }
  // quadrant2
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant2), &(output->quadrant2)))
  {
    return false;
  }
  // quadrant3
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant3), &(output->quadrant3)))
  {
    return false;
  }
  // quadrant4
  if (!ariac_msgs__msg__QualityIssue__copy(
      &(input->quadrant4), &(output->quadrant4)))
  {
    return false;
  }
  return true;
}

ariac_msgs__srv__PerformQualityCheck_Response *
ariac_msgs__srv__PerformQualityCheck_Response__create()
{
  ariac_msgs__srv__PerformQualityCheck_Response * msg = (ariac_msgs__srv__PerformQualityCheck_Response *)malloc(sizeof(ariac_msgs__srv__PerformQualityCheck_Response));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__srv__PerformQualityCheck_Response));
  bool success = ariac_msgs__srv__PerformQualityCheck_Response__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__destroy(ariac_msgs__srv__PerformQualityCheck_Response * msg)
{
  if (msg) {
    ariac_msgs__srv__PerformQualityCheck_Response__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__init(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__srv__PerformQualityCheck_Response * data = NULL;
  if (size) {
    data = (ariac_msgs__srv__PerformQualityCheck_Response *)calloc(size, sizeof(ariac_msgs__srv__PerformQualityCheck_Response));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__srv__PerformQualityCheck_Response__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__srv__PerformQualityCheck_Response__fini(&data[i - 1]);
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
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__fini(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__srv__PerformQualityCheck_Response__fini(&array->data[i]);
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

ariac_msgs__srv__PerformQualityCheck_Response__Sequence *
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__create(size_t size)
{
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array = (ariac_msgs__srv__PerformQualityCheck_Response__Sequence *)malloc(sizeof(ariac_msgs__srv__PerformQualityCheck_Response__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__srv__PerformQualityCheck_Response__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__destroy(ariac_msgs__srv__PerformQualityCheck_Response__Sequence * array)
{
  if (array) {
    ariac_msgs__srv__PerformQualityCheck_Response__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__are_equal(const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * lhs, const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__srv__PerformQualityCheck_Response__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__srv__PerformQualityCheck_Response__Sequence__copy(
  const ariac_msgs__srv__PerformQualityCheck_Response__Sequence * input,
  ariac_msgs__srv__PerformQualityCheck_Response__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__srv__PerformQualityCheck_Response);
    ariac_msgs__srv__PerformQualityCheck_Response * data =
      (ariac_msgs__srv__PerformQualityCheck_Response *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__srv__PerformQualityCheck_Response__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__srv__PerformQualityCheck_Response__fini(&data[i]);
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
    if (!ariac_msgs__srv__PerformQualityCheck_Response__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
