#include "ros/ros.h"
int main(int argc,  char** argv) {
    ros::init(argc,argv,"read_param");
    ros::NodeHandle nh;
    double noise;
    nh.getParam("noise",noise);
    ROS_INFO("noise parameter is ...........%f",noise);
    return 0;
}