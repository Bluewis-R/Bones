#include "GameObject.h"
//#include "Core.h"
#include <memory>
#include "Component.h"


void GameObject::Tick()
{
  for (std::vector<std::shared_ptr<Component>>::iterator it = m_components.begin();
    it != m_components.end(); it++)
  {
    (*it)->OnTick();
  }
}

void GameObject::Display()
{
  for (std::vector<std::shared_ptr<Component>>::iterator it = m_components.begin();
    it != m_components.end(); it++)
  {
    (*it)->OnDisplay();
  }
  /*
  for (size_t i = 0; i < components.size(); i++)
  {
    components.at(i)->onDisplay();
  }
  */
}

std::shared_ptr<Core> GameObject::GetCore()
{
  return m_core.lock();
}
