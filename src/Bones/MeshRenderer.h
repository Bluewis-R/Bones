#pragma once
#ifndef _MESH_RENDERER_H_
#define _MESH_RENDERER_H_

#include "Component.h"

#include <SDL2/SDL.h>
#include "rend/rend.h"

#include <iostream>

class BMesh;
class Material;

class MeshRenderer : public Component
{
public:
  MeshRenderer();
  void OnInitialise();
  void OnDisplay();
  
  void SetMesh(std::shared_ptr<BMesh> _mesh);
  std::shared_ptr<BMesh> GetMesh();
  std::shared_ptr<Material> GetMaterial();

private:
  std::shared_ptr<BMesh> m_mesh;
  std::shared_ptr<Material> m_material;

  // TODO: Temporary, get from Material instead.
  std::shared_ptr<rend::Shader> m_shader;
};

#endif
