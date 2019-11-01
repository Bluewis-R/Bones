#pragma once
#include <SDL2/SDL.h>
#include <iostream>
#include "Bones/Component.h"
#include "ShaderProgram.h"


class triRenderer : public Component
{
private:
	std::shared_ptr<ShaderProgram> m_shader;
	const GLfloat m_triangle[] = {
		0.0f, 0.5f, 0.0f,
		-0.5f, -0.5f, 0.0f,
		0.5f, -0.5f, 0.0f
	};

public:
	triRenderer();
	void draw();

	


};


//shareder takes vert and frag files
