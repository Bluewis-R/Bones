#include <iostream>
#include <memory>

#include <Bones/Bones.h>

#include <AL/al.h>
#include <AL/alc.h>
#include "Bones/stb_vorbis.h"

// TODO: Put into Bones.h
#include "Bones/Macros.h"

struct SM
{
public:
  ALCdevice* device;
  ALCcontext* context;
};


int main()
{

  std::shared_ptr<Core> core = Core::Initialise();
  std::shared_ptr<GameObject> triangle = core->AddGameObject();
  std::shared_ptr<MeshRenderer> mr = triangle->AddComponents<MeshRenderer>();

  std::shared_ptr<BMesh> mesh = core->GetResources()->Load<BMesh>("../model/curuthers");
  mr->SetMesh(mesh);
  /*
  ALCdevice* device;
  ALCcontext* context;

  SM* sm = new SM();

  sm->device = alcOpenDevice(NULL);
  if (!device)
  {
    throw std::exception();
  }

  sm->context = alcCreateContext(device, NULL);
  if (!context)
  {
    alcCloseDevice(device);
    throw std::exception();
  }
  if (!alcMakeContextCurrent(context))
  {
    alcDestroyContext(context);
    alcCloseDevice(device);
    throw std::exception();
  }

  //Destroy
  //alcMakeContextCurrent(NULL);
  //alcDestroyContext(context);
  */



  core->Start();


  /*
  for (int i = 0; i < 1000; i++)
  {
	  core->update();
  }
  */

  //std::cin.get();
  return 0;
}
