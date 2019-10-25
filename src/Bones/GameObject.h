#include <vector>
#include <memory>
#include "Component.h"
//#include "Core.h"

class GameObject {

private:
  std::vector<std::shared_ptr<Components>> components;
  std::weak_ptr<Core> core;


public
  std::shared_ptr<Core> getCore();
  template <typename T>
  std::shared_ptr<T> addComponents<T>();

};

