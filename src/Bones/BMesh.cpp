#include "BMesh.h"
#include "Core.h"

#include <rend/rend.h>

#include <fstream>

void BMesh::OnLoad(std::string _path)
{
  m_mesh = getCore()->context->createMesh();

  m_mesh->SetPath(m_path + ".obj");

  _path += ".obj";

  std::cout << "Opening model: " << _path << std::endl;
  std::ifstream f(_path.c_str());

  if(!f.is_open())
  {
    throw rend::Exception("Failed to open model");
  }

  std::string data;
  std::string line;

  while(!f.eof())
  {
    std::getline(f, line);
    data += line + "\n";
  }

  m_mesh->parse(data);
}
