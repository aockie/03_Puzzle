// Generated by gencpp from file dobot/SetEMotorRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETEMOTORREQUEST_H
#define DOBOT_MESSAGE_SETEMOTORREQUEST_H


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
struct SetEMotorRequest_
{
  typedef SetEMotorRequest_<ContainerAllocator> Type;

  SetEMotorRequest_()
    : index(0)
    , isEnabled(0)
    , speed(0.0)
    , isQueued(false)  {
    }
  SetEMotorRequest_(const ContainerAllocator& _alloc)
    : index(0)
    , isEnabled(0)
    , speed(0.0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _index_type;
  _index_type index;

   typedef uint8_t _isEnabled_type;
  _isEnabled_type isEnabled;

   typedef float _speed_type;
  _speed_type speed;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;




  typedef boost::shared_ptr< ::dobot::SetEMotorRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetEMotorRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEMotorRequest_

typedef ::dobot::SetEMotorRequest_<std::allocator<void> > SetEMotorRequest;

typedef boost::shared_ptr< ::dobot::SetEMotorRequest > SetEMotorRequestPtr;
typedef boost::shared_ptr< ::dobot::SetEMotorRequest const> SetEMotorRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetEMotorRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetEMotorRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetEMotorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetEMotorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEMotorRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEMotorRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEMotorRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEMotorRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetEMotorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "a0b8b69832b27e55b0a75bdb6a06ce14";
  }

  static const char* value(const ::dobot::SetEMotorRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xa0b8b69832b27e55ULL;
  static const uint64_t static_value2 = 0xb0a75bdb6a06ce14ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetEMotorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetEMotorRequest";
  }

  static const char* value(const ::dobot::SetEMotorRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetEMotorRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 index\n\
uint8 isEnabled\n\
float32 speed\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetEMotorRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetEMotorRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.index);
      stream.next(m.isEnabled);
      stream.next(m.speed);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEMotorRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetEMotorRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetEMotorRequest_<ContainerAllocator>& v)
  {
    s << indent << "index: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.index);
    s << indent << "isEnabled: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isEnabled);
    s << indent << "speed: ";
    Printer<float>::stream(s, indent + "  ", v.speed);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETEMOTORREQUEST_H
