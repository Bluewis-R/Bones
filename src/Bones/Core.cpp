#include <vector>
#include <memory>
#include "Core.h"


std::shared_ptr<Core> Core::initialise()
{
  std::shared_ptr<Core> c = std::make_shared<Core>();
  return c;
}

void Core::start()
{
  while (true)
  {
    for (size_t i = 0; i < m_GameObjects.size(); i++)
    {
      m_GameObjects.at(i)->display();
    }
  }
}