#pragma once
#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include <vector>
//#include "Shader.h"
#include "rend/Shader.h"
#include "rend/Texture.h"

#include "MaterialAttribute.h"

using namespace rend;
class Material
{
public:
  std::shared_ptr<Shader> GetShader();
  void SetShader(std::shared_ptr<Shader> _shader);
  void SetValue(std::string _name, std::weak_ptr<Texture> _value);
  void SetValue(std::string _name, float _value);


private:
  std::shared_ptr<Shader> m_shader;
  std::vector<MaterialAttribute> m_attributes;
};

#endif // !_MATERIAL_H_