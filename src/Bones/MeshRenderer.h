#pragma once
#ifndef _MESHRENDERER_H_
#define _MESHRENDERER_H_

#include <SDL2/SDL.h>
#include <iostream>
#include "rend/rend.h"
#include "Component.h"
#include "Material.h"

using namespace rend;
class MeshRenderer : public Component
{
public:
  MeshRenderer();
  void OnInitialise();
  void OnDisplay();
  
  void SetMesh(std::shared_ptr<Mesh> _mesh);
  std::shared_ptr<rend::Mesh> GetMesh();
  std::shared_ptr<Material> GetMaterial();

private:
  std::shared_ptr<rend::Mesh> m_mesh;
  std::shared_ptr<Material> m_material;
};

#endif