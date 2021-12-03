set(Boost_USE_STATIC_LIBS ON)





find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})


add_executable(BoostTests_run test_LinearModel.cpp main.h)

target_link_libraries(BoostTests_run ${CMAKE_THREAD_LIBS_INIT} rt Merlin)
#target_link_libraries(BoostTests_run ${Boost_UNIT_TEST_FRAMEWORK_LIBRARY} rt)
#ADD_DEFINITIONS(-DBOOST_TEST_DYN_LINK)

target_include_directories(BoostTests_run PRIVATE ${CMAKE_SOURCE_DIR})
