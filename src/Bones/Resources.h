#pragma once 
#ifndef _RESOURCES_H_
#define _RESOURCES_H_
#include <list>
#include "Bones/Resource.h"
#include "rend/Context.h"


class Resources
{
public:
  template <typename T>
  std::shared_ptr<T> Load(std::string _path)
  {
    //std::shared_ptr<Resource> r = std::make_shared<Resource>();
    //m_resources->push_back(r);


    if (!m_resources->empty())
    {

      std::list<std::shared_ptr<Resource>>::iterator it = m_resources->begin();
      //it != m_resources->end();
      //it++


      for (std::list<std::shared_ptr<Resource>>::iterator it = m_resources->begin();
        it != m_resources->end(); it++)
      {
        if ((*it)->GetPath() == _path)
        {
          //  If there is an existing path, return path
          return std::static_pointer_cast<T>(*it);
        }
      }
    }
    else
    {
      //  Creating the new resource, then return NEW path
      std::shared_ptr<T> rtn = std::make_shared<T>();
      //rtn->OnLoad(_path);
      return rtn;
    }
  }


  template <typename T>
  std::shared_ptr<T> Create(std::string _path)
  {
	  //std::shared_ptr<T> rtn = cont.createMesh();
	  //rtn.con
    return rtn;
  }




  Resources();

private:
  std::shared_ptr<std::list<std::shared_ptr<Resource>>> m_resources;
  //std::shared_ptr<Context> context;
  


};





#endif // !_RESOURCES_H_