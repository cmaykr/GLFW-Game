cmake_minimum_required(VERSION 3.13)

project(Test)

find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)

include_directories(include)

set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_SOURCE_DIR}/bin)

add_executable(Test src/main.cpp src/glad.c src/game.cpp)
target_link_libraries(Test glfw)
target_link_libraries(Test OpenGL::GL)
target_link_libraries(Test)