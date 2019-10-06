// Generated by gencpp from file gsdf_msgs/CommContent.msg
// DO NOT EDIT!


#ifndef GSDF_MSGS_MESSAGE_COMMCONTENT_H
#define GSDF_MSGS_MESSAGE_COMMCONTENT_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace gsdf_msgs
{
template <class ContainerAllocator>
struct CommContent_
{
  typedef CommContent_<ContainerAllocator> Type;

  CommContent_()
    : buf()  {
    }
  CommContent_(const ContainerAllocator& _alloc)
    : buf(_alloc)  {
  (void)_alloc;
    }



   typedef std::vector<uint8_t, typename ContainerAllocator::template rebind<uint8_t>::other >  _buf_type;
  _buf_type buf;





  typedef boost::shared_ptr< ::gsdf_msgs::CommContent_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::gsdf_msgs::CommContent_<ContainerAllocator> const> ConstPtr;

}; // struct CommContent_

typedef ::gsdf_msgs::CommContent_<std::allocator<void> > CommContent;

typedef boost::shared_ptr< ::gsdf_msgs::CommContent > CommContentPtr;
typedef boost::shared_ptr< ::gsdf_msgs::CommContent const> CommContentConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::gsdf_msgs::CommContent_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::gsdf_msgs::CommContent_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace gsdf_msgs

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': False, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg'], 'gsdf_msgs': ['/home/plankton/DDP/src/micros_swarm_framework/core/gsdf_msgs/msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::gsdf_msgs::CommContent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::gsdf_msgs::CommContent_<ContainerAllocator> const>
  : FalseType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gsdf_msgs::CommContent_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::gsdf_msgs::CommContent_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gsdf_msgs::CommContent_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::gsdf_msgs::CommContent_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::gsdf_msgs::CommContent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "4f7b5949e76f86d01e96b0e33ba9b5e3";
  }

  static const char* value(const ::gsdf_msgs::CommContent_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x4f7b5949e76f86d0ULL;
  static const uint64_t static_value2 = 0x1e96b0e33ba9b5e3ULL;
};

template<class ContainerAllocator>
struct DataType< ::gsdf_msgs::CommContent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "gsdf_msgs/CommContent";
  }

  static const char* value(const ::gsdf_msgs::CommContent_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::gsdf_msgs::CommContent_<ContainerAllocator> >
{
  static const char* value()
  {
    return "uint8[] buf\n\
";
  }

  static const char* value(const ::gsdf_msgs::CommContent_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::gsdf_msgs::CommContent_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.buf);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct CommContent_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::gsdf_msgs::CommContent_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::gsdf_msgs::CommContent_<ContainerAllocator>& v)
  {
    s << indent << "buf[]" << std::endl;
    for (size_t i = 0; i < v.buf.size(); ++i)
    {
      s << indent << "  buf[" << i << "]: ";
      Printer<uint8_t>::stream(s, indent + "  ", v.buf[i]);
    }
  }
};

} // namespace message_operations
} // namespace ros

#endif // GSDF_MSGS_MESSAGE_COMMCONTENT_H
