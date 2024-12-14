cmake_minimum_required(VERSION 3.13)

project(Test)

find_package(glfw3 3.4 REQUIRED)
find_package(OpenGL REQUIRED)

include_directories(include)
include_directories(common)

set(SRC_COMMON common/GL_utilities.c common/LoadTGA.c)

add_executable(Test ${SRC_COMMON} src/main.cpp src/glad.c)
target_link_libraries(Test glfw)
target_link_libraries(Test OpenGL::GL)
target_link_libraries(Test)