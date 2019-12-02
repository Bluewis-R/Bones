#include "Resources.h"

Resources::Resources()
{
  m_resources = std::make_shared<std::list<std::shared_ptr<Resource>>>(); 
}