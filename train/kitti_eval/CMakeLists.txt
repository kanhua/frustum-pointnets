cmake_minimum_required(VERSION 3.14)
project(boost_lab)
set(CMAKE_CXX_STANDARD 11)

set(BOOST_ROOT "/Users/kanhua/Downloads/boost_1_71_0")

find_package(Boost 1.71.0)

if(NOT Boost_FOUND)
    message(FATAL_ERROR "Could not find boost!")
endif()

message(STATUS "Boost_INCLUDE_DIRS: ${Boost_INCLUDE_DIRS}")
message(STATUS "Boost_LIBRARIES: ${Boost_LIBRARIES}")
message(STATUS "Boost_VERSION: ${Boost_VERSION}")

include_directories(${Boost_INCLUDE_DIR})
link_directories(${Boost_LIBRARY_DIR})

add_executable(evaluate_object_3d_offline evaluate_object_3d_offline.cpp)