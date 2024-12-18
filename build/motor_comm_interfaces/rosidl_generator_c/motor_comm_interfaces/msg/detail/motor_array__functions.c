// generated from rosidl_generator_c/resource/idl__functions.c.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice
#include "motor_comm_interfaces/msg/detail/motor_array__functions.h"

#include <assert.h>
#include <stdbool.h>
#include <stdlib.h>
#include <string.h>

#include "rcutils/allocator.h"


// Include directives for member types
// Member `data`
#include "rosidl_runtime_c/primitives_sequence_functions.h"

bool
motor_comm_interfaces__msg__MotorArray__init(motor_comm_interfaces__msg__MotorArray * msg)
{
  if (!msg) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__init(&msg->data, 0)) {
    motor_comm_interfaces__msg__MotorArray__fini(msg);
    return false;
  }
  // num_rows
  // num_cols
  return true;
}

void
motor_comm_interfaces__msg__MotorArray__fini(motor_comm_interfaces__msg__MotorArray * msg)
{
  if (!msg) {
    return;
  }
  // data
  rosidl_runtime_c__int32__Sequence__fini(&msg->data);
  // num_rows
  // num_cols
}

bool
motor_comm_interfaces__msg__MotorArray__are_equal(const motor_comm_interfaces__msg__MotorArray * lhs, const motor_comm_interfaces__msg__MotorArray * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__are_equal(
      &(lhs->data), &(rhs->data)))
  {
    return false;
  }
  // num_rows
  if (lhs->num_rows != rhs->num_rows) {
    return false;
  }
  // num_cols
  if (lhs->num_cols != rhs->num_cols) {
    return false;
  }
  return true;
}

bool
motor_comm_interfaces__msg__MotorArray__copy(
  const motor_comm_interfaces__msg__MotorArray * input,
  motor_comm_interfaces__msg__MotorArray * output)
{
  if (!input || !output) {
    return false;
  }
  // data
  if (!rosidl_runtime_c__int32__Sequence__copy(
      &(input->data), &(output->data)))
  {
    return false;
  }
  // num_rows
  output->num_rows = input->num_rows;
  // num_cols
  output->num_cols = input->num_cols;
  return true;
}

motor_comm_interfaces__msg__MotorArray *
motor_comm_interfaces__msg__MotorArray__create()
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_comm_interfaces__msg__MotorArray * msg = (motor_comm_interfaces__msg__MotorArray *)allocator.allocate(sizeof(motor_comm_interfaces__msg__MotorArray), allocator.state);
  if (!msg) {
    return NULL;
  }
  memset(msg, 0, sizeof(motor_comm_interfaces__msg__MotorArray));
  bool success = motor_comm_interfaces__msg__MotorArray__init(msg);
  if (!success) {
    allocator.deallocate(msg, allocator.state);
    return NULL;
  }
  return msg;
}

void
motor_comm_interfaces__msg__MotorArray__destroy(motor_comm_interfaces__msg__MotorArray * msg)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (msg) {
    motor_comm_interfaces__msg__MotorArray__fini(msg);
  }
  allocator.deallocate(msg, allocator.state);
}


bool
motor_comm_interfaces__msg__MotorArray__Sequence__init(motor_comm_interfaces__msg__MotorArray__Sequence * array, size_t size)
{
  if (!array) {
    return false;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_comm_interfaces__msg__MotorArray * data = NULL;

  if (size) {
    data = (motor_comm_interfaces__msg__MotorArray *)allocator.zero_allocate(size, sizeof(motor_comm_interfaces__msg__MotorArray), allocator.state);
    if (!data) {
      return false;
    }
    // initialize all array elements
    size_t i;
    for (i = 0; i < size; ++i) {
      bool success = motor_comm_interfaces__msg__MotorArray__init(&data[i]);
      if (!success) {
        break;
      }
    }
    if (i < size) {
      // if initialization failed finalize the already initialized array elements
      for (; i > 0; --i) {
        motor_comm_interfaces__msg__MotorArray__fini(&data[i - 1]);
      }
      allocator.deallocate(data, allocator.state);
      return false;
    }
  }
  array->data = data;
  array->size = size;
  array->capacity = size;
  return true;
}

void
motor_comm_interfaces__msg__MotorArray__Sequence__fini(motor_comm_interfaces__msg__MotorArray__Sequence * array)
{
  if (!array) {
    return;
  }
  rcutils_allocator_t allocator = rcutils_get_default_allocator();

  if (array->data) {
    // ensure that data and capacity values are consistent
    assert(array->capacity > 0);
    // finalize all array elements
    for (size_t i = 0; i < array->capacity; ++i) {
      motor_comm_interfaces__msg__MotorArray__fini(&array->data[i]);
    }
    allocator.deallocate(array->data, allocator.state);
    array->data = NULL;
    array->size = 0;
    array->capacity = 0;
  } else {
    // ensure that data, size, and capacity values are consistent
    assert(0 == array->size);
    assert(0 == array->capacity);
  }
}

motor_comm_interfaces__msg__MotorArray__Sequence *
motor_comm_interfaces__msg__MotorArray__Sequence__create(size_t size)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  motor_comm_interfaces__msg__MotorArray__Sequence * array = (motor_comm_interfaces__msg__MotorArray__Sequence *)allocator.allocate(sizeof(motor_comm_interfaces__msg__MotorArray__Sequence), allocator.state);
  if (!array) {
    return NULL;
  }
  bool success = motor_comm_interfaces__msg__MotorArray__Sequence__init(array, size);
  if (!success) {
    allocator.deallocate(array, allocator.state);
    return NULL;
  }
  return array;
}

void
motor_comm_interfaces__msg__MotorArray__Sequence__destroy(motor_comm_interfaces__msg__MotorArray__Sequence * array)
{
  rcutils_allocator_t allocator = rcutils_get_default_allocator();
  if (array) {
    motor_comm_interfaces__msg__MotorArray__Sequence__fini(array);
  }
  allocator.deallocate(array, allocator.state);
}

bool
motor_comm_interfaces__msg__MotorArray__Sequence__are_equal(const motor_comm_interfaces__msg__MotorArray__Sequence * lhs, const motor_comm_interfaces__msg__MotorArray__Sequence * rhs)
{
  if (!lhs || !rhs) {
    return false;
  }
  if (lhs->size != rhs->size) {
    return false;
  }
  for (size_t i = 0; i < lhs->size; ++i) {
    if (!motor_comm_interfaces__msg__MotorArray__are_equal(&(lhs->data[i]), &(rhs->data[i]))) {
      return false;
    }
  }
  return true;
}

bool
motor_comm_interfaces__msg__MotorArray__Sequence__copy(
  const motor_comm_interfaces__msg__MotorArray__Sequence * input,
  motor_comm_interfaces__msg__MotorArray__Sequence * output)
{
  if (!input || !output) {
    return false;
  }
  if (output->capacity < input->size) {
    const size_t allocation_size =
      input->size * sizeof(motor_comm_interfaces__msg__MotorArray);
    rcutils_allocator_t allocator = rcutils_get_default_allocator();
    motor_comm_interfaces__msg__MotorArray * data =
      (motor_comm_interfaces__msg__MotorArray *)allocator.reallocate(
      output->data, allocation_size, allocator.state);
    if (!data) {
      return false;
    }
    // If reallocation succeeded, memory may or may not have been moved
    // to fulfill the allocation request, invalidating output->data.
    output->data = data;
    for (size_t i = output->capacity; i < input->size; ++i) {
      if (!motor_comm_interfaces__msg__MotorArray__init(&output->data[i])) {
        // If initialization of any new item fails, roll back
        // all previously initialized items. Existing items
        // in output are to be left unmodified.
        for (; i-- > output->capacity; ) {
          motor_comm_interfaces__msg__MotorArray__fini(&output->data[i]);
        }
        return false;
      }
    }
    output->capacity = input->size;
  }
  output->size = input->size;
  for (size_t i = 0; i < input->size; ++i) {
    if (!motor_comm_interfaces__msg__MotorArray__copy(
        &(input->data[i]), &(output->data[i])))
    {
      return false;
    }
  }
  return true;
}
