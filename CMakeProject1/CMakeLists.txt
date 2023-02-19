cmake_minimum_required(VERSION 3.0.0)

project(CMakeProject1 VERSION 0.1.0)

include_directories(header)
file(GLOB SOURCES "src/*.cpp")

add_executable(CMakeProject1 ${SOURCES})

#include(CTest)
#enable_testing()

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)