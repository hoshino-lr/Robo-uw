cmake_minimum_required(VERSION 3.17)
project(Robo-uw)


message("${PROJECT_NAME} STRTED BUILDING ON ${CMAKE_SYSTEM_NAME}")

set(CMAKE_CXX_STANDARD 14)

#opencv
find_package(OpenCV 4.4 REQUIRED)
include_directories(${OpenCV_INCLUDE_DIRS})

#INCLUDE
set(include_dirs
        "${CMAKE_SOURCE_DIR}/cam_calibration/include"
        "${CMAKE_SOURCE_DIR}/src/target_get/include"
        "${CMAKE_SOURCE_DIR}/cam_calibration/include"
        "${CMAKE_SOURCE_DIR}/program/include")
include_directories(${include_dirs})
message("Include dirs are ${include_dirs}")

#Src
file(GLOB_RECURSE source_files
        "${CMAKE_SOURCE_DIR}/cam_calibration/include/*.h" "${CMAKE_SOURCE_DIR}/cam_calibration/src/*.?pp"
        "${CMAKE_SOURCE_DIR}/src/*/include/*.h" "${CMAKE_SOURCE_DIR}/src/*/src/*.?pp"
        "${CMAKE_SOURCE_DIR}/program/include/collect.hpp")
message("Source files ${source_files}")

add_executable(Robo_uw  ${source_files} program/main.cpp)
target_link_libraries(Robo_uw ${OpenCV_LIBS})
