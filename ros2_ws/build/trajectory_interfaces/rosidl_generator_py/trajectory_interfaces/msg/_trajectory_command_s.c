// generated from rosidl_generator_py/resource/_idl_support.c.em
// with input from trajectory_interfaces:msg/TrajectoryCommand.idl
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
#include "trajectory_interfaces/msg/detail/trajectory_command__struct.h"
#include "trajectory_interfaces/msg/detail/trajectory_command__functions.h"


ROSIDL_GENERATOR_C_EXPORT
bool trajectory_interfaces__msg__trajectory_command__convert_from_py(PyObject * _pymsg, void * _ros_message)
{
  // check that the passed message is of the expected Python class
  {
    char full_classname_dest[64];
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
    assert(strncmp("trajectory_interfaces.msg._trajectory_command.TrajectoryCommand", full_classname_dest, 63) == 0);
  }
  trajectory_interfaces__msg__TrajectoryCommand * ros_message = _ros_message;
  {  // linear_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "linear_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->linear_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // angular_speed
    PyObject * field = PyObject_GetAttrString(_pymsg, "angular_speed");
    if (!field) {
      return false;
    }
    assert(PyFloat_Check(field));
    ros_message->angular_speed = (float)PyFloat_AS_DOUBLE(field);
    Py_DECREF(field);
  }
  {  // avoid_obstacle
    PyObject * field = PyObject_GetAttrString(_pymsg, "avoid_obstacle");
    if (!field) {
      return false;
    }
    assert(PyBool_Check(field));
    ros_message->avoid_obstacle = (Py_True == field);
    Py_DECREF(field);
  }

  return true;
}

ROSIDL_GENERATOR_C_EXPORT
PyObject * trajectory_interfaces__msg__trajectory_command__convert_to_py(void * raw_ros_message)
{
  /* NOTE(esteve): Call constructor of TrajectoryCommand */
  PyObject * _pymessage = NULL;
  {
    PyObject * pymessage_module = PyImport_ImportModule("trajectory_interfaces.msg._trajectory_command");
    assert(pymessage_module);
    PyObject * pymessage_class = PyObject_GetAttrString(pymessage_module, "TrajectoryCommand");
    assert(pymessage_class);
    Py_DECREF(pymessage_module);
    _pymessage = PyObject_CallObject(pymessage_class, NULL);
    Py_DECREF(pymessage_class);
    if (!_pymessage) {
      return NULL;
    }
  }
  trajectory_interfaces__msg__TrajectoryCommand * ros_message = (trajectory_interfaces__msg__TrajectoryCommand *)raw_ros_message;
  {  // linear_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->linear_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "linear_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // angular_speed
    PyObject * field = NULL;
    field = PyFloat_FromDouble(ros_message->angular_speed);
    {
      int rc = PyObject_SetAttrString(_pymessage, "angular_speed", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }
  {  // avoid_obstacle
    PyObject * field = NULL;
    field = PyBool_FromLong(ros_message->avoid_obstacle ? 1 : 0);
    {
      int rc = PyObject_SetAttrString(_pymessage, "avoid_obstacle", field);
      Py_DECREF(field);
      if (rc) {
        return NULL;
      }
    }
  }

  // ownership of _pymessage is transferred to the caller
  return _pymessage;
}
