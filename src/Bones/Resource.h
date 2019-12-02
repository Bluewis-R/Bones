#pragma once
#ifndef _RESOURCE_H_
#define _RESOURCE_H_
#include <sr1/noncopyable>
#include <string>
#include "rend/Context.h"

//struct Context;
class Core;
class Resources;

class Resource : public std::sr1::noncopyable
{
public:
  std::string GetPath() { return m_path; }
  void SetPath(std::string _path) { m_path = _path; }
  virtual ~Resource();

  std::shared_ptr<Core> getCore();
protected:
  friend class Resources;

  std::string m_path;
  std::weak_ptr<Core> m_core;
};

#endif // !_RESOURCE_H_
