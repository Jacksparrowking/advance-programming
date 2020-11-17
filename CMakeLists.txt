cmake_minimum_required(VERSION 3.17)
project(untitled)

set(CMAKE_CXX_STANDARD 20)

add_executable(untitled anomaly_detection_util.cpp anomaly_detection_util.h MainTrain.cpp timeseries.h AnomalyDetector.h SimpleAnomalyDetector.h SimpleAnomalyDetector.cpp timeseries.cpp)