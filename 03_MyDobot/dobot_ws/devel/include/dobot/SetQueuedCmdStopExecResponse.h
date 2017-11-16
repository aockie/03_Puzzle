// Generated by gencpp from file dobot/SetQueuedCmdStopExecResponse.msg
// DO NOT EDIT!


#ifndef DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECRESPONSE_H
#define DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECRESPONSE_H


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
struct SetQueuedCmdStopExecResponse_
{
  typedef SetQueuedCmdStopExecResponse_<ContainerAllocator> Type;

  SetQueuedCmdStopExecResponse_()
    : result(0)  {
    }
  SetQueuedCmdStopExecResponse_(const ContainerAllocator& _alloc)
    : result(0)  {
  (void)_alloc;
    }



   typedef int32_t _result_type;
  _result_type result;




  typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> const> ConstPtr;

}; // struct SetQueuedCmdStopExecResponse_

typedef ::dobot::SetQueuedCmdStopExecResponse_<std::allocator<void> > SetQueuedCmdStopExecResponse;

typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecResponse > SetQueuedCmdStopExecResponsePtr;
typedef boost::shared_ptr< ::dobot::SetQueuedCmdStopExecResponse const> SetQueuedCmdStopExecResponseConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >::stream(s, "", v);
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
struct IsFixedSize< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "034a8e20d6a306665e3a5b340fab3f09";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x034a8e20d6a30666ULL;
  static const uint64_t static_value2 = 0x5e3a5b340fab3f09ULL;
};

template<class ContainerAllocator>
struct DataType< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "dobot/SetQueuedCmdStopExecResponse";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int32 result\n\
\n\
";
  }

  static const char* value(const ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.result);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct SetQueuedCmdStopExecResponse_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::dobot::SetQueuedCmdStopExecResponse_<ContainerAllocator>& v)
  {
    s << indent << "result: ";
    Printer<int32_t>::stream(s, indent + "  ", v.result);
  }
};

} // namespace message_operations
} // namespace ros

#endif // DOBOT_MESSAGE_SETQUEUEDCMDSTOPEXECRESPONSE_H
