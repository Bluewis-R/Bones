#include "Component.h"
//#include "Core.h"
#include "GameObject.h"

//void Component::onDisplay() {}

std::shared_ptr<GameObject> Component::GetGameObject()
{
  return m_gameObject.lock();
}

std::shared_ptr<Core> Component::GetCore()
{
  return GetGameObject()->GetCore();
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
