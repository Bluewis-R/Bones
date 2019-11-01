#include "Component.h"

//void Component::onDisplay() {}

std::shared_ptr<Core> Component::getCore()
{
  return std::shared_ptr<Core>();
}

std::shared_ptr<Keyboard> Component::getKeyBoard()
{
  return std::shared_ptr<Keyboard>();
}

std::shared_ptr<Enviroment> Component::getEnviroment()
{
  return std::shared_ptr<Enviroment>();
}

void Component::onInit()
{
}

void Component::onBegin()
{
}

void Component::onTick()
{
}

void Component::onDisplay()
{
}