#include "Resource.h"

Resource::~Resource() { }

std::shared_ptr<Core> Resource::getCore()
{
  return m_core.lock();
}
