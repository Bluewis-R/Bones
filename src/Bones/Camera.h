#pragma once
#ifndef _CAMERA_H_
#define _CAMERA_H_

#include <glm/glm.hpp>

class camera
{
public:
  glm::mat4 GetView();
  glm::mat4 GetProjection();
private:



};





#endif // !_CAMERA_H_
