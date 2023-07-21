cmake_minimum_required(VERSION 3.0)
project(Motion_Planning)

#Output for the binaries
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)
#Find OpenCV on the system
find_package(OpenCV REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})
set(SOURCES src/test.cpp src/main.cpp)
add_executable(main ${SOURCES})
target_link_libraries(main ${OpenCV_LIBS})


