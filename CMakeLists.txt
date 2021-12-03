cmake_minimum_required(VERSION 3.19)
project(Merlin)

#set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD 14)

SET(EIGEN_DIR "/opt/Eigen_3.4")
include_directories(${EIGEN_DIR})

link_directories(BoostTests)
add_subdirectory(BoostTests)
add_library(Merlin STATIC src/LinearModels/LinearModel.cpp src/LinearModels/LinearModel.h)

target_link_libraries(Merlin ${EIGEN_DIR})

#add_executable( Merlin src/LinearModels/LinearModel.cpp )

#and here
#target_link_libraries( Merlin BoostTests )

target_include_directories(Merlin PRIVATE ${CMAKE_SOURCE_DIR})
