#include "triRenderer.h"

#include "ShaderProgram.h"
#include "Bones/Component.h"


triRenderer::triRenderer()
{
	m_shader = std::make_shared<ShaderProgram>("simple.vert", "simple.frag");
}

void triRenderer::onDisplay()
{
	_shader->setUniform("in_Model", m_model);
	_shader->setUniform("in_Texture", m_texture);
	_shader->draw(m_vertexArray);
}
