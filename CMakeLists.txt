cmake_minimum_required(VERSION 4.3)

project(boxer_studio)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED OFF)
set(CMAKE_CXX_EXTENSIONS OFF)


add_executable(${PROJECT_NAME} WIN32 main.cpp) 

target_link_libraries(${PROJECT_NAME} user32)