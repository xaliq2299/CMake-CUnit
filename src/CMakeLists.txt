cmake_minimum_required(VERSION 3.0)
project(practice)

include_directories(${CMAKE_SOURCE_DIR}/include)

set(SRC main.c add.c divide.c)
add_library(${PROJECT_NAME} main.c add.c divide.c)
#add_executable(${PROJECT_NAME} "")
#target_sources(${PROJECT_NAME} PUBLIC ${SRC})
