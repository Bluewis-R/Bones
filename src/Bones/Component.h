#pragma once
#include <memory>

#include "GameObject.h"

#include "Core.h"
#include "Enviroment.h"
#include "Keyboard.h"


class Component {

private:
  std::weak_ptr<GameObject> gameObject;

public:
  GameObject getGameObject();
  std::shared_ptr<Core> getCore();
  std::shared_ptr<Keyboard> getKeyBoard();
  std::shared_ptr<Enviroment> getEnviroment();
  void onInit();
  void onBegin();
  void onTick();

  
  
  
  
  
  
  virtual void onDisplay();
};
