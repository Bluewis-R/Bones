#pragma once 
#ifndef _RESOURCES_H_
#define _RESOURCES_H_
#include <list>
#include "Bones/Resource.h"
#include "rend/Context.h"

class Core;

class Resources
{
public:
  template <typename T>
  std::shared_ptr<T> Load(std::string _path)
  {
    // Search the "cache" for asset with the given path.
    // We want to return this instead of loading a new one

    for (std::list<std::shared_ptr<Resource>>::iterator it = m_resources.begin();
      it != m_resources.end(); it++)
    {
      if ((*it)->GetPath() == _path)
      {
        //  If there is an existing path, return path
        return std::dynamic_pointer_cast<T>(*it);
      }
    }

    // We don't have one in cache. Create it
    // Add it to cache for future use.

    //  Creating the new resource, then return NEW path
    std::shared_ptr<T> rtn = std::make_shared<T>();
    rtn->m_core = m_core;
    rtn->OnLoad(_path);
    m_resources.push_back(rtn);

    return rtn;
  }


  // TODO: No parameters
  template <typename T>
  std::shared_ptr<T> Create(std::string _path)
  {
    std::shared_ptr<T> rtn;
	  //std::shared_ptr<T> rtn = cont.createMesh();
	  //rtn.con
    return rtn;
  }




  Resources();

private:
  friend class Core;

  std::weak_ptr<Core> m_core;
  std::list<std::shared_ptr<Resource>> m_resources;
  


};





#endif // !_RESOURCES_H_
