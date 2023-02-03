cmake_minimum_required(VERSION 3.22)

project(LabA LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(HelloWorld ./HelloWorld/HelloWorld.cpp)
add_executable(Temperature ./Temperature/Temperature.cpp)