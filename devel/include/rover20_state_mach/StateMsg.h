// Generated by gencpp from file rover20_state_mach/StateMsg.msg
// DO NOT EDIT!


#ifndef ROVER20_STATE_MACH_MESSAGE_STATEMSG_H
#define ROVER20_STATE_MACH_MESSAGE_STATEMSG_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>

#include <std_msgs/Header.h>

namespace rover20_state_mach
{
template <class ContainerAllocator>
struct StateMsg_
{
  typedef StateMsg_<ContainerAllocator> Type;

  StateMsg_()
    : header()
    , state(0)  {
    }
  StateMsg_(const ContainerAllocator& _alloc)
    : header(_alloc)
    , state(0)  {
  (void)_alloc;
    }



   typedef  ::std_msgs::Header_<ContainerAllocator>  _header_type;
  _header_type header;

   typedef int8_t _state_type;
  _state_type state;



  enum {
    INITIALISE = 0,
    READY = 1,
    REACH_GPS = 2,
    FIND_ARTAG = 3,
    REACH_ARTAG = 4,
    APPROACH = 5,
    PASS_GATE = 6,
    DEINITIALISE = 7,
    ERROR = 8,
  };


  typedef boost::shared_ptr< ::rover20_state_mach::StateMsg_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::rover20_state_mach::StateMsg_<ContainerAllocator> const> ConstPtr;

}; // struct StateMsg_

typedef ::rover20_state_mach::StateMsg_<std::allocator<void> > StateMsg;

typedef boost::shared_ptr< ::rover20_state_mach::StateMsg > StateMsgPtr;
typedef boost::shared_ptr< ::rover20_state_mach::StateMsg const> StateMsgConstPtr;

// constants requiring out of line definition

   

   

   

   

   

   

   

   

   



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::rover20_state_mach::StateMsg_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::rover20_state_mach::StateMsg_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace rover20_state_mach

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': True}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'rover20_state_mach': ['/home/basestation/rover20_ws/src/rover_20/rover20_state_mach/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::rover20_state_mach::StateMsg_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::rover20_state_mach::StateMsg_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::rover20_state_mach::StateMsg_<ContainerAllocator> const>
  : TrueType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "bb3cba5455b3506b2a8435bf0f050c07";
  }

  static const char* value(const ::rover20_state_mach::StateMsg_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0xbb3cba5455b3506bULL;
  static const uint64_t static_value2 = 0x2a8435bf0f050c07ULL;
};

template<class ContainerAllocator>
struct DataType< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "rover20_state_mach/StateMsg";
  }

  static const char* value(const ::rover20_state_mach::StateMsg_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
{
  static const char* value()
  {
    return "std_msgs/Header header\n\
\n\
byte INITIALISE = 0\n\
byte READY = 1\n\
byte REACH_GPS = 2\n\
byte FIND_ARTAG = 3\n\
byte REACH_ARTAG = 4\n\
byte APPROACH = 5\n\
byte PASS_GATE = 6\n\
byte DEINITIALISE = 7\n\
byte ERROR = 8\n\
\n\
\n\
byte state\n\
\n\
================================================================================\n\
MSG: std_msgs/Header\n\
# Standard metadata for higher-level stamped data types.\n\
# This is generally used to communicate timestamped data \n\
# in a particular coordinate frame.\n\
# \n\
# sequence ID: consecutively increasing ID \n\
uint32 seq\n\
#Two-integer timestamp that is expressed as:\n\
# * stamp.sec: seconds (stamp_secs) since epoch (in Python the variable is called 'secs')\n\
# * stamp.nsec: nanoseconds since stamp_secs (in Python the variable is called 'nsecs')\n\
# time-handling sugar is provided by the client library\n\
time stamp\n\
#Frame this data is associated with\n\
# 0: no frame\n\
# 1: global frame\n\
string frame_id\n\
";
  }

  static const char* value(const ::rover20_state_mach::StateMsg_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.header);
      stream.next(m.state);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct StateMsg_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::rover20_state_mach::StateMsg_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::rover20_state_mach::StateMsg_<ContainerAllocator>& v)
  {
    s << indent << "header: ";
    s << std::endl;
    Printer< ::std_msgs::Header_<ContainerAllocator> >::stream(s, indent + "  ", v.header);
    s << indent << "state: ";
    Printer<int8_t>::stream(s, indent + "  ", v.state);
  }
};

} // namespace message_operations
} // namespace ros

#endif // ROVER20_STATE_MACH_MESSAGE_STATEMSG_H
