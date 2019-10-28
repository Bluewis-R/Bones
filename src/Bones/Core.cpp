#include <vector>
#include <memory>
#include "Core.h"
//#include "GameObject.h"

Core::Core()
{
}

std::shared_ptr<Core> Core::initialise()
{
  std::shared_ptr<Core> c = std::make_shared<Core>();
  return c;
}

void Core::start()
{
}

void Core::stop()
{
}

std::shared_ptr<GameObject> Core::addGameObject()
{
  std::shared_ptr<GameObject> rtn = std::make_shared<GameObject>();
  m_GameObjects.push_back(rtn);
  return rtn;
}

void Core::update()
{

}