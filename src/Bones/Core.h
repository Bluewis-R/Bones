#pragma once
#ifndef _CORE_H_
#define _CORE_H_

#include <vector>

#include <SDL2/SDL.h>
#include <rend/rend.h>

class MeshRenderer;
class GameObject;
class Resources;
class Environment;
class BMesh;

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

  std::shared_ptr<Resources> GetResources();

private:
  friend class MeshRenderer;
  friend class BMesh;

  std::weak_ptr<Core> self;
  std::vector<std::shared_ptr<GameObject>> m_gameObjects;
  std::shared_ptr<Resources> m_resources;
  SDL_Window* window;
  std::shared_ptr<rend::Context> context;


  //std::shared_ptr<Keyboard> m_Keyboard;
  //std::shared_ptr<Enviroment> m_enviroment;
  bool m_running;

};
#endif
