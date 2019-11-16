#pragma once
#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include <vector>
#include <memory>

class Component;
class Core;

class GameObject 
{
public:
  //std::shared_ptr<Core> getCore();      // this error hurts me emotionaly
  void Tick();
  void Display();
  std::shared_ptr<Core> GetCore();

  template <typename T>
  std::shared_ptr<T> AddComponents()
  {
    std::shared_ptr<T> rtn = std::make_shared<T>();
    m_components.push_back(rtn);
    // rtn->onInitialize();
    return rtn;
  }
  template <typename T, typename A>
  std::shared_ptr<T> AddComponents(A a)
  {
    std::shared_ptr<T> rtn = std::make_shared<T>();
    m_components.push_back(rtn);
    rtn->onInitialise(A a);    return rtn;
  }




private:
  std::vector<std::shared_ptr<Component>> m_components;
  std::weak_ptr<Core> m_core;

};
#endif
