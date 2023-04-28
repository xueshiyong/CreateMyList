cmake_minimum_required(VERSION 3.24)
project(CreateMyList)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)

add_executable(CreateMyList
        MyList.cpp
        MyList.h main.cpp MyDoubleList.h MyDoubleList.cpp)
