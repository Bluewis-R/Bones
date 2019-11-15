#include <vector>
#include <memory>
#include "Core.h"
//#include "GameObject.h"


Core::Core()
{
}

std::shared_ptr<Core> Core::initialise()
{
  std::shared_ptr<Core> rtn = std::make_shared<Core>();
  rtn->self = rtn;
  return rtn;
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
  rtn->

  return rtn;
}

void Core::update()
{
  while (m_running)
  {
    //ticks
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_GameObjects.begin();
      it != m_GameObjects.end(); it++)
    {      (*it)->tick();
    }
    //displays
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_GameObjects.begin();
      it != m_GameObjects.end(); it++)
    {      (*it)->display();
    }
  }
}