// Generated by gencpp from file dobot/SetEndEffectorGripperRequest.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETENDEFFECTORGRIPPERREQUEST_H
#define DOBOT_MESSAGE_SETENDEFFECTORGRIPPERREQUEST_H


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
struct SetEndEffectorGripperRequest_
{
  typedef SetEndEffectorGripperRequest_<ContainerAllocator> Type;

  SetEndEffectorGripperRequest_()
    : enableCtrl(0)
    , grip(0)
    , isQueued(false)  {
    }
  SetEndEffectorGripperRequest_(const ContainerAllocator& _alloc)
    : enableCtrl(0)
    , grip(0)
    , isQueued(false)  {
  (void)_alloc;
    }



   typedef uint8_t _enableCtrl_type;
  _enableCtrl_type enableCtrl;

   typedef uint8_t _grip_type;
  _grip_type grip;

   typedef uint8_t _isQueued_type;
  _isQueued_type isQueued;




  typedef boost::shared_ptr< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> const> ConstPtr;

}; // struct SetEndEffectorGripperRequest_

typedef ::dobot::SetEndEffectorGripperRequest_<std::allocator<void> > SetEndEffectorGripperRequest;

typedef boost::shared_ptr< ::dobot::SetEndEffectorGripperRequest > SetEndEffectorGripperRequestPtr;
typedef boost::shared_ptr< ::dobot::SetEndEffectorGripperRequest const> SetEndEffectorGripperRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "b6ca07854565dceb3e99c8dd8a2201e3";
  }

  static const char* value(const ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xb6ca07854565dcebULL;
  static const uint64_t static_value2 = 0x3e99c8dd8a2201e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetEndEffectorGripperRequest";
  }

  static const char* value(const ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8 enableCtrl\n\
uint8 grip\n\
bool isQueued\n\
";
  }

  static const char* value(const ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.enableCtrl);
      stream.next(m.grip);
      stream.next(m.isQueued);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetEndEffectorGripperRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetEndEffectorGripperRequest_<ContainerAllocator>& v)
  {
    s << indent << "enableCtrl: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.enableCtrl);
    s << indent << "grip: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.grip);
    s << indent << "isQueued: ";
    Printer<uint8_t>::stream(s, indent + "  ", v.isQueued);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETENDEFFECTORGRIPPERREQUEST_H
