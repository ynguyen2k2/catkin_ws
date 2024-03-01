// Generated by gencpp from file yahboomcar_msgs/kinemarics.msg
// DO NOT EDIT!


#ifndef YAHBOOMCAR_MSGS_MESSAGE_KINEMARICS_H
#define YAHBOOMCAR_MSGS_MESSAGE_KINEMARICS_H

#include <ros/service_traits.h>


#include <yahboomcar_msgs/kinemaricsRequest.h>
#include <yahboomcar_msgs/kinemaricsResponse.h>


namespace yahboomcar_msgs
{

struct kinemarics
{

typedef kinemaricsRequest Request;
typedef kinemaricsResponse Response;
Request request;
Response response;

typedef Request RequestType;
typedef Response ResponseType;

}; // struct kinemarics
} // namespace yahboomcar_msgs


namespace ros
{
namespace service_traits
{


template<>
struct MD5Sum< ::yahboomcar_msgs::kinemarics > {
  static const char* value()
  {
    return "b50531ac053c7ba8a5e7dbdab4ee0d01";
  }

  static const char* value(const ::yahboomcar_msgs::kinemarics&) { return value(); }
};

template<>
struct DataType< ::yahboomcar_msgs::kinemarics > {
  static const char* value()
  {
    return "yahboomcar_msgs/kinemarics";
  }

  static const char* value(const ::yahboomcar_msgs::kinemarics&) { return value(); }
};


// service_traits::MD5Sum< ::yahboomcar_msgs::kinemaricsRequest> should match
// service_traits::MD5Sum< ::yahboomcar_msgs::kinemarics >
template<>
struct MD5Sum< ::yahboomcar_msgs::kinemaricsRequest>
{
  static const char* value()
  {
    return MD5Sum< ::yahboomcar_msgs::kinemarics >::value();
  }
  static const char* value(const ::yahboomcar_msgs::kinemaricsRequest&)
  {
    return value();
  }
};

// service_traits::DataType< ::yahboomcar_msgs::kinemaricsRequest> should match
// service_traits::DataType< ::yahboomcar_msgs::kinemarics >
template<>
struct DataType< ::yahboomcar_msgs::kinemaricsRequest>
{
  static const char* value()
  {
    return DataType< ::yahboomcar_msgs::kinemarics >::value();
  }
  static const char* value(const ::yahboomcar_msgs::kinemaricsRequest&)
  {
    return value();
  }
};

// service_traits::MD5Sum< ::yahboomcar_msgs::kinemaricsResponse> should match
// service_traits::MD5Sum< ::yahboomcar_msgs::kinemarics >
template<>
struct MD5Sum< ::yahboomcar_msgs::kinemaricsResponse>
{
  static const char* value()
  {
    return MD5Sum< ::yahboomcar_msgs::kinemarics >::value();
  }
  static const char* value(const ::yahboomcar_msgs::kinemaricsResponse&)
  {
    return value();
  }
};

// service_traits::DataType< ::yahboomcar_msgs::kinemaricsResponse> should match
// service_traits::DataType< ::yahboomcar_msgs::kinemarics >
template<>
struct DataType< ::yahboomcar_msgs::kinemaricsResponse>
{
  static const char* value()
  {
    return DataType< ::yahboomcar_msgs::kinemarics >::value();
  }
  static const char* value(const ::yahboomcar_msgs::kinemaricsResponse&)
  {
    return value();
  }
};

} // namespace service_traits
} // namespace ros

#endif // YAHBOOMCAR_MSGS_MESSAGE_KINEMARICS_H