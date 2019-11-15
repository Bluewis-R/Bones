#pragma once
#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "Component.h"
#include <glm/glm.hpp>


class Transform : public Component
{
public:
  void setPosition(glm::vec3 _position);
  void setRotation(glm::vec3 _rotation);
  void setScale(glm::vec3 _scale);
  glm::vec3 getPosition();
  glm::vec3 getRotation();
  glm::vec3 getScale();

private:
  glm::vec3 m_position;
  glm::vec3 m_rotation;
  glm::vec3 m_scale;

};



#endif // !_TRANSFORM_H_
