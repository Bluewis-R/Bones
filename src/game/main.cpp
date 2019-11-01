#include <iostream>
#include <memory>

#include <Bones/Bones.h>
#include "OpenGL/triRenderer.h"
//#include "OpenGL/triRenderer.h"


int main()
{

  std::shared_ptr<Core> core = std::make_shared<Core>();
  std::shared_ptr<GameObject> triangle = core->addGameObject();
  std::shared_ptr<triRenderer> trig = triangle->addComponents<triRenderer>();

  core->initialise();


  for (int i = 0; i < 1000; i++)
  {
	  core->update();
  }





  std::cin.get();
  return 0;
}