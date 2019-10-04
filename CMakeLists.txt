cmake_minimum_required(VERSION 2.6)
project(BONES)

add_library(Bones
    src/Bones/dummy.cpp
)
target_link_libraries(Bones SDL2 opengl32 glew32)

add_executable(game
    src/game/main.cpp
    
)
target_link_libraries(game Bones)