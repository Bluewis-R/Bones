#pragma once
#ifndef _SHADERPROGRAM_H_
#define _SHADERPROGRAM_H_

#include <GL/glew.h>
#include <glm/glm.hpp>
#include <glm/ext.hpp>
#include "stb_image.h"
#include "Texture.h"

#include <fstream>
#include <string>
#include <vector>

class VertexArray;

struct Sampler
{
	GLint id;
	Texture *texture;
};

class ShaderProgram
{
public:
  ShaderProgram();
  ShaderProgram(std::string vert, std::string frag);

  void draw(VertexArray *vertexArray);
  void setUniform(std::string uniform, glm::vec3 value);
  void setUniform(std::string uniform, glm::vec4 value);
  void setUniform(std::string uniform, float value);
  void setUniform(std::string uniform, glm::mat4);
  void setUniform(std::string uniform, int);
  void setUniform(std::string uniform, Texture *texture);
  void PrintShaderInfoLog(GLuint obj);


  GLuint getId();
private:
	GLuint id;
	std::vector<Sampler> samplers;

	std::string vertShader;
	std::string fragShader;




};
#endif