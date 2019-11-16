#pragma once
#ifndef _RESOURCE_H_
#define _RESOURCE_H_
#include <string>

class NonCopyable
{
protected:
  NonCopyable() {}
  ~NonCopyable() {}
private:
  NonCopyable(const NonCopyable &);
  NonCopyable& operator=(const NonCopyable &);
};

class Resource : public NonCopyable
{
public:

private:
  std::string m_path;
   
};

#endif // !_RESOURCE_H_