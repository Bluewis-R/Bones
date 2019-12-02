#pragma once
#ifndef _B_MESH_H_
#define _B_MESH_H_
#include "Resource.h"
#include <rend/rend.h>
#include <memory>
#include <string>

class MeshRenderer;

class BMesh : public Resource
{
public:
  void OnLoad(std::string _path);

private:
  friend class MeshRenderer;
  std::string m_path;
  std::shared_ptr<rend::Mesh> m_mesh;

};



#endif // !_B_MESH_H_
