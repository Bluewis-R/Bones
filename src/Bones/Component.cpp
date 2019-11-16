#include "Component.h"
//#include "Core.h"

//void Component::onDisplay() {}

std::shared_ptr<GameObject> Component::GetGameObject()
{
  return m_gameObject.lock();
}

void Component::OnInitialise()
{
}

void Component::OnTick()
{
}

void Component::OnDisplay()
{
}
