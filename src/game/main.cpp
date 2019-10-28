#include <iostream>
#include <memory>

#include <Bones/Bones.h>
//#include "Core.h"

int main()
{

  std::shared_ptr<Core> core = std::make_shared<Core>();
  std::shared_ptr<GameObject> triangle = core->addGameObject();
  




  for (int i = 0; i < 1000; i++)
  {

  }





  std::cin.get();
  return 0;
}