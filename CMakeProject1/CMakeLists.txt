cmake_minimum_required(VERSION 3.1)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(
    CMakeProject1 
    VERSION 1.0.0
    DESCRIPTION "Test CMake Lah"
    LANGUAGES CXX)

include_directories(header)
file(GLOB SOURCES "src/*.cpp")

add_executable(RunMe ${SOURCES})

#include(CTest)
#enable_testing()

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)