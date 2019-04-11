cmake_minimum_required(VERSION 3.0)
project(practice)

#set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${PROJECT_SOURCE_DIR}/bin)

add_subdirectory(src)
include_directories(include)

#set(SRC main.c add.c)
#add_executable(${PROJECT_NAME} "")
#target_sources(${PROJECT_NAME} PUBLIC ${SRC})

set(TEST test_main)
add_executable(${TEST} test.c)
target_include_directories(${TEST} PUBLIC include)
target_link_libraries(${TEST} PUBLIC cunit practice)

enable_testing()
add_test(TestPolishPW ${TEST})