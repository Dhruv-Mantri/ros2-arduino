// generated from rosidl_typesupport_introspection_c/resource/idl__type_support.c.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#include <stddef.h>
#include "motor_comm_interfaces/msg/detail/motor_array__rosidl_typesupport_introspection_c.h"
#include "motor_comm_interfaces/msg/rosidl_typesupport_introspection_c__visibility_control.h"
#include "rosidl_typesupport_introspection_c/field_types.h"
#include "rosidl_typesupport_introspection_c/identifier.h"
#include "rosidl_typesupport_introspection_c/message_introspection.h"
#include "motor_comm_interfaces/msg/detail/motor_array__functions.h"
#include "motor_comm_interfaces/msg/detail/motor_array__struct.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

#ifdef __cplusplus
extern "C"
{
#endif

void motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_init_function(
  void * message_memory, enum rosidl_runtime_c__message_initialization _init)
{
  // TODO(karsten1987): initializers are not yet implemented for typesupport c
  // see https://github.com/ros2/ros2/issues/397
  (void) _init;
  motor_comm_interfaces__msg__MotorArray__init(message_memory);
}

void motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_fini_function(void * message_memory)
{
  motor_comm_interfaces__msg__MotorArray__fini(message_memory);
}

size_t motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__size_function__MotorArray__data(
  const void * untyped_member)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return member->size;
}

const void * motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_const_function__MotorArray__data(
  const void * untyped_member, size_t index)
{
  const rosidl_runtime_c__int32__Sequence * member =
    (const rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void * motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_function__MotorArray__data(
  void * untyped_member, size_t index)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  return &member->data[index];
}

void motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__fetch_function__MotorArray__data(
  const void * untyped_member, size_t index, void * untyped_value)
{
  const int32_t * item =
    ((const int32_t *)
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_const_function__MotorArray__data(untyped_member, index));
  int32_t * value =
    (int32_t *)(untyped_value);
  *value = *item;
}

void motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__assign_function__MotorArray__data(
  void * untyped_member, size_t index, const void * untyped_value)
{
  int32_t * item =
    ((int32_t *)
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_function__MotorArray__data(untyped_member, index));
  const int32_t * value =
    (const int32_t *)(untyped_value);
  *item = *value;
}

bool motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__resize_function__MotorArray__data(
  void * untyped_member, size_t size)
{
  rosidl_runtime_c__int32__Sequence * member =
    (rosidl_runtime_c__int32__Sequence *)(untyped_member);
  rosidl_runtime_c__int32__Sequence__fini(member);
  return rosidl_runtime_c__int32__Sequence__init(member, size);
}

static rosidl_typesupport_introspection_c__MessageMember motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_member_array[3] = {
  {
    "data",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    true,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_comm_interfaces__msg__MotorArray, data),  // bytes offset in struct
    NULL,  // default value
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__size_function__MotorArray__data,  // size() function pointer
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_const_function__MotorArray__data,  // get_const(index) function pointer
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__get_function__MotorArray__data,  // get(index) function pointer
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__fetch_function__MotorArray__data,  // fetch(index, &value) function pointer
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__assign_function__MotorArray__data,  // assign(index, value) function pointer
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__resize_function__MotorArray__data  // resize(index) function pointer
  },
  {
    "num_rows",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_comm_interfaces__msg__MotorArray, num_rows),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  },
  {
    "num_cols",  // name
    rosidl_typesupport_introspection_c__ROS_TYPE_INT32,  // type
    0,  // upper bound of string
    NULL,  // members of sub message
    false,  // is array
    0,  // array size
    false,  // is upper bound
    offsetof(motor_comm_interfaces__msg__MotorArray, num_cols),  // bytes offset in struct
    NULL,  // default value
    NULL,  // size() function pointer
    NULL,  // get_const(index) function pointer
    NULL,  // get(index) function pointer
    NULL,  // fetch(index, &value) function pointer
    NULL,  // assign(index, value) function pointer
    NULL  // resize(index) function pointer
  }
};

static const rosidl_typesupport_introspection_c__MessageMembers motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_members = {
  "motor_comm_interfaces__msg",  // message namespace
  "MotorArray",  // message name
  3,  // number of fields
  sizeof(motor_comm_interfaces__msg__MotorArray),
  motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_member_array,  // message members
  motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_init_function,  // function to initialize message memory (memory has to be allocated)
  motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_fini_function  // function to terminate message instance (will not free memory)
};

// this is not const since it must be initialized on first access
// since C does not allow non-integral compile-time constants
static rosidl_message_type_support_t motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_type_support_handle = {
  0,
  &motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_members,
  get_message_typesupport_handle_function,
};

ROSIDL_TYPESUPPORT_INTROSPECTION_C_EXPORT_motor_comm_interfaces
const rosidl_message_type_support_t *
ROSIDL_TYPESUPPORT_INTERFACE__MESSAGE_SYMBOL_NAME(rosidl_typesupport_introspection_c, motor_comm_interfaces, msg, MotorArray)() {
  if (!motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_type_support_handle.typesupport_identifier) {
    motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_type_support_handle.typesupport_identifier =
      rosidl_typesupport_introspection_c__identifier;
  }
  return &motor_comm_interfaces__msg__MotorArray__rosidl_typesupport_introspection_c__MotorArray_message_type_support_handle;
}
#ifdef __cplusplus
}
#endif
