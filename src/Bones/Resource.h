#pragma once
#ifndef _RESOURCE_H_
#define _RESOURCE_H_
#include <sr1/noncopyable>
#include <string>
#include "rend/Context.h"

//struct Context;

class Resource : public std::sr1::noncopyable
{
public:
  std::string GetPath() { return m_path; }
  void SetPath(std::string _path) { m_path = _path; }
  void SetContext(std::shared_ptr<rend::Context> _context) {m_context = _context;}
private:
  std::string m_path;
  std::shared_ptr<rend::Context> m_context;
};



//void Resource::SetContext(std::shared_ptr<Context> _context)


#endif // !_RESOURCE_H_