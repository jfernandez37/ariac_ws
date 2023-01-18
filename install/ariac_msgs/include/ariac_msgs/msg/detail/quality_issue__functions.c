// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from ariac_msgs:msg/QualityIssue.idl
// generated code does not contain a copyright notice
#include "ariac_msgs/msg/detail/quality_issue__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>


bool
ariac_msgs__msg__QualityIssue__init(ariac_msgs__msg__QualityIssue * msg)
{
  if (!msg) {
    return false;
  }
  // all_passed
  // missing_part
  // flipped_part
  // faulty_part
  // incorrect_part_type
  // incorrect_part_color
  return true;
}

void
ariac_msgs__msg__QualityIssue__fini(ariac_msgs__msg__QualityIssue * msg)
{
  if (!msg) {
    return;
  }
  // all_passed
  // missing_part
  // flipped_part
  // faulty_part
  // incorrect_part_type
  // incorrect_part_color
}

bool
ariac_msgs__msg__QualityIssue__are_equal(const ariac_msgs__msg__QualityIssue * lhs, const ariac_msgs__msg__QualityIssue * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // all_passed
  if (lhs->all_passed != rhs->all_passed) {
    return false;
  }
  // missing_part
  if (lhs->missing_part != rhs->missing_part) {
    return false;
  }
  // flipped_part
  if (lhs->flipped_part != rhs->flipped_part) {
    return false;
  }
  // faulty_part
  if (lhs->faulty_part != rhs->faulty_part) {
    return false;
  }
  // incorrect_part_type
  if (lhs->incorrect_part_type != rhs->incorrect_part_type) {
    return false;
  }
  // incorrect_part_color
  if (lhs->incorrect_part_color != rhs->incorrect_part_color) {
    return false;
  }
  return true;
}

bool
ariac_msgs__msg__QualityIssue__copy(
  const ariac_msgs__msg__QualityIssue * input,
  ariac_msgs__msg__QualityIssue * output)
{
  if (!input || !output) {
    return false;
  }
  // all_passed
  output->all_passed = input->all_passed;
  // missing_part
  output->missing_part = input->missing_part;
  // flipped_part
  output->flipped_part = input->flipped_part;
  // faulty_part
  output->faulty_part = input->faulty_part;
  // incorrect_part_type
  output->incorrect_part_type = input->incorrect_part_type;
  // incorrect_part_color
  output->incorrect_part_color = input->incorrect_part_color;
  return true;
}

ariac_msgs__msg__QualityIssue *
ariac_msgs__msg__QualityIssue__create()
{
  ariac_msgs__msg__QualityIssue * msg = (ariac_msgs__msg__QualityIssue *)malloc(sizeof(ariac_msgs__msg__QualityIssue));
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(ariac_msgs__msg__QualityIssue));
  bool success = ariac_msgs__msg__QualityIssue__init(msg);
  if (!success) {
    free(msg);
    return NULL;
  }
  return msg;
}

void
ariac_msgs__msg__QualityIssue__destroy(ariac_msgs__msg__QualityIssue * msg)
{
  if (msg) {
    ariac_msgs__msg__QualityIssue__fini(msg);
  }
  free(msg);
}


bool
ariac_msgs__msg__QualityIssue__Sequence__init(ariac_msgs__msg__QualityIssue__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  ariac_msgs__msg__QualityIssue * data = NULL;
  if (size) {
    data = (ariac_msgs__msg__QualityIssue *)calloc(size, sizeof(ariac_msgs__msg__QualityIssue));
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = ariac_msgs__msg__QualityIssue__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        ariac_msgs__msg__QualityIssue__fini(&data[i - 1]);
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
ariac_msgs__msg__QualityIssue__Sequence__fini(ariac_msgs__msg__QualityIssue__Sequence * array)
{
  if (!array) {
    return;
  }
  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      ariac_msgs__msg__QualityIssue__fini(&array->data[i]);
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

ariac_msgs__msg__QualityIssue__Sequence *
ariac_msgs__msg__QualityIssue__Sequence__create(size_t size)
{
  ariac_msgs__msg__QualityIssue__Sequence * array = (ariac_msgs__msg__QualityIssue__Sequence *)malloc(sizeof(ariac_msgs__msg__QualityIssue__Sequence));
  if (!array) {
    return NULL;
  }
  bool success = ariac_msgs__msg__QualityIssue__Sequence__init(array, size);
  if (!success) {
    free(array);
    return NULL;
  }
  return array;
}

void
ariac_msgs__msg__QualityIssue__Sequence__destroy(ariac_msgs__msg__QualityIssue__Sequence * array)
{
  if (array) {
    ariac_msgs__msg__QualityIssue__Sequence__fini(array);
  }
  free(array);
}

bool
ariac_msgs__msg__QualityIssue__Sequence__are_equal(const ariac_msgs__msg__QualityIssue__Sequence * lhs, const ariac_msgs__msg__QualityIssue__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!ariac_msgs__msg__QualityIssue__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
ariac_msgs__msg__QualityIssue__Sequence__copy(
  const ariac_msgs__msg__QualityIssue__Sequence * input,
  ariac_msgs__msg__QualityIssue__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(ariac_msgs__msg__QualityIssue);
    ariac_msgs__msg__QualityIssue * data =
      (ariac_msgs__msg__QualityIssue *)realloc(output->data, allocation_size);
    if (!data) {
      return false;
    }
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!ariac_msgs__msg__QualityIssue__init(&data[i])) {
        /* free currently allocated and return false */
        for (; i-- > output->capacity; ) {
          ariac_msgs__msg__QualityIssue__fini(&data[i]);
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
    if (!ariac_msgs__msg__QualityIssue__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
