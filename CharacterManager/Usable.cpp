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

double Usable::total_weight()
{
	double ret = 0;
	for (auto it : backpack)
	{
		ret += it.second->total_weight();
	}
	return ret;
}