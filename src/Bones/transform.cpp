#include "transform.h"
//#include <glm/glm.hpp>


void Transform::setPosition(glm::vec3 _position)
{
  m_position = _position;
}

void Transform::setRotation(glm::vec3 _rotation)
{
  m_rotation = _rotation;
}

void Transform::setScale(glm::vec3 _scale)
{
  m_scale = _scale;
}

glm::vec3 Transform::getPosition()
{
  return m_position;
}

glm::vec3 Transform::getRotation()
{
  return m_rotation;
}

glm::vec3 Transform::getScale()
{
  return m_scale;
}
