cmake_minimum_required(VERSION 3.23)
project(opengl_playground C)

find_package(OpenGL REQUIRED)
find_package(GLUT REQUIRED)

set(CMAKE_C_STANDARD 11)

include_directories(.)

add_executable(opengl_playground
        main.c)

target_link_libraries(opengl_playground ${OPENGL_LIBRARIES})
target_link_libraries(opengl_playground ${GLUT_LIBRARIES})
target_link_libraries(opengl_playground -lopengl32 -lfreeglut)
