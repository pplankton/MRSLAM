// Generated by gencpp from file app_loader/RTDestroyRequest.msg
// DO NOT EDIT!


#ifndef APP_LOADER_MESSAGE_RTDESTROYREQUEST_H
#define APP_LOADER_MESSAGE_RTDESTROYREQUEST_H


#include <string>
#include <vector>
#include <map>

#include <ros/types.h>
#include <ros/serialization.h>
#include <ros/builtin_message_traits.h>
#include <ros/message_operations.h>


namespace app_loader
{
template <class ContainerAllocator>
struct RTDestroyRequest_
{
  typedef RTDestroyRequest_<ContainerAllocator> Type;

  RTDestroyRequest_()
    : code(0)  {
    }
  RTDestroyRequest_(const ContainerAllocator& _alloc)
    : code(0)  {
  (void)_alloc;
    }



   typedef int8_t _code_type;
  _code_type code;





  typedef boost::shared_ptr< ::app_loader::RTDestroyRequest_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::app_loader::RTDestroyRequest_<ContainerAllocator> const> ConstPtr;

}; // struct RTDestroyRequest_

typedef ::app_loader::RTDestroyRequest_<std::allocator<void> > RTDestroyRequest;

typedef boost::shared_ptr< ::app_loader::RTDestroyRequest > RTDestroyRequestPtr;
typedef boost::shared_ptr< ::app_loader::RTDestroyRequest const> RTDestroyRequestConstPtr;

// constants requiring out of line definition



template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const ::app_loader::RTDestroyRequest_<ContainerAllocator> & v)
{
ros::message_operations::Printer< ::app_loader::RTDestroyRequest_<ContainerAllocator> >::stream(s, "", v);
return s;
}

} // namespace app_loader

namespace ros
{
namespace message_traits
{



// BOOLTRAITS {'IsFixedSize': True, 'IsMessage': True, 'HasHeader': False}
// {'std_msgs': ['/opt/ros/kinetic/share/std_msgs/cmake/../msg']}

// !!!!!!!!!!! ['__class__', '__delattr__', '__dict__', '__doc__', '__eq__', '__format__', '__getattribute__', '__hash__', '__init__', '__module__', '__ne__', '__new__', '__reduce__', '__reduce_ex__', '__repr__', '__setattr__', '__sizeof__', '__str__', '__subclasshook__', '__weakref__', '_parsed_fields', 'constants', 'fields', 'full_name', 'has_header', 'header_present', 'names', 'package', 'parsed_fields', 'short_name', 'text', 'types']




template <class ContainerAllocator>
struct IsFixedSize< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsFixedSize< ::app_loader::RTDestroyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
  : TrueType
  { };

template <class ContainerAllocator>
struct IsMessage< ::app_loader::RTDestroyRequest_<ContainerAllocator> const>
  : TrueType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
  : FalseType
  { };

template <class ContainerAllocator>
struct HasHeader< ::app_loader::RTDestroyRequest_<ContainerAllocator> const>
  : FalseType
  { };


template<class ContainerAllocator>
struct MD5Sum< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "95cfa23476470f3d4705c11337b96909";
  }

  static const char* value(const ::app_loader::RTDestroyRequest_<ContainerAllocator>&) { return value(); }
  static const uint64_t static_value1 = 0x95cfa23476470f3dULL;
  static const uint64_t static_value2 = 0x4705c11337b96909ULL;
};

template<class ContainerAllocator>
struct DataType< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "app_loader/RTDestroyRequest";
  }

  static const char* value(const ::app_loader::RTDestroyRequest_<ContainerAllocator>&) { return value(); }
};

template<class ContainerAllocator>
struct Definition< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
{
  static const char* value()
  {
    return "int8 code\n\
";
  }

  static const char* value(const ::app_loader::RTDestroyRequest_<ContainerAllocator>&) { return value(); }
};

} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

  template<class ContainerAllocator> struct Serializer< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
  {
    template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
    {
      stream.next(m.code);
    }

    ROS_DECLARE_ALLINONE_SERIALIZER
  }; // struct RTDestroyRequest_

} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::app_loader::RTDestroyRequest_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const ::app_loader::RTDestroyRequest_<ContainerAllocator>& v)
  {
    s << indent << "code: ";
    Printer<int8_t>::stream(s, indent + "  ", v.code);
  }
};

} // namespace message_operations
} // namespace ros

#endif // APP_LOADER_MESSAGE_RTDESTROYREQUEST_H
