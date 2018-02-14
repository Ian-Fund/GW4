cmake_minimum_required(VERSION 3.8)
project(gw4)

set(CMAKE_CXX_STANDARD 11)

set(SOURCE_FILES main.cpp benchPlayer.cpp benchPlayer.h courtPlayer.cpp courtPlayer.h Player.cpp Player.h benchPlayer.cpp benchPlayer.h node.cpp node.h)
add_executable(gw4 ${SOURCE_FILES})