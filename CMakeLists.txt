cmake_minimum_required(VERSION 2.6)
project(BONES)

include_directories(src)

add_library(Bones
    src/Bones/Component.cpp
    src/Bones/Core.cpp
    src/Bones/Enviroment.cpp
    src/Bones/GameObject.cpp
    src/Bones/Keyboard.cpp

    src/Bones/Component.h
    src/Bones/Core.h
    src/Bones/Enviroment.h
    src/Bones/GameObject.h
    src/Bones/Keyboard.h
	src/Bones/Bones.h

)

add_library(OpenGL
    src/OpenGL/ShaderProgram.cpp
    src/OpenGL/Texture.cpp
    src/OpenGL/VertexArray.cpp
    src/OpenGL/VertexBuffer.cpp
    src/OpenGL/stb_image.cpp

    src/OpenGL/ShaderProgram.h
    src/OpenGL/Texture.h
    src/OpenGL/VertexArray.h
    src/OpenGL/VertexBuffer.h
    src/OpenGL/stb_image.h

    src/OpenGL/simple.frag
    src/OpenGL/simple.vert

)
target_link_libraries(Bones OpenGL SDL2 opengl32 glew32)

add_executable(game
    src/game/main.cpp
    
)
target_link_libraries(game Bones OpenGL)