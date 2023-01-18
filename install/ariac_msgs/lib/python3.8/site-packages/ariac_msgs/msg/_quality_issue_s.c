// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from ariac_msgs:msg/QualityIssue.idl
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
#include "ariac_msgs/msg/detail/quality_issue__struct.h"
#include "ariac_msgs/msg/detail/quality_issue__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool ariac_msgs__msg__quality_issue__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[43];
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
    assert(strncmp("ariac_msgs.msg._quality_issue.QualityIssue", full_classname_dest, 42) == 0);
  }
  ariac_msgs__msg__QualityIssue * ros_message = _ros_message;
  {  // all_passed
    PyObject * field = PyObject_GetAttrString(_pymsg, "all_passed");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->all_passed = (Py_True == field);
    Py_DECREF(field);
  }
  {  // missing_part
    PyObject * field = PyObject_GetAttrString(_pymsg, "missing_part");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->missing_part = (Py_True == field);
    Py_DECREF(field);
  }
  {  // flipped_part
    PyObject * field = PyObject_GetAttrString(_pymsg, "flipped_part");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->flipped_part = (Py_True == field);
    Py_DECREF(field);
  }
  {  // faulty_part
    PyObject * field = PyObject_GetAttrString(_pymsg, "faulty_part");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->faulty_part = (Py_True == field);
    Py_DECREF(field);
  }
  {  // incorrect_part_type
    PyObject * field = PyObject_GetAttrString(_pymsg, "incorrect_part_type");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->incorrect_part_type = (Py_True == field);
    Py_DECREF(field);
  }
  {  // incorrect_part_color
    PyObject * field = PyObject_GetAttrString(_pymsg, "incorrect_part_color");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->incorrect_part_color = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * ariac_msgs__msg__quality_issue__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of QualityIssue */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("ariac_msgs.msg._quality_issue");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "QualityIssue");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  ariac_msgs__msg__QualityIssue * ros_message = (ariac_msgs__msg__QualityIssue *)raw_ros_message;
  {  // all_passed
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->all_passed ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "all_passed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // missing_part
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->missing_part ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "missing_part", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // flipped_part
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->flipped_part ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "flipped_part", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // faulty_part
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->faulty_part ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "faulty_part", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // incorrect_part_type
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->incorrect_part_type ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "incorrect_part_type", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // incorrect_part_color
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->incorrect_part_color ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "incorrect_part_color", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
