#include "BMesh.h"
#include "rend/Context.h"

std::shared_ptr<rend::Mesh> BMesh::Onload(std::string _path)
{
  std::shared_ptr<rend::Context> context;
  context->initialize();

  m_mesh = context->createMesh();
  m_mesh->SetContext(context);

  m_mesh->SetPath(m_path + ".obj");

  std::string data;
  m_mesh->parse(data);
 
  std::shared_ptr<rend::Buffer> buff = context->createBuffer();

  m_mesh->setBuffer("test", buff);
  
  //m_mesh->setTexture();











  return std::shared_ptr<rend::Mesh>();
}
