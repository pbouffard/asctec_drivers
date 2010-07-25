/* Auto-generated by genmsg_cpp for file /home/lucid/ros/stacks/ccny-ros-pkg/asctec_drivers/asctec_msgs/msg/IMUCalcData.msg */
#ifndef ASCTEC_MSGS_MESSAGE_IMUCALCDATA_H
#define ASCTEC_MSGS_MESSAGE_IMUCALCDATA_H
#include <string>
#include <vector>
#include <ostream>
#include "ros/serialization.h"
#include "ros/builtin_message_traits.h"
#include "ros/message_operations.h"
#include "ros/message.h"
#include "ros/time.h"


namespace asctec_msgs
{
template <class ContainerAllocator>
struct IMUCalcData_ : public ros::Message
{
  typedef IMUCalcData_<ContainerAllocator> Type;

  IMUCalcData_()
  : angle_nick(0)
  , angle_roll(0)
  , angle_yaw(0)
  , angvel_nick(0)
  , angvel_roll(0)
  , angvel_yaw(0)
  , acc_x_calib(0)
  , acc_y_calib(0)
  , acc_z_calib(0)
  , acc_x(0)
  , acc_y(0)
  , acc_z(0)
  , acc_angle_nick(0)
  , acc_angle_roll(0)
  , acc_absolute_value(0)
  , Hx(0)
  , Hy(0)
  , Hz(0)
  , mag_heading(0)
  , speed_x(0)
  , speed_y(0)
  , speed_z(0)
  , height(0)
  , dheight(0)
  , dheight_reference(0)
  , height_reference(0)
  {
  }

  IMUCalcData_(const ContainerAllocator& _alloc)
  : angle_nick(0)
  , angle_roll(0)
  , angle_yaw(0)
  , angvel_nick(0)
  , angvel_roll(0)
  , angvel_yaw(0)
  , acc_x_calib(0)
  , acc_y_calib(0)
  , acc_z_calib(0)
  , acc_x(0)
  , acc_y(0)
  , acc_z(0)
  , acc_angle_nick(0)
  , acc_angle_roll(0)
  , acc_absolute_value(0)
  , Hx(0)
  , Hy(0)
  , Hz(0)
  , mag_heading(0)
  , speed_x(0)
  , speed_y(0)
  , speed_z(0)
  , height(0)
  , dheight(0)
  , dheight_reference(0)
  , height_reference(0)
  {
  }

  typedef int32_t _angle_nick_type;
  int32_t angle_nick;

  typedef int32_t _angle_roll_type;
  int32_t angle_roll;

  typedef int32_t _angle_yaw_type;
  int32_t angle_yaw;

  typedef int32_t _angvel_nick_type;
  int32_t angvel_nick;

  typedef int32_t _angvel_roll_type;
  int32_t angvel_roll;

  typedef int32_t _angvel_yaw_type;
  int32_t angvel_yaw;

  typedef int16_t _acc_x_calib_type;
  int16_t acc_x_calib;

  typedef int16_t _acc_y_calib_type;
  int16_t acc_y_calib;

  typedef int16_t _acc_z_calib_type;
  int16_t acc_z_calib;

  typedef int16_t _acc_x_type;
  int16_t acc_x;

  typedef int16_t _acc_y_type;
  int16_t acc_y;

  typedef int16_t _acc_z_type;
  int16_t acc_z;

  typedef int32_t _acc_angle_nick_type;
  int32_t acc_angle_nick;

  typedef int32_t _acc_angle_roll_type;
  int32_t acc_angle_roll;

  typedef int32_t _acc_absolute_value_type;
  int32_t acc_absolute_value;

  typedef int32_t _Hx_type;
  int32_t Hx;

  typedef int32_t _Hy_type;
  int32_t Hy;

  typedef int32_t _Hz_type;
  int32_t Hz;

  typedef int32_t _mag_heading_type;
  int32_t mag_heading;

  typedef int32_t _speed_x_type;
  int32_t speed_x;

  typedef int32_t _speed_y_type;
  int32_t speed_y;

  typedef int32_t _speed_z_type;
  int32_t speed_z;

  typedef int32_t _height_type;
  int32_t height;

  typedef int32_t _dheight_type;
  int32_t dheight;

  typedef int32_t _dheight_reference_type;
  int32_t dheight_reference;

  typedef int32_t _height_reference_type;
  int32_t height_reference;


private:
  static const char* __s_getDataType_() { return "asctec_msgs/IMUCalcData"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getDataType() { return __s_getDataType_(); }

  ROSCPP_DEPRECATED const std::string __getDataType() const { return __s_getDataType_(); }

private:
  static const char* __s_getMD5Sum_() { return "d34111f01cd460b1a9967f6d9469d0f6"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMD5Sum() { return __s_getMD5Sum_(); }

  ROSCPP_DEPRECATED const std::string __getMD5Sum() const { return __s_getMD5Sum_(); }

private:
  static const char* __s_getMessageDefinition_() { return "# angles derived by integration of gyro_outputs, drift compensated by data fusion;\n\
#-90000..+90000 pitch(nick) and roll, 0..360000 yaw; 1000 = 1 degree\n\
\n\
int32 angle_nick\n\
int32 angle_roll\n\
int32 angle_yaw\n\
\n\
# angular velocities, raw values [16 bit], bias free, in 0.0154 deg/s (=> 64.8 = 1 deg/s)\n\
\n\
int32 angvel_nick\n\
int32 angvel_roll\n\
int32 angvel_yaw\n\
\n\
# acc-sensor outputs, calibrated: -10000..+10000 = -1g..+1g\n\
\n\
int16 acc_x_calib\n\
int16 acc_y_calib\n\
int16 acc_z_calib\n\
\n\
# horizontal / vertical accelerations: -10000..+10000 = -1g..+1g\n\
\n\
int16 acc_x\n\
int16 acc_y\n\
int16 acc_z\n\
\n\
# reference angles derived by accelerations only: -90000..+90000; 1000 = 1 degree\n\
\n\
int32 acc_angle_nick\n\
int32 acc_angle_roll\n\
\n\
# total acceleration measured (10000 = 1g)\n\
\n\
int32 acc_absolute_value\n\
\n\
# magnetic field sensors output, offset free and scaled; units not determined, \n\
# as only the direction of the field vector is taken into account\n\
\n\
int32 Hx\n\
int32 Hy\n\
int32 Hz\n\
\n\
# compass reading: angle reference for angle_yaw: 0..360000; 1000 = 1 degree\n\
\n\
int32 mag_heading\n\
\n\
# pseudo speed measurements: integrated accelerations, pulled towards zero; units unknown;\n\
# used for short-term position stabilization\n\
\n\
int32 speed_x\n\
int32 speed_y\n\
int32 speed_z\n\
\n\
# height in mm (after data fusion)\n\
\n\
int32 height\n\
\n\
# diff. height in mm/s (after data fusion)\n\
\n\
int32 dheight\n\
\n\
# diff. height measured by the pressure sensor [mm/s]\n\
\n\
int32 dheight_reference\n\
\n\
# height measured by the pressure sensor [mm]\n\
\n\
int32 height_reference\n\
\n\
\n\
"; }
public:
  ROSCPP_DEPRECATED static const std::string __s_getMessageDefinition() { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED const std::string __getMessageDefinition() const { return __s_getMessageDefinition_(); }

  ROSCPP_DEPRECATED virtual uint8_t *serialize(uint8_t *write_ptr, uint32_t seq) const
  {
    ros::serialization::OStream stream(write_ptr, 1000000000);
    ros::serialization::serialize(stream, angle_nick);
    ros::serialization::serialize(stream, angle_roll);
    ros::serialization::serialize(stream, angle_yaw);
    ros::serialization::serialize(stream, angvel_nick);
    ros::serialization::serialize(stream, angvel_roll);
    ros::serialization::serialize(stream, angvel_yaw);
    ros::serialization::serialize(stream, acc_x_calib);
    ros::serialization::serialize(stream, acc_y_calib);
    ros::serialization::serialize(stream, acc_z_calib);
    ros::serialization::serialize(stream, acc_x);
    ros::serialization::serialize(stream, acc_y);
    ros::serialization::serialize(stream, acc_z);
    ros::serialization::serialize(stream, acc_angle_nick);
    ros::serialization::serialize(stream, acc_angle_roll);
    ros::serialization::serialize(stream, acc_absolute_value);
    ros::serialization::serialize(stream, Hx);
    ros::serialization::serialize(stream, Hy);
    ros::serialization::serialize(stream, Hz);
    ros::serialization::serialize(stream, mag_heading);
    ros::serialization::serialize(stream, speed_x);
    ros::serialization::serialize(stream, speed_y);
    ros::serialization::serialize(stream, speed_z);
    ros::serialization::serialize(stream, height);
    ros::serialization::serialize(stream, dheight);
    ros::serialization::serialize(stream, dheight_reference);
    ros::serialization::serialize(stream, height_reference);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint8_t *deserialize(uint8_t *read_ptr)
  {
    ros::serialization::IStream stream(read_ptr, 1000000000);
    ros::serialization::deserialize(stream, angle_nick);
    ros::serialization::deserialize(stream, angle_roll);
    ros::serialization::deserialize(stream, angle_yaw);
    ros::serialization::deserialize(stream, angvel_nick);
    ros::serialization::deserialize(stream, angvel_roll);
    ros::serialization::deserialize(stream, angvel_yaw);
    ros::serialization::deserialize(stream, acc_x_calib);
    ros::serialization::deserialize(stream, acc_y_calib);
    ros::serialization::deserialize(stream, acc_z_calib);
    ros::serialization::deserialize(stream, acc_x);
    ros::serialization::deserialize(stream, acc_y);
    ros::serialization::deserialize(stream, acc_z);
    ros::serialization::deserialize(stream, acc_angle_nick);
    ros::serialization::deserialize(stream, acc_angle_roll);
    ros::serialization::deserialize(stream, acc_absolute_value);
    ros::serialization::deserialize(stream, Hx);
    ros::serialization::deserialize(stream, Hy);
    ros::serialization::deserialize(stream, Hz);
    ros::serialization::deserialize(stream, mag_heading);
    ros::serialization::deserialize(stream, speed_x);
    ros::serialization::deserialize(stream, speed_y);
    ros::serialization::deserialize(stream, speed_z);
    ros::serialization::deserialize(stream, height);
    ros::serialization::deserialize(stream, dheight);
    ros::serialization::deserialize(stream, dheight_reference);
    ros::serialization::deserialize(stream, height_reference);
    return stream.getData();
  }

  ROSCPP_DEPRECATED virtual uint32_t serializationLength() const
  {
    uint32_t size = 0;
    size += ros::serialization::serializationLength(angle_nick);
    size += ros::serialization::serializationLength(angle_roll);
    size += ros::serialization::serializationLength(angle_yaw);
    size += ros::serialization::serializationLength(angvel_nick);
    size += ros::serialization::serializationLength(angvel_roll);
    size += ros::serialization::serializationLength(angvel_yaw);
    size += ros::serialization::serializationLength(acc_x_calib);
    size += ros::serialization::serializationLength(acc_y_calib);
    size += ros::serialization::serializationLength(acc_z_calib);
    size += ros::serialization::serializationLength(acc_x);
    size += ros::serialization::serializationLength(acc_y);
    size += ros::serialization::serializationLength(acc_z);
    size += ros::serialization::serializationLength(acc_angle_nick);
    size += ros::serialization::serializationLength(acc_angle_roll);
    size += ros::serialization::serializationLength(acc_absolute_value);
    size += ros::serialization::serializationLength(Hx);
    size += ros::serialization::serializationLength(Hy);
    size += ros::serialization::serializationLength(Hz);
    size += ros::serialization::serializationLength(mag_heading);
    size += ros::serialization::serializationLength(speed_x);
    size += ros::serialization::serializationLength(speed_y);
    size += ros::serialization::serializationLength(speed_z);
    size += ros::serialization::serializationLength(height);
    size += ros::serialization::serializationLength(dheight);
    size += ros::serialization::serializationLength(dheight_reference);
    size += ros::serialization::serializationLength(height_reference);
    return size;
  }

  typedef boost::shared_ptr< ::asctec_msgs::IMUCalcData_<ContainerAllocator> > Ptr;
  typedef boost::shared_ptr< ::asctec_msgs::IMUCalcData_<ContainerAllocator>  const> ConstPtr;
}; // struct IMUCalcData
typedef  ::asctec_msgs::IMUCalcData_<std::allocator<void> > IMUCalcData;

typedef boost::shared_ptr< ::asctec_msgs::IMUCalcData> IMUCalcDataPtr;
typedef boost::shared_ptr< ::asctec_msgs::IMUCalcData const> IMUCalcDataConstPtr;


template<typename ContainerAllocator>
std::ostream& operator<<(std::ostream& s, const  ::asctec_msgs::IMUCalcData_<ContainerAllocator> & v)
{
  ros::message_operations::Printer< ::asctec_msgs::IMUCalcData_<ContainerAllocator> >::stream(s, "", v);
  return s;}

} // namespace asctec_msgs

namespace ros
{
namespace message_traits
{
template<class ContainerAllocator>
struct MD5Sum< ::asctec_msgs::IMUCalcData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "d34111f01cd460b1a9967f6d9469d0f6";
  }

  static const char* value(const  ::asctec_msgs::IMUCalcData_<ContainerAllocator> &) { return value(); } 
  static const uint64_t static_value1 = 0xd34111f01cd460b1ULL;
  static const uint64_t static_value2 = 0xa9967f6d9469d0f6ULL;
};

template<class ContainerAllocator>
struct DataType< ::asctec_msgs::IMUCalcData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "asctec_msgs/IMUCalcData";
  }

  static const char* value(const  ::asctec_msgs::IMUCalcData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator>
struct Definition< ::asctec_msgs::IMUCalcData_<ContainerAllocator> > {
  static const char* value() 
  {
    return "# angles derived by integration of gyro_outputs, drift compensated by data fusion;\n\
#-90000..+90000 pitch(nick) and roll, 0..360000 yaw; 1000 = 1 degree\n\
\n\
int32 angle_nick\n\
int32 angle_roll\n\
int32 angle_yaw\n\
\n\
# angular velocities, raw values [16 bit], bias free, in 0.0154 deg/s (=> 64.8 = 1 deg/s)\n\
\n\
int32 angvel_nick\n\
int32 angvel_roll\n\
int32 angvel_yaw\n\
\n\
# acc-sensor outputs, calibrated: -10000..+10000 = -1g..+1g\n\
\n\
int16 acc_x_calib\n\
int16 acc_y_calib\n\
int16 acc_z_calib\n\
\n\
# horizontal / vertical accelerations: -10000..+10000 = -1g..+1g\n\
\n\
int16 acc_x\n\
int16 acc_y\n\
int16 acc_z\n\
\n\
# reference angles derived by accelerations only: -90000..+90000; 1000 = 1 degree\n\
\n\
int32 acc_angle_nick\n\
int32 acc_angle_roll\n\
\n\
# total acceleration measured (10000 = 1g)\n\
\n\
int32 acc_absolute_value\n\
\n\
# magnetic field sensors output, offset free and scaled; units not determined, \n\
# as only the direction of the field vector is taken into account\n\
\n\
int32 Hx\n\
int32 Hy\n\
int32 Hz\n\
\n\
# compass reading: angle reference for angle_yaw: 0..360000; 1000 = 1 degree\n\
\n\
int32 mag_heading\n\
\n\
# pseudo speed measurements: integrated accelerations, pulled towards zero; units unknown;\n\
# used for short-term position stabilization\n\
\n\
int32 speed_x\n\
int32 speed_y\n\
int32 speed_z\n\
\n\
# height in mm (after data fusion)\n\
\n\
int32 height\n\
\n\
# diff. height in mm/s (after data fusion)\n\
\n\
int32 dheight\n\
\n\
# diff. height measured by the pressure sensor [mm/s]\n\
\n\
int32 dheight_reference\n\
\n\
# height measured by the pressure sensor [mm]\n\
\n\
int32 height_reference\n\
\n\
\n\
";
  }

  static const char* value(const  ::asctec_msgs::IMUCalcData_<ContainerAllocator> &) { return value(); } 
};

template<class ContainerAllocator> struct IsFixedSize< ::asctec_msgs::IMUCalcData_<ContainerAllocator> > : public TrueType {};
} // namespace message_traits
} // namespace ros

namespace ros
{
namespace serialization
{

template<class ContainerAllocator> struct Serializer< ::asctec_msgs::IMUCalcData_<ContainerAllocator> >
{
  template<typename Stream, typename T> inline static void allInOne(Stream& stream, T m)
  {
    stream.next(m.angle_nick);
    stream.next(m.angle_roll);
    stream.next(m.angle_yaw);
    stream.next(m.angvel_nick);
    stream.next(m.angvel_roll);
    stream.next(m.angvel_yaw);
    stream.next(m.acc_x_calib);
    stream.next(m.acc_y_calib);
    stream.next(m.acc_z_calib);
    stream.next(m.acc_x);
    stream.next(m.acc_y);
    stream.next(m.acc_z);
    stream.next(m.acc_angle_nick);
    stream.next(m.acc_angle_roll);
    stream.next(m.acc_absolute_value);
    stream.next(m.Hx);
    stream.next(m.Hy);
    stream.next(m.Hz);
    stream.next(m.mag_heading);
    stream.next(m.speed_x);
    stream.next(m.speed_y);
    stream.next(m.speed_z);
    stream.next(m.height);
    stream.next(m.dheight);
    stream.next(m.dheight_reference);
    stream.next(m.height_reference);
  }

  ROS_DECLARE_ALLINONE_SERIALIZER;
}; // struct IMUCalcData_
} // namespace serialization
} // namespace ros

namespace ros
{
namespace message_operations
{

template<class ContainerAllocator>
struct Printer< ::asctec_msgs::IMUCalcData_<ContainerAllocator> >
{
  template<typename Stream> static void stream(Stream& s, const std::string& indent, const  ::asctec_msgs::IMUCalcData_<ContainerAllocator> & v) 
  {
    s << indent << "angle_nick: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle_nick);
    s << indent << "angle_roll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle_roll);
    s << indent << "angle_yaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angle_yaw);
    s << indent << "angvel_nick: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angvel_nick);
    s << indent << "angvel_roll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angvel_roll);
    s << indent << "angvel_yaw: ";
    Printer<int32_t>::stream(s, indent + "  ", v.angvel_yaw);
    s << indent << "acc_x_calib: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_x_calib);
    s << indent << "acc_y_calib: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_y_calib);
    s << indent << "acc_z_calib: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_z_calib);
    s << indent << "acc_x: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_x);
    s << indent << "acc_y: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_y);
    s << indent << "acc_z: ";
    Printer<int16_t>::stream(s, indent + "  ", v.acc_z);
    s << indent << "acc_angle_nick: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_angle_nick);
    s << indent << "acc_angle_roll: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_angle_roll);
    s << indent << "acc_absolute_value: ";
    Printer<int32_t>::stream(s, indent + "  ", v.acc_absolute_value);
    s << indent << "Hx: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hx);
    s << indent << "Hy: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hy);
    s << indent << "Hz: ";
    Printer<int32_t>::stream(s, indent + "  ", v.Hz);
    s << indent << "mag_heading: ";
    Printer<int32_t>::stream(s, indent + "  ", v.mag_heading);
    s << indent << "speed_x: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed_x);
    s << indent << "speed_y: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed_y);
    s << indent << "speed_z: ";
    Printer<int32_t>::stream(s, indent + "  ", v.speed_z);
    s << indent << "height: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height);
    s << indent << "dheight: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dheight);
    s << indent << "dheight_reference: ";
    Printer<int32_t>::stream(s, indent + "  ", v.dheight_reference);
    s << indent << "height_reference: ";
    Printer<int32_t>::stream(s, indent + "  ", v.height_reference);
  }
};


} // namespace message_operations
} // namespace ros

#endif // ASCTEC_MSGS_MESSAGE_IMUCALCDATA_H

