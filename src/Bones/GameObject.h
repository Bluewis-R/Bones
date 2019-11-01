#pragma once
#include <vector>
#include <memory>
//#include "Component.h"

//#include "Core.h"
class Component;

class GameObject {

private:
  std::vector<std::shared_ptr<Component>> components;
  //std::weak_ptr<Core> core;


public:
  //std::shared_ptr<Core> getCore();      // this error hurts me emotionaly
	void display();



  template <typename T>
  std::shared_ptr<T> addComponents()
  {
	  std::shared_ptr<T> rtn = std::make_shared<T>();
	  components.push_back(rtn);
	  return rtn;
  }
};

