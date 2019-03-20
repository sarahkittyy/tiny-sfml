cmake_minimum_required(VERSION 3.13)
project(tiny-sfml)

option(BUILD_EXAMPLES "Build all examples." OFF)

find_package(SFML 2.5 COMPONENTS graphics window audio network system)

file(GLOB_RECURSE sources "src/*.cpp")

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_FLAGS "-g -Wall")

add_library(tiny-sfml ${sources})

target_link_libraries(tiny-sfml sfml-graphics sfml-audio sfml-network)

target_include_directories(tiny-sfml PUBLIC "include/")

if(BUILD_EXAMPLES)
	add_subdirectory("examples/")
endif()

if(BUILD_TESTING)
	add_subdirectory("testing/")
endif()