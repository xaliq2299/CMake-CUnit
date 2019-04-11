cmake_minimum_required(VERSION 3.0)
project(practice)

#include_directories(include)

set(SRC main.c add.c divide.c)
add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})
