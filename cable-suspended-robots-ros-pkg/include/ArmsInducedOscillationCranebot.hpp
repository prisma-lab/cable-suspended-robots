#include "ros/ros.h"
// #include "boost/thread.hpp"
#include "std_msgs/Float64.h"
// #include "std_srvs/Empty.h"
#include "sensor_msgs/JointState.h"
#include "gazebo_msgs/LinkStates.h"
#include "gazebo_msgs/SetModelConfiguration.h"
#include "rosgraph_msgs/Clock.h"
#include <string>
#include <iostream>
// #include <fstream>
// #include <stack>
#include <thread>
#include <chrono>
#include <eigen3/Eigen/Geometry>
#include "trajectoryGeneration.hpp"

