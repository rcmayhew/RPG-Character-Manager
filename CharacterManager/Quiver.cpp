#include "stdafx.h"
#include "Quiver.h"


Quiver::Quiver()
{
}



void Quiver::add_ammo(Element a)
{
	
	if (found(a))
	{
		//this can only work when they are the same name
		//this is what the found is supposed to do
		*(collection.at(a->print_name())) += a;
	}
	else
	{
		collection.emplace(a->print_name, a);
	}
}

bool Quiver::found(Element a)
{
	if (collection.find(a->print_name()) == collection.end()) return false;
	return true;
}

Quiver::~Quiver()
{
}
