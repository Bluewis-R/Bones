#include <iostream>
#include <memory>

#include "../Bones/Component.h"
#include "../Bones/Core.h"
#include "../Bones/GameObject.h"

#include "../OpenGL/ShaderProgram.h"

int main()
{

  std::shared_ptr<Core> core = std::make_shared<Core>();
  //core->start()
  std::shared_ptr<GameObject> triangle = core->addGameObject();





  for (int i = 0; i < 1000; i++)
  {

  }





  std::cin.get();
  return 0;
}