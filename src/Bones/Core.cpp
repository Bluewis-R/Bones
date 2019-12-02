#include <vector>
//#include <memory>
#include "Core.h"
#include "Enviroment.h"
#include "GameObject.h"
#include "Resources.h"

//#include "GameObject.h"

Core::Core()
{

}

std::shared_ptr<Core> Core::Initialise()
{
  std::shared_ptr<Core> rtn = std::make_shared<Core>();
  rtn->self = rtn;

  rtn->window = SDL_CreateWindow("Bones",
    SDL_WINDOWPOS_UNDEFINED, SDL_WINDOWPOS_UNDEFINED,
    800, 600,
    SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN | SDL_WINDOW_RESIZABLE);

  if(!rtn->window)
  {
    throw rend::Exception("Failed to open GUI window");
  }

  SDL_GLContext glContext = SDL_GL_CreateContext(rtn->window);

  if(!glContext)
  {
    throw rend::Exception("Failed to create OpenGL context");
  }

  rtn->context = rend::Context::initialize();
  rtn->m_resources = std::make_shared<Resources>();
  rtn->m_resources->m_core = rtn;

  return rtn;
}

void Core::Stop()
{
}

std::shared_ptr<GameObject> Core::AddGameObject()
{
  std::shared_ptr<GameObject> rtn = std::make_shared<GameObject>();
  m_gameObjects.push_back(rtn);
  // TODO: Keep consistent, m_ or not.
  rtn->self = rtn;
  rtn->m_core = self;

  return rtn;
}

void Core::Start()
{
  m_running = true;
  SDL_Event e = {0};

  while (m_running)
  {
    while(SDL_PollEvent(&e) != 0)
    {
      if(e.type == SDL_QUIT)
      {
        m_running = false;
      }
    }

    //ticks
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_gameObjects.begin();
      it != m_gameObjects.end(); it++)
    {
      (*it)->Tick();
    }

    glClearColor(0.39f, 0.58f, 0.93f, 1.0f);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    //displays
    for (std::vector<std::shared_ptr<GameObject>>::iterator it = m_gameObjects.begin();
      it != m_gameObjects.end(); it++)
    {
      (*it)->Display();
    }

    SDL_GL_SwapWindow(window);
  }
}

std::shared_ptr<Resources> Core::GetResources()
{
  return m_resources;
}
