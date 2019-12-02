#include "MeshRenderer.h"
#include "Material.h"
#include "Core.h"
#include "BMesh.h"

const char* src =
"#ifdef VERTEX                                 \n" \
"                                              \n" \
"attribute vec3 a_Position;                    \n" \
"attribute vec2 a_TexCoord;                    \n" \
"attribute vec3 a_Normal;                      \n" \
"                                              \n" \
"uniform mat4 u_Projection;                    \n" \
"uniform mat4 u_Model;                         \n" \
"                                              \n" \
"varying vec3 v_Normal;                        \n" \
"varying vec2 v_TexCoord;                      \n" \
"                                              \n" \
"void main()                                   \n" \
"{                                             \n" \
"  gl_Position = u_Projection *                \n" \
"    u_Model * vec4(a_Position, 1);            \n" \
"                                              \n" \
"  v_Normal = a_Normal;                        \n" \
"  v_TexCoord = a_TexCoord;                    \n" \
"}                                             \n" \
"                                              \n" \
"#endif                                        \n" \
"#ifdef FRAGMENT                               \n" \
"                                              \n" \
"varying vec3 v_Normal;                        \n" \
"varying vec2 v_TexCoord;                      \n" \
"                                              \n" \
"void main()                                   \n" \
"{                                             \n" \
"  gl_FragColor = vec4(v_TexCoord, 0, 1);      \n" \
"  gl_FragColor.z = v_Normal.x;                \n" \
"}                                             \n" \
"                                              \n" \
"#endif                                        \n";

MeshRenderer::MeshRenderer()
{

}

void MeshRenderer::OnInitialise()
{
  m_shader = GetCore()->context->createShader();
  m_shader->parse(src);
}

void MeshRenderer::OnDisplay()
{
  //std::cout << "Render::onDisplay" << std::endl;
  m_shader->setMesh(m_mesh->m_mesh);
  //m_shader->setUniform("u_Model", rend::mat4(1.0f));
  //m_shader->setUniform("u_Model", getGameObject()->getTransform()->getModel());
  m_shader->setUniform("u_Model", rend::translate(rend::mat4(1.0f), rend::vec3(0, 0, -10)));
  m_shader->setUniform("u_Projection", rend::perspective(rend::radians(45.0f), 1.0f, 0.1f, 100.0f));
  m_shader->render();

  // TODO: u_Model should come from transform
  // TODO: We have loaded in a mesh, try for material and texture
  // TODO: u_Projection comes from camera or Screen class.
  // TODO: u_View comes from camera's transform's getModel() but rend::inverse(...)
}

void MeshRenderer::SetMesh(std::shared_ptr<BMesh> _mesh)
{
  m_mesh = _mesh;
}

std::shared_ptr<BMesh> MeshRenderer::GetMesh()
{
  return m_mesh;
}

std::shared_ptr<Material> MeshRenderer::GetMaterial()
{
  return m_material;
}


