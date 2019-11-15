#include <iostream>
#include <memory>

#include <Bones/Bones.h>
#include "OpenGL/triRenderer.h"
//#include "OpenGL/triRenderer.h"



int main()
{

  std::shared_ptr<Core> core = Core::initialise();
  std::shared_ptr<GameObject> entity = core->addGameObject();
  std::shared_ptr<triRenderer> trig = entity->addComponents<triRenderer>();

  core->start();


  /*
  for (int i = 0; i < 1000; i++)
  {
	  core->update();
  }
  */




  std::cin.get();
  return 0;
}