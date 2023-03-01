cmake_minimum_required(VERSION 3.10)

if(${CMAKE_VERSION} VERSION_LESS 3.12)
    cmake_policy(VERSION ${CMAKE_MAJOR_VERSION}.${CMAKE_MINOR_VERSION})
endif()

project(
    CMakeProject1 
    VERSION 1.0.0
    DESCRIPTION "Test CMake Lah"
    LANGUAGES CXX)

add_library(Animal src/Animal.cpp)
add_library(Dog src/Dog.cpp)
target_include_directories(Animal PUBLIC header)
target_include_directories(Dog PUBLIC header)

add_executable(RunMe src/main.cpp)
target_link_libraries(RunMe Animal Dog)

get_target_property(OUT RunMe LINK_LIBRARIES)
foreach(lib ${OUT})
    message("Library: ${lib}")
endforeach()

# include_directories(header)

# file(GLOB SOURCES "src/*.cpp")
# foreach(file ${SOURCES})
#     message("CPP File: ${file}")
# endforeach()

# add_executable(RunMe ${SOURCES})

#include(CTest)
#enable_testing()

#set(CPACK_PROJECT_NAME ${PROJECT_NAME})
#set(CPACK_PROJECT_VERSION ${PROJECT_VERSION})
#include(CPack)