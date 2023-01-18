// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/Trial.idl
// generated code does not contain a copyright notice
#define NPY_NO_DEPRECATED_API NPY_1_7_API_VERSION
#include <Python.h>
#include <stdbool.h>
#ifndef _WIN32
# pragma GCC diagnostic push
# pragma GCC diagnostic ignored "-Wunused-function"
#endif
#include "numpy/ndarrayobject.h"
#ifndef _WIN32
# pragma GCC diagnostic pop
#endif
#include "rosidl_runtime_c/visibility_control.h"
#include "ariac_msgs/msg/detail/trial__struct.h"
#include "ariac_msgs/msg/detail/trial__functions.h"

#include "rosidl_runtime_c/primitives_sequence.h"
#include "rosidl_runtime_c/primitives_sequence_functions.h"

// Nested array functions includes
#include "ariac_msgs/msg/detail/challenge__functions.h"
#include "ariac_msgs/msg/detail/order__functions.h"
// end nested array functions include
bool ariac_msgs__msg__order__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__order__convert_to_py(void * raw_ros_message);
bool ariac_msgs__msg__challenge__convert_from_py(PyObject * _pymsg, void * _ros_message);
PyObject * ariac_msgs__msg__challenge__convert_to_py(void * raw_ros_message);

ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__trial__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[28];
    {
      char * class_name = NULL;
      char * module_name = NULL;
      {
        PyObject * class_attr = PyObject_GetAttrString(_pymsg, "__class__");
        if (class_attr) {
          PyObject * name_attr = PyObject_GetAttrString(class_attr, "__name__");
          if (name_attr) {
            class_name = (char *)PyUnicode_1BYTE_DATA(name_attr);
            Py_DECREF(name_attr);
          }
          PyObject * module_attr = PyObject_GetAttrString(class_attr, "__module__");
          if (module_attr) {
            module_name = (char *)PyUnicode_1BYTE_DATA(module_attr);
            Py_DECREF(module_attr);
          }
          Py_DECREF(class_attr);
        }
      }
      if (!class_name || !module_name) {
        return false;
      }
      snprintf(full_classname_dest, sizeof(full_classname_dest), "%s.%s", module_name, class_name);
    }
    assert(strncmp("ariac_msgs.msg._trial.Trial", full_classname_dest, 27) == 0);
  }
  ariac_msgs__msg__Trial * ros_message = _ros_message;
  {  // orders
    PyObject * field = PyObject_GetAttrString(_pymsg, "orders");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'orders'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ariac_msgs__msg__Order__Sequence__init(&(ros_message->orders), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ariac_msgs__msg__Order__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ariac_msgs__msg__Order * dest = ros_message->orders.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ariac_msgs__msg__order__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }
  {  // challenges
    PyObject * field = PyObject_GetAttrString(_pymsg, "challenges");
    if (!field) {
      return false;
    }
    PyObject * seq_field = PySequence_Fast(field, "expected a sequence in 'challenges'");
    if (!seq_field) {
      Py_DECREF(field);
      return false;
    }
    Py_ssize_t size = PySequence_Size(field);
    if (-1 == size) {
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    if (!ariac_msgs__msg__Challenge__Sequence__init(&(ros_message->challenges), size)) {
      PyErr_SetString(PyExc_RuntimeError, "unable to create ariac_msgs__msg__Challenge__Sequence ros_message");
      Py_DECREF(seq_field);
      Py_DECREF(field);
      return false;
    }
    ariac_msgs__msg__Challenge * dest = ros_message->challenges.data;
    for (Py_ssize_t i = 0; i < size; ++i) {
      if (!ariac_msgs__msg__challenge__convert_from_py(PySequence_Fast_GET_ITEM(seq_field, i), &dest[i])) {
        Py_DECREF(seq_field);
        Py_DECREF(field);
        return false;
      }
    }
    Py_DECREF(seq_field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__trial__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of Trial */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._trial");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "Trial");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__Trial * ros_message = (ariac_msgs__msg__Trial *)raw_ros_message;
  {  // orders
    PyObject * field = NULL;
    size_t size = ros_message->orders.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ariac_msgs__msg__Order * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->orders.data[i]);
      PyObject * pyitem = ariac_msgs__msg__order__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "orders", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // challenges
    PyObject * field = NULL;
    size_t size = ros_message->challenges.size;
    field = PyList_New(size);
    if (!field) {
      return NULL;
    }
    ariac_msgs__msg__Challenge * item;
    for (size_t i = 0; i < size; ++i) {
      item = &(ros_message->challenges.data[i]);
      PyObject * pyitem = ariac_msgs__msg__challenge__convert_to_py(item);
      if (!pyitem) {
        Py_DECREF(field);
        return NULL;
      }
      int rc = PyList_SetItem(field, i, pyitem);
      (void)rc;
      assert(rc == 0);
    }
    assert(PySequence_Check(field));
    {
      int rc = PyObject_SetAttrString(_pymessage, "challenges", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}