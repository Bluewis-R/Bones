#pragma once
#ifndef _TRIRENDERER_H_
#define _TRIRENDERER_H_


#include <SDL2/SDL.h>
#include <iostream>
#include "Bones/Component.h"
#include "ShaderProgram.h"


class triRenderer : public Component
{
public:
  triRenderer();
  void onDisplay();
  void draw();


private:
  std::shared_ptr<ShaderProgram> m_shader;

};

//shareder takes vert and frag files
#endif