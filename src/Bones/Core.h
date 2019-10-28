#pragma once
#include <vector>
#include "Enviroment.h"

#include "GameObject.h"

class NonCopyable
{
protected:
  NonCopyable() {}
  ~NonCopyable() {}
private:
  NonCopyable(const NonCopyable &);
  NonCopyable& operator=(const NonCopyable &);
};

class Core : private NonCopyable{

private:
  std::shared_ptr<Enviroment> m_enviroment;
  std::vector<std::shared_ptr<GameObject>> m_GameObjects;
  //std::shared_ptr<Keyboard> m_Keyboard;
  //bool m_running;

public:
  Core();
  static std::shared_ptr<Core> initialise();
  void start();
  void stop();
  void update();
  std::shared_ptr<GameObject> addGameObject();
  //std::shared_ptr<GameObject> addGameObject();
  
};

