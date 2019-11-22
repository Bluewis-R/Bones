#pragma once
#ifndef _MESHRENDERER_H_
#define _MESHRENDERER_H_

#include <SDL2/SDL.h>
#include <iostream>
#include "rend/rend.h"
#include "Component.h"
#include "Material.h"


class MeshRenderer : public Component
{
public:
  MeshRenderer();
  void OnInitialise();
  void OnDisplay();
  void Draw();
  //void SetMesh(std::shared_ptr<Mesh> _mesh);

private:
  std::shared_ptr<rend::Mesh> m_mesh;
  std::shared_ptr<Material> m_material;
};

#endif