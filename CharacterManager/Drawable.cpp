#include "stdafx.h"
#include "Drawable.h"


bool Drawable::found(Element a)
{
	if (collection.find(a->print_name()) == collection.end()) return false;
	return true;
}

double Drawable::total_weight()
{
	//to total weight to be returned
	double ret = 0;
	for (auto it : collection)
	{
		//the total weight being called on the weapon itself handles duplicates
		ret += it.second->total_weight();
	}
	return ret;
}

Returns Drawable::remove_element(Element a)
{
	if (found(a))
	{
		collection.erase(a->print_name());
		return Returns::Used;
	}
	return Returns::Error;
}

int Drawable::use_weapon_main()
{
	return 0;
}

Drawable::Drawable()
{
	//intializes the drawn vector as having 4 total possible slots
	drawn = Drawn { nullptr, nullptr, nullptr, nullptr };
}


Drawable::~Drawable()
{
}
