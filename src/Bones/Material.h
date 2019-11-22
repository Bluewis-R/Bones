#pragma once
#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include <vector>
//#include "Shader.h"
#include "rend/Shader.h"
#include "rend/Texture.h"

#include "MaterialAttribute.h"

class Material
{
public:
  std::shared_ptr<rend::Shader> GetShader();
  void SetShader(std::shared_ptr<rend::Shader> _shader);
  void SetValue(std::string name, std::weak_ptr<rend::Texture> value);
  void SetValue(std::string name, float value);


private:
  std::shared_ptr<rend::Shader> m_shader;
  std::vector<MaterialAttribute> m_attributes;
};

#endif // !_MATERIAL_H_