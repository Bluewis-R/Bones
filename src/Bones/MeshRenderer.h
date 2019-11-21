#pragma once
#ifndef _MESHRENDERER_H_
#define _MESHRENDERER_H_

#include <SDL2/SDL.h>
#include <iostream>
#include "Component.h"
#include "rend/Mesh.h"

class MeshRenderer : public Component
{
public:
  MeshRenderer();
  void OnDisplay();
  void Draw();
  //void SetMesh(std::shared_ptr<Mesh> _mesh);

  //Mesh
private:
  //std::shared_ptr<Mesh> m_mesh;

};

#endif