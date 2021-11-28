set(Boost_USE_STATIC_LIBS OFF)
find_package(Boost REQUIRED COMPONENTS unit_test_framework)
include_directories(${Boost_INCLUDE_DIRS})


add_executable(BoostTests_run test_lm.cpp main.cpp)
target_link_libraries(BoostTests_run ${CMAKE_THREAD_LIBS_INIT} rt)
