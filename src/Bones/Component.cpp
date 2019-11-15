#include "Component.h"
//#include "Core.h"

//void Component::onDisplay() {}

std::shared_ptr<GameObject> Component::getGameObject()
{
  return m_gameObject.lock();
}

void Component::onInitialise()
{
}

void Component::onTick()
{
}

void Component::onDisplay()
{
}
