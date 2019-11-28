#pragma once
#ifndef _RESOURCE_H_
#define _RESOURCE_H_
#include <sr1/noncopyable>
#include <string>

class Resource : public std::sr1::noncopyable
{
public:
  std::string GetPath() { return m_path; }
private:
  std::string m_path;
};

#endif // !_RESOURCE_H_