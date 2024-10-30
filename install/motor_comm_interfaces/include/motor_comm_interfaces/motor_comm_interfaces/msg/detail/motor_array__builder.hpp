// generated from rosidl_generator_cpp/resource/idl__builder.hpp.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__BUILDER_HPP_
#define MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__BUILDER_HPP_

#include <algorithm>
#include <utility>

#include "motor_comm_interfaces/msg/detail/motor_array__struct.hpp"
#include "rosidl_runtime_cpp/message_initialization.hpp"


namespace motor_comm_interfaces
{

namespace msg
{

namespace builder
{

class Init_MotorArray_num_cols
{
public:
  explicit Init_MotorArray_num_cols(::motor_comm_interfaces::msg::MotorArray & msg)
  : msg_(msg)
  {}
  ::motor_comm_interfaces::msg::MotorArray num_cols(::motor_comm_interfaces::msg::MotorArray::_num_cols_type arg)
  {
    msg_.num_cols = std::move(arg);
    return std::move(msg_);
  }

private:
  ::motor_comm_interfaces::msg::MotorArray msg_;
};

class Init_MotorArray_num_rows
{
public:
  explicit Init_MotorArray_num_rows(::motor_comm_interfaces::msg::MotorArray & msg)
  : msg_(msg)
  {}
  Init_MotorArray_num_cols num_rows(::motor_comm_interfaces::msg::MotorArray::_num_rows_type arg)
  {
    msg_.num_rows = std::move(arg);
    return Init_MotorArray_num_cols(msg_);
  }

private:
  ::motor_comm_interfaces::msg::MotorArray msg_;
};

class Init_MotorArray_data
{
public:
  Init_MotorArray_data()
  : msg_(::rosidl_runtime_cpp::MessageInitialization::SKIP)
  {}
  Init_MotorArray_num_rows data(::motor_comm_interfaces::msg::MotorArray::_data_type arg)
  {
    msg_.data = std::move(arg);
    return Init_MotorArray_num_rows(msg_);
  }

private:
  ::motor_comm_interfaces::msg::MotorArray msg_;
};

}  // namespace builder

}  // namespace msg

template<typename MessageType>
auto build();

template<>
inline
auto build<::motor_comm_interfaces::msg::MotorArray>()
{
  return motor_comm_interfaces::msg::builder::Init_MotorArray_data();
}

}  // namespace motor_comm_interfaces

#endif  // MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__BUILDER_HPP_
