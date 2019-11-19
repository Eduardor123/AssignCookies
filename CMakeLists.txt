cmake_minimum_required(VERSION 3.14)
project(AssignCookies)

ADD_SUBDIRECTORY(googletest)

set(CMAKE_CXX_STANDARD 14)

#add_executable(AssignCookies main.cpp)

add_executable(test_assigncookies
	test.cpp
)

TARGET_LINK_LIBRARIES(test_assigncookies  gtest)
TARGET_COMPILE_DEFINITIONS(test_assigncookies PRIVATE gtest_disable_pthreads=ON)
