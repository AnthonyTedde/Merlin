cmake_minimum_required(VERSION 3.19)
project(Merlin)

#set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD 14)

SET(EIGEN_DIR "/opt/Eigen_3.4")
include_directories(${EIGEN_DIR})

add_library(Merlin src/LinearModels/lm.cpp src/LinearModels/lm.h)
add_subdirectory(BoostTests)

target_link_libraries(Merlin ${EIGEN_DIR})