#ifndef _TEXTURE_H_
#define _TEXTURE_H_

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <string>

//class GLUint;

class Texture
{
public:
  Texture(std::string path);
  glm::vec2 getSize();
  GLuint getId();

private:
	GLuint id;
	glm::vec2 size;


};
#endif