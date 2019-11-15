#pragma once
#ifndef _TRIRENDERER_H_
#define _TRIRENDERER_H_

#include <SDL2/SDL.h>
#include <iostream>
#include "Component.h"


class triRenderer : public Component
{
public:
  triRenderer();
  void onDisplay();
  void draw();


private:
  

};

#endif