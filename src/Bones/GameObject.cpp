#include "GameObject.h"

template <typename T>
std::shared_ptr<T> GameObject::addComponents()
{
  std::shared_ptr<T> rtn = std::make_shared<T>();
  components.push_back(rtn);
  return rtn;
}
