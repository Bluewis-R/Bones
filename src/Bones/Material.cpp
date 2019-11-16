#include "Material.h"

std::shared_ptr<Shader> Material::GetShader()
{
  return m_shader;
}

void Material::SetShader(std::shared_ptr<Shader> _shader)
{
  m_shader = _shader;
}
