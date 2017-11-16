// Generated by gencpp from file dobot/GetPTPJumpParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETPTPJUMPPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETPTPJUMPPARAMSRESPONSE_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace dobot
{
template <class ContainerAllocator>
struct GetPTPJumpParamsResponse_
{
  typedef GetPTPJumpParamsResponse_<ContainerAllocator> Type;

  GetPTPJumpParamsResponse_()
    : result(0)
    , jumpHeight(0.0)
    , zLimit(0.0)  {
    }
  GetPTPJumpParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , jumpHeight(0.0)
    , zLimit(0.0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _jumpHeight_type;
  _jumpHeight_type jumpHeight;

   typedef float _zLimit_type;
  _zLimit_type zLimit;




  typedef boost::shared_ptr< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetPTPJumpParamsResponse_

typedef ::dobot::GetPTPJumpParamsResponse_<std::allocator<void> > GetPTPJumpParamsResponse;

typedef boost::shared_ptr< ::dobot::GetPTPJumpParamsResponse > GetPTPJumpParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetPTPJumpParamsResponse const> GetPTPJumpParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace dobot

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'dobot': ['/home/waida/MyDobot/dobot_ws/src/dobot/msg'], 'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "c789ca108051f9c81e48ec0ed44d3ab7";
  }

  static const char* value(const ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xc789ca108051f9c8ULL;
  static const uint64_t static_value2 = 0x1e48ec0ed44d3ab7ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetPTPJumpParamsResponse";
  }

  static const char* value(const ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
float32 jumpHeight\n\
float32 zLimit\n\
\n\
";
  }

  static const char* value(const ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.jumpHeight);
      stream.next(m.zLimit);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetPTPJumpParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetPTPJumpParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "jumpHeight: ";
    Printer<float>::stream(s, indent + "  ", v.jumpHeight);
    s << indent << "zLimit: ";
    Printer<float>::stream(s, indent + "  ", v.zLimit);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETPTPJUMPPARAMSRESPONSE_H
