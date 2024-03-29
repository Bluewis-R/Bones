#ifndef _VERTEXBUFFER_H_
#define _VERTEXBUFFER_H_

#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include <GL/glew.h>
#include <vector>

class VertexBuffer
{
public:
  VertexBuffer();

  void add(glm::vec2 value);
  void add(glm::vec3 value);
  void add(glm::vec4 value);

  int getComponents();
  int getDataSize();
  GLuint getId();
private:
	GLuint id;
	int components;
	std::vector <GLfloat> data;
	bool dirty;

};
#endif