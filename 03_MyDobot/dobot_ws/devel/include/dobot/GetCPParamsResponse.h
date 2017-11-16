// Generated by gencpp from file dobot/GetCPParamsResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_GETCPPARAMSRESPONSE_H
#define DOBOT_MESSAGE_GETCPPARAMSRESPONSE_H


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
struct GetCPParamsResponse_
{
  typedef GetCPParamsResponse_<ContainerAllocator> Type;

  GetCPParamsResponse_()
    : result(0)
    , planAcc(0.0)
    , junctionVel(0.0)
    , acc(0.0)
    , realTimeTrack(0)  {
    }
  GetCPParamsResponse_(const ContainerAllocator& _alloc)
    : result(0)
    , planAcc(0.0)
    , junctionVel(0.0)
    , acc(0.0)
    , realTimeTrack(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;

   typedef float _planAcc_type;
  _planAcc_type planAcc;

   typedef float _junctionVel_type;
  _junctionVel_type junctionVel;

   typedef float _acc_type;
  _acc_type acc;

   typedef uint8_t _realTimeTrack_type;
  _realTimeTrack_type realTimeTrack;




  typedef boost::shared_ptr< ::dobot::GetCPParamsResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::GetCPParamsResponse_<ContainerAllocator> const> ConstPtr;

}; // struct GetCPParamsResponse_

typedef ::dobot::GetCPParamsResponse_<std::allocator<void> > GetCPParamsResponse;

typedef boost::shared_ptr< ::dobot::GetCPParamsResponse > GetCPParamsResponsePtr;
typedef boost::shared_ptr< ::dobot::GetCPParamsResponse const> GetCPParamsResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::GetCPParamsResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::GetCPParamsResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::GetCPParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::GetCPParamsResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::GetCPParamsResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "85dff81a44afbb98d15e48705b4ea806";
  }

  static const char* value(const ::dobot::GetCPParamsResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x85dff81a44afbb98ULL;
  static const uint64_t static_value2 = 0xd15e48705b4ea806ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/GetCPParamsResponse";
  }

  static const char* value(const ::dobot::GetCPParamsResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
float32 planAcc\n\
float32 junctionVel\n\
float32 acc\n\
uint8 realTimeTrack\n\
\n\
";
  }

  static const char* value(const ::dobot::GetCPParamsResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
      stream.next(m.planAcc);
      stream.next(m.junctionVel);
      stream.next(m.acc);
      stream.next(m.realTimeTrack);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct GetCPParamsResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::GetCPParamsResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::GetCPParamsResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
    s << indent << "planAcc: ";
    Printer<float>::stream(s, indent + "  ", v.planAcc);
    s << indent << "junctionVel: ";
    Printer<float>::stream(s, indent + "  ", v.junctionVel);
    s << indent << "acc: ";
    Printer<float>::stream(s, indent + "  ", v.acc);
    s << indent << "realTimeTrack: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.realTimeTrack);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_GETCPPARAMSRESPONSE_H
