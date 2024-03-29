#ifndef _VERTEXARRAY_H_
#define _VERTEXARRAY_H_

#include <GL/glew.h>
#include <glm/glm.hpp>

#include <vector>
#include <string>

#include "VertexBuffer.h"

#include <fstream>
#include <iostream>

class VertexBuffer;

class VertexArray
{
public:
  VertexArray();
  VertexArray(std::string path);
  void setBuffer(std::string attribute, VertexBuffer *buffer);
  int getVertexCount();
  GLuint getId();

private:
	GLuint id;
	bool dirty;
	std::vector<VertexBuffer *> buffers;

	void splitStringWhitespace(std::string& input, std::vector<std::string>& output);
	void splitString(std::string& input, char splitter, std::vector<std::string>& output);

};
#endif