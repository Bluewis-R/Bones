cmake_minimum_required(VERSION 2.6)
project(BONES)

include_directories(src)

add_library(Bones
    src/Bones/Bones.h
    src/Bones/Macros.h
	src/Bones/stb_vorbis.h


    src/Bones/Component.h
    src/Bones/Core.h
    src/Bones/Enviroment.h
    src/Bones/GameObject.h
    src/Bones/Keyboard.h
    src/Bones/MeshRenderer.h
    src/Bones/Transform.h
    src/Bones/Camera.h
    src/Bones/Resource.h
    src/Bones/Resources.h
    src/Bones/BMesh.h
    src/Bones/Material.h
    src/Bones/MaterialAttribute.h

    src/Bones/Component.cpp
    src/Bones/Core.cpp
    src/Bones/Enviroment.cpp
    src/Bones/GameObject.cpp
    src/Bones/Keyboard.cpp
    src/Bones/MeshRenderer.cpp
    src/Bones/Transform.cpp
    src/Bones/Camera.cpp
    src/Bones/Resources.cpp
    src/Bones/Resource.cpp
    src/Bones/BMesh.cpp
    src/Bones/Material.cpp
    src/Bones/MaterialAttribute.cpp


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

  src/rend/Exception.h
  src/rend/Context.h
  src/rend/Texture.h
  src/rend/RenderTexture.h
  src/rend/Shader.h
  src/rend/Buffer.h
  src/rend/Mesh.h
  src/rend/Util.h
)

add_executable(game
    src/game/main.cpp 
)

if(MSVC)
  target_link_libraries(rend glew32 opengl32)
else()
  target_link_libraries(rend GLEW GL)
endif()

target_link_libraries(Bones SDL2 rend)
target_link_libraries(game Bones)
