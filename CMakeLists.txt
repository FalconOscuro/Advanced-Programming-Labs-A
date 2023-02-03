cmake_minimum_required(VERSION 3.22)

project(LabA LANGUAGES CXX)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

add_executable(HelloWorld ./01-HelloWorld/HelloWorld.cpp)
add_executable(Temperature ./02-Temperature/Temperature.cpp)
add_executable(Types ./03-Types/Types.cpp)
add_executable(FloatingPointPrecision ./04-FloatingPointPrecision/FloatingPointPrecision.cpp)