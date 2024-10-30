// generated from rosidl_generator_cpp/resource/idl__traits.hpp.em
// with input from motor_comm_interfaces:msg/MotorArray.idl
// generated code does not contain a copyright notice

#ifndef MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__TRAITS_HPP_
#define MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__TRAITS_HPP_

#include <stdint.h>

#include <sstream>
#include <string>
#include <type_traits>

#include "motor_comm_interfaces/msg/detail/motor_array__struct.hpp"
#include "rosidl_runtime_cpp/traits.hpp"

namespace motor_comm_interfaces
{

namespace msg
{

inline void to_flow_style_yaml(
  const MotorArray & msg,
  std::ostream & out)
{
  out << "{";
  // member: data
  {
    if (msg.data.size() == 0) {
      out << "data: []";
    } else {
      out << "data: [";
      size_t pending_items = msg.data.size();
      for (auto item : msg.data) {
        rosidl_generator_traits::value_to_yaml(item, out);
        if (--pending_items > 0) {
          out << ", ";
        }
      }
      out << "]";
    }
    out << ", ";
  }

  // member: num_rows
  {
    out << "num_rows: ";
    rosidl_generator_traits::value_to_yaml(msg.num_rows, out);
    out << ", ";
  }

  // member: num_cols
  {
    out << "num_cols: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cols, out);
  }
  out << "}";
}  // NOLINT(readability/fn_size)

inline void to_block_style_yaml(
  const MotorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  // member: data
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    if (msg.data.size() == 0) {
      out << "data: []\n";
    } else {
      out << "data:\n";
      for (auto item : msg.data) {
        if (indentation > 0) {
          out << std::string(indentation, ' ');
        }
        out << "- ";
        rosidl_generator_traits::value_to_yaml(item, out);
        out << "\n";
      }
    }
  }

  // member: num_rows
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_rows: ";
    rosidl_generator_traits::value_to_yaml(msg.num_rows, out);
    out << "\n";
  }

  // member: num_cols
  {
    if (indentation > 0) {
      out << std::string(indentation, ' ');
    }
    out << "num_cols: ";
    rosidl_generator_traits::value_to_yaml(msg.num_cols, out);
    out << "\n";
  }
}  // NOLINT(readability/fn_size)

inline std::string to_yaml(const MotorArray & msg, bool use_flow_style = false)
{
  std::ostringstream out;
  if (use_flow_style) {
    to_flow_style_yaml(msg, out);
  } else {
    to_block_style_yaml(msg, out);
  }
  return out.str();
}

}  // namespace msg

}  // namespace motor_comm_interfaces

namespace rosidl_generator_traits
{

[[deprecated("use motor_comm_interfaces::msg::to_block_style_yaml() instead")]]
inline void to_yaml(
  const motor_comm_interfaces::msg::MotorArray & msg,
  std::ostream & out, size_t indentation = 0)
{
  motor_comm_interfaces::msg::to_block_style_yaml(msg, out, indentation);
}

[[deprecated("use motor_comm_interfaces::msg::to_yaml() instead")]]
inline std::string to_yaml(const motor_comm_interfaces::msg::MotorArray & msg)
{
  return motor_comm_interfaces::msg::to_yaml(msg);
}

template<>
inline const char * data_type<motor_comm_interfaces::msg::MotorArray>()
{
  return "motor_comm_interfaces::msg::MotorArray";
}

template<>
inline const char * name<motor_comm_interfaces::msg::MotorArray>()
{
  return "motor_comm_interfaces/msg/MotorArray";
}

template<>
struct has_fixed_size<motor_comm_interfaces::msg::MotorArray>
  : std::integral_constant<bool, false> {};

template<>
struct has_bounded_size<motor_comm_interfaces::msg::MotorArray>
  : std::integral_constant<bool, false> {};

template<>
struct is_message<motor_comm_interfaces::msg::MotorArray>
  : std::true_type {};

}  // namespace rosidl_generator_traits

#endif  // MOTOR_COMM_INTERFACES__MSG__DETAIL__MOTOR_ARRAY__TRAITS_HPP_
