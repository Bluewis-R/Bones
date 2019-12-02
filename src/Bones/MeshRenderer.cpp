#include "MeshRenderer.h"

#include "Bones/Component.h"


MeshRenderer::MeshRenderer()
{

}

void MeshRenderer::OnInitialise()
{
}

void MeshRenderer::OnDisplay()
{
  std::cout << "Render::onDisplay" << std::endl;
}

void MeshRenderer::SetMesh(std::shared_ptr<rend::Mesh> _mesh)
{
  m_mesh = _mesh;
}

std::shared_ptr<rend::Mesh> MeshRenderer::GetMesh()
{
  return m_mesh;
}

std::shared_ptr<Material> MeshRenderer::GetMaterial()
{
  return m_material;
}


