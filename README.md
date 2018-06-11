# point_cloud_transformer

This ros package is used for transforming a point cloud from one tf frame to another. 

## Configuration Instructions
1. Modify the topic name parameters in the launch/point_cloud_transformer_node.launch file to your liking.

## Installation Instructions
1. Clone the perception_pcl repository located here: https://github.com/ros-perception/perception_pcl into the source folder of your catkin workspace.
2. Clone this repository into the source folder of your catkin workspace.
3. Build the ros packages using `catkin_make` in your catkin workspace.

## Usage Instructions
1. Source your `devel/setup.bash` in your catkin workspace.
2. Start the point_cloud_transformer node with the command `roslaunch point_cloud_transformer point_cloud_transformer_node.launch`.