#pragma once
#ifndef _COMPONENT_H_
#define _COMPONENT_H_

#include <memory>

//#include "GameObject.h"
//#include "Core.h"
#include "Enviroment.h"
#include "Keyboard.h"

class GameObject;
class Core;
class Component 
{
public:
  virtual void onInitialise();
  virtual void onTick();
  virtual void onDisplay();
  //virtual void onPostDisplay();
  //virtual void onGui();


  //std::shared_ptr<Core> getCore();
  std::shared_ptr<GameObject> getGameObject();
  //std::shared_ptr<Keyboard> getKeyBoard();
  //std::shared_ptr<Enviroment> getEnviroment();



private:
  std::weak_ptr<GameObject> m_gameObject;

};
#endif