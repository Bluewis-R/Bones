#include "transform.h"
//#include <glm/glm.hpp>


void Transform::SetPosition(glm::vec3 _position)
{
  m_position = _position;
}
void Transform::SetRotation(glm::vec3 _rotation)
{
  m_rotation = _rotation;
}
void Transform::SetScale(glm::vec3 _scale)
{
  m_scale = _scale;
}
glm::vec3 Transform::GetPosition()
{
  return m_position;
}
glm::vec3 Transform::GetRotation()
{
  return m_rotation;
}
glm::vec3 Transform::GetScale()
{
  return m_scale;
}

glm::mat4 Transform::GetModel()
{
  return m_model;
}

