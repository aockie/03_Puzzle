// Generated by gencpp from file dobot/SetJOGCommonParamsRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETJOGCOMMONPARAMSREQUEST_H
#define DOBOT_MESSAGE_SETJOGCOMMONPARAMSREQUEST_H


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
struct SetJOGCommonParamsRequest_
{
  typedef SetJOGCommonParamsRequest_<ContainerAllocator> Type;

  SetJOGCommonParamsRequest_()
    : velocityRatio(0.0)
    , accelerationRatio(0.0)
    , isQueued(false)  {
    }
  SetJOGCommonParamsRequest_(const ContainerAllocator& _alloc)
    : velocityRatio(0.0)
    , accelerationRatio(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef float _velocityRatio_type;
  _velocityRatio_type velocityRatio;

   typedef float _accelerationRatio_type;
  _accelerationRatio_type accelerationRatio;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;




  typedef boost::shared_ptr< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetJOGCommonParamsRequest_

typedef ::dobot::SetJOGCommonParamsRequest_<std::allocator<void> > SetJOGCommonParamsRequest;

typedef boost::shared_ptr< ::dobot::SetJOGCommonParamsRequest > SetJOGCommonParamsRequestPtr;
typedef boost::shared_ptr< ::dobot::SetJOGCommonParamsRequest const> SetJOGCommonParamsRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "9e4dfb14c361852ecf51f33906a36bdb";
  }

  static const char* value(const ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x9e4dfb14c361852eULL;
  static const uint64_t static_value2 = 0xcf51f33906a36bdbULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetJOGCommonParamsRequest";
  }

  static const char* value(const ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "float32 velocityRatio\n\
float32 accelerationRatio\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.velocityRatio);
      stream.next(m.accelerationRatio);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetJOGCommonParamsRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetJOGCommonParamsRequest_<ContainerAllocator>& v)
  {
    s << indent << "velocityRatio: ";
    Printer<float>::stream(s, indent + "  ", v.velocityRatio);
    s << indent << "accelerationRatio: ";
    Printer<float>::stream(s, indent + "  ", v.accelerationRatio);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETJOGCOMMONPARAMSREQUEST_H
