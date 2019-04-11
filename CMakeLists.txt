cmake_minimum_required(VERSION 3.0)
project(practice)

set(SRC main.c add.c)
add_executable(${PROJECT_NAME} "")
target_sources(${PROJECT_NAME} PUBLIC ${SRC})
