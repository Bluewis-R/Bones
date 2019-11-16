#pragma once
#ifndef _MATERIALATTRIBUTE_H_
#define _MATERIALATTRIBUTE_H_
#include <string>
#include "Texture.h"

class MaterialAttribute
{
public:

private:
  std::string m_name;
  int m_type;
  float m_floatValue;
  std::weak_ptr<Texture> textureValue;
};

#endif // !_MATERIALATTRIBUTE_H_