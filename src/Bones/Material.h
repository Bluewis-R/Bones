#pragma once
#ifndef _MATERIAL_H_
#define _MATERIAL_H_
#include <vector>
//#include "Shader.h"
#include "rend/Shader.h"

#include "MaterialAttribute.h"

class Material
{
public:
  std::shared_ptr<Shader> GetShader();
  void SetShader(std::shared_ptr<Shader> _shader);


private:
  std::shared_ptr<Shader> m_shader;
  std::vector<MaterialAttribute> m_attributes;
};

#endif // !_MATERIAL_H_