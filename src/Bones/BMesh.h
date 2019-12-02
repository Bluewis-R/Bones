#pragma once
#ifndef _B_MESH_H_
#define _B_MESH_H_
#include <memory>
#include <string>
#include <rend/Mesh.h>

class BMesh
{
public:
  std::shared_ptr<rend::Mesh> Onload(std::string _path);

private:
  std::string m_path;
  std::shared_ptr<rend::Mesh> m_mesh;

};



#endif // !_B_MESH_H_