#pragma once
#ifndef _CORE_H_
#define _CORE_H_

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

class Core : private NonCopyable
{
public:
  Core();
  static std::shared_ptr<Core> Initialise();
  std::shared_ptr<GameObject> AddGameObject();

  void Start();
  void Stop();
  void Update();  //  run() in labs...

  void GetResources();



private:
  std::weak_ptr<Core> self;
  std::vector<std::shared_ptr<GameObject>> m_gameObjects;




  //std::shared_ptr<Keyboard> m_Keyboard;
  //std::shared_ptr<Enviroment> m_enviroment;
  bool m_running;

};
#endif