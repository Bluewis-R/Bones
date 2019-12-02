#pragma once
#ifndef _GAMEOBJECT_H_
#define _GAMEOBJECT_H_

#include <vector>
#include <memory>

class Component;
class Core;

class GameObject 
{
  friend class Core;
public:
  void Tick();
  void Display();
  std::shared_ptr<Core> GetCore();

  template <typename T>
  std::shared_ptr<T> AddComponents()
  {
    std::shared_ptr<T> rtn = std::make_shared<T>();
    rtn->m_gameObject = self;
    m_components.push_back(rtn);
    rtn->OnInitialise();
    return rtn;
  }

  template <typename T, typename A>
  std::shared_ptr<T> AddComponents(A a)
  {
    std::shared_ptr<T> rtn = std::make_shared<T>();
    rtn->m_gameObject = self;
    m_components.push_back(rtn);
    rtn->OnInitialise(a);

    return rtn;
  }




private:
  std::weak_ptr<GameObject> self;
  std::vector<std::shared_ptr<Component>> m_components;
  std::weak_ptr<Core> m_core;

};
#endif
