#include <vector>
//#include <memory>
#include "Core.h"

//#include "GameObject.h"


Core::Core()
{
}

std::shared_ptr<Core> Core::Initialise()
{
  std::shared_ptr<Core> rtn = std::make_shared<Core>();
  rtn->self = rtn;
  return rtn;
}

void Core::Start()
{
}

void Core::Stop()
{
}

std::shared_ptr<GameObject> Core::AddGameObject()
{
  std::shared_ptr<GameObject> rtn = std::make_shared<GameObject>();
  m_gameObjects.push_back(rtn);
  rtn->self = rtn;

  return rtn;
}

void Core::Update()
{
  while (m_running)
  {
    //ticks
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_gameObjects.begin();
      it != m_gameObjects.end(); it++)
    {
      (*it)->Tick();
    }
    //displays
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_gameObjects.begin();
      it != m_gameObjects.end(); it++)
    {
      (*it)->Display();
    }
  }
}

std::shared_ptr<Resources> Core::GetResources()
{
  return m_resources;
}
