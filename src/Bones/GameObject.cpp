#include "GameObject.h"
//#include "Core.h"
#include "Component.h"


void GameObject::display()
{
	for (size_t i = 0; i < components.size(); i++)
	{
		components.at(i)->onDisplay();
	}
}