// generated from rosidl_generator_cpp/resource/idl__struct.hpp.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_HPP_
#define MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_HPP_

#include <algorithm>
#include <array>
#include <memory>
#include <string>
#include <vector>

#include "rosidl_runtime_cpp/bounded_vector.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


#ifndef _WIN32
# define DEPRECATED__motor_comm_interfaces__msg__MotorArray __attribute__((deprecated))
#else
# define DEPRECATED__motor_comm_interfaces__msg__MotorArray __declspec(deprecated)
#endif

namespace motor_comm_interfaces
{

namespace msg
{

// message struct
template<class ContainerAllocator>
struct MotorArray_
{
  using Type = MotorArray_<ContainerAllocator>;

  explicit MotorArray_(rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_rows = 0l;
      this->num_cols = 0l;
    }
  }

  explicit MotorArray_(const ContainerAllocator & _alloc, rosidl_runtime_cpp::MessageInitialization _init = rosidl_runtime_cpp::MessageInitialization::ALL)
  {
    (void)_alloc;
    if (rosidl_runtime_cpp::MessageInitialization::ALL == _init ||
      rosidl_runtime_cpp::MessageInitialization::ZERO == _init)
    {
      this->num_rows = 0l;
      this->num_cols = 0l;
    }
  }

  // field types and members
  using _data_type =
    std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>>;
  _data_type data;
  using _num_rows_type =
    int32_t;
  _num_rows_type num_rows;
  using _num_cols_type =
    int32_t;
  _num_cols_type num_cols;

  // setters for named parameter idiom
  Type & set__data(
    const std::vector<int32_t, typename std::allocator_traits<ContainerAllocator>::template rebind_alloc<int32_t>> & _arg)
  {
    this->data = _arg;
    return *this;
  }
  Type & set__num_rows(
    const int32_t & _arg)
  {
    this->num_rows = _arg;
    return *this;
  }
  Type & set__num_cols(
    const int32_t & _arg)
  {
    this->num_cols = _arg;
    return *this;
  }

  // constant declarations

  // pointer types
  using RawPtr =
    motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> *;
  using ConstRawPtr =
    const motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> *;
  using SharedPtr =
    std::shared_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>>;
  using ConstSharedPtr =
    std::shared_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> const>;

  template<typename Deleter = std::default_delete<
      motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>>>
  using UniquePtrWithDeleter =
    std::unique_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>, Deleter>;

  using UniquePtr = UniquePtrWithDeleter<>;

  template<typename Deleter = std::default_delete<
      motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>>>
  using ConstUniquePtrWithDeleter =
    std::unique_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> const, Deleter>;
  using ConstUniquePtr = ConstUniquePtrWithDeleter<>;

  using WeakPtr =
    std::weak_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>>;
  using ConstWeakPtr =
    std::weak_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> const>;

  // pointer types similar to ROS 1, use SharedPtr / ConstSharedPtr instead
  // NOTE: Can't use 'using' here because GNU C++ can't parse attributes properly
  typedef DEPRECATED__motor_comm_interfaces__msg__MotorArray
    std::shared_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator>>
    Ptr;
  typedef DEPRECATED__motor_comm_interfaces__msg__MotorArray
    std::shared_ptr<motor_comm_interfaces::msg::MotorArray_<ContainerAllocator> const>
    ConstPtr;

  // comparison operators
  bool operator==(const MotorArray_ & other) const
  {
    if (this->data != other.data) {
      return false;
    }
    if (this->num_rows != other.num_rows) {
      return false;
    }
    if (this->num_cols != other.num_cols) {
      return false;
    }
    return true;
  }
  bool operator!=(const MotorArray_ & other) const
  {
    return !this->operator==(other);
  }
};  // struct MotorArray_

// alias to use template instance with default allocator
using MotorArray =
  motor_comm_interfaces::msg::MotorArray_<std::allocator<void>>;

// constant definitions

}  // namespace msg

}  // namespace motor_comm_interfaces

#endif  // MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__STRUCT_HPP_
