// Generated by gencpp from file dobot/GetDeviceSNResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETDEVICESNRESPONSE_H
#define DOBOT_MESSAGE_GETDEVICESNRESPONSE_H


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
struct GetDeviceSNResponse_
{
  typedef GetDeviceSNResponse_<ContainerAllocator> Type;

  GetDeviceSNResponse_()
    : result(0)
    , deviceSN()  {
    }
  GetDeviceSNResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , deviceSN(_alloc)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef  ::std_msgs::String_<ContainerAllocator>  _deviceSN_type;
  _deviceSN_type deviceSN;




  typedef boost::shared_ptr< ::dobot::GetDeviceSNResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetDeviceSNResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetDeviceSNResponse_

typedef ::dobot::GetDeviceSNResponse_<std::allocator<void> > GetDeviceSNResponse;

typedef boost::shared_ptr< ::dobot::GetDeviceSNResponse > GetDeviceSNResponsePtr;
typedef boost::shared_ptr< ::dobot::GetDeviceSNResponse const> GetDeviceSNResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetDeviceSNResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetDeviceSNResponse_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetDeviceSNResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetDeviceSNResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "e0f9486ebe760ac95403f1a902002a01";
  }

  static const char* value(const ::dobot::GetDeviceSNResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xe0f9486ebe760ac9ULL;
  static const uint64_t static_value2 = 0x5403f1a902002a01ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetDeviceSNResponse";
  }

  static const char* value(const ::dobot::GetDeviceSNResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
std_msgs/String deviceSN\n\
\n\
\n\
================================================================================\n\
MSG: std_msgs/String\n\
string data\n\
";
  }

  static const char* value(const ::dobot::GetDeviceSNResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.deviceSN);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetDeviceSNResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetDeviceSNResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetDeviceSNResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "deviceSN: ";
    s << std::endl;
    Printer< ::std_msgs::String_<ContainerAllocator> >::stream(s, indent + "  ", v.deviceSN);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETDEVICESNRESPONSE_H
