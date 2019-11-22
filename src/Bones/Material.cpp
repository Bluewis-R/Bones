#include "Material.h"
#include "rend/Shader.h"


std::shared_ptr<rend::Shader> Material::GetShader()
{
	return m_shader;
}

void Material::SetShader(std::shared_ptr<rend::Shader> _shader)
{
	m_shader = _shader;
}