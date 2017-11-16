// Generated by gencpp from file dobot/GetDeviceNameResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETDEVICENAMERESPONSE_H
#define DOBOT_MESSAGE_GETDEVICENAMERESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/String.h>

namespace dobot
{
template <class ContainerAllocator>
struct GetDeviceNameResponse_
{
  typedef GetDeviceNameResponse_<ContainerAllocator> Type;

  GetDeviceNameResponse_()
    : result(0)
    , deviceName()  {
    }
  GetDeviceNameResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , deviceName(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef  ::std_msgs::String_<ContainerAllocator>  _deviceName_type;
  _deviceName_type deviceName;




  typedef boost::shared_ptr< ::dobot::GetDeviceNameResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetDeviceNameResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDeviceNameResponse_

typedef ::dobot::GetDeviceNameResponse_<std::allocator<void> > GetDeviceNameResponse;

typedef boost::shared_ptr< ::dobot::GetDeviceNameResponse > GetDeviceNameResponsePtr;
typedef boost::shared_ptr< ::dobot::GetDeviceNameResponse const> GetDeviceNameResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetDeviceNameResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/waida/MyDobot/dobot_ws/src/dobot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetDeviceNameResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceNameResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceNameResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a703c880c9a21252b3f02bc128299ae6";
  }

  static const char* value(const ::dobot::GetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa703c880c9a21252ULL;
  static const uint64_t static_value2 = 0xb3f02bc128299ae6ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetDeviceNameResponse";
  }

  static const char* value(const ::dobot::GetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
std_msgs/String deviceName\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::dobot::GetDeviceNameResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.deviceName);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDeviceNameResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetDeviceNameResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetDeviceNameResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "deviceName: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.deviceName);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETDEVICENAMERESPONSE_H
