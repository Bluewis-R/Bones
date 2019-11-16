#pragma once
#ifndef _TRANSFORM_H_
#define _TRANSFORM_H_

#include "Component.h"
#include <glm/glm.hpp>


class Transform : public Component
{
public:
  void SetPosition(glm::vec3 _position);
  void SetRotation(glm::vec3 _rotation);
  void SetScale(glm::vec3 _scale);
  glm::vec3 GetPosition();
  glm::vec3 GetRotation();
  glm::vec3 GetScale();
  glm::mat4 GetModel();


private:
  glm::vec3 m_position;
  glm::vec3 m_rotation;
  glm::vec3 m_scale;
  glm::mat4 m_model;


};



#endif // !_TRANSFORM_H_
