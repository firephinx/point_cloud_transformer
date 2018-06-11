#include <ros/ros.h>
#include "point_cloud_transformer/point_cloud_transformer.h"

int main(int argc, char **argv)
{
  ros::init(argc, argv, "point_cloud_transformer_node", ros::init_options::AnonymousName);

  PointCloudTransformer point_cloud_transformer;

  ros::spin();

  return 0;
}