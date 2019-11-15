cmake_minimum_required(VERSION 2.6)
project(BONES)

include_directories(src)

add_library(Bones
    src/Bones/Component.cpp
    src/Bones/Core.cpp
    src/Bones/Enviroment.cpp
    src/Bones/GameObject.cpp
    src/Bones/Keyboard.cpp
    src/Bones/triRenderer.cpp
    src/Bones/transform.cpp
    src/Bones/Camera.cpp

    src/Bones/Component.h
    src/Bones/Core.h
    src/Bones/Enviroment.h
    src/Bones/GameObject.h
    src/Bones/Keyboard.h
    src/Bones/triRenderer.h
    src/Bones/transform.h
    src/Bones/Camera.h
    
    src/Bones/Bones.h
)

add_library(rend
  src/rend/Exception.cpp
  src/rend/Context.cpp
  src/rend/Texture.cpp
  src/rend/RenderTexture.cpp
  src/rend/Shader.cpp
  src/rend/Buffer.cpp
  src/rend/Mesh.cpp
  src/rend/Util.cpp
)

add_executable(game
    src/game/main.cpp 
)

target_link_libraries(rend glew32 opengl32)
target_link_libraries(Bones SDL2 rend)
target_link_libraries(game Bones)