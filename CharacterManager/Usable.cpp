#include "stdafx.h"
#include "Usable.h"

bool Usable::found(Element a)
{
	if (backpack.find(a->print_name()) == backpack.end()) return false;
	return true;
}

void Usable::add_item(Element item)
{
	if (found(item))
	{
		item->add_item();
	}
	else
	{
		backpack.insert({ item->print_name(), item });
	}
}

Usable::Usable()
{
}


Usable::~Usable()
{
}