#include "GameObject.h"
//#include "Core.h"
#include <memory>
#include "Component.h"


void GameObject::tick()
{
  for (std::vector<std::shared_ptr<Component>>::iterator it = m_components.begin();
    it != m_components.end(); it++)
  {
    (*it)->onTick();
  }
}

void GameObject::display()
{
  for (std::vector<std::shared_ptr<Component>>::iterator it = m_components.begin();
    it != m_components.end(); it++)
  {
    (*it)->onDisplay();
  }
  /*
  for (size_t i = 0; i < components.size(); i++)
  {
    components.at(i)->onDisplay();
  }
  */
}

std::shared_ptr<Core> GameObject::getCore()
{
  return m_core.lock();
}
