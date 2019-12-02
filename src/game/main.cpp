#include <iostream>
#include <memory>

#include <Bones/Bones.h>
//#include "OpenGL/triRenderer.h"

// TODO: Put into Bones.h
#include "Bones/Macros.h"

int main()
{

  std::shared_ptr<Core> core = Core::Initialise();
  std::shared_ptr<GameObject> triangle = core->AddGameObject();
  std::shared_ptr<MeshRenderer> mr = triangle->AddComponents<MeshRenderer>();

  std::shared_ptr<BMesh> mesh = core->GetResources()->Load<BMesh>("model/curuthers");
  mr->SetMesh(mesh);

  
  core->Start();


  /*
  for (int i = 0; i < 1000; i++)
  {
	  core->update();
  }
  */

  //std::cin.get();
  return 0;
}
