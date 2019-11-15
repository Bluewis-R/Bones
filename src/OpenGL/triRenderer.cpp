#include "triRenderer.h"

#include "ShaderProgram.h"
#include "Bones/Component.h"


triRenderer::triRenderer()
{
  m_shader = std::make_shared<ShaderProgram>("simple.vert", "simple.frag");
}

void triRenderer::onDisplay()
{
  std::cout << "Render::onDisplay" << std::endl;
}

void triRenderer::draw()
{

}