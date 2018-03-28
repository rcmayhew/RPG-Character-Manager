#include "stdafx.h"
#include "Drawable.h"


Returns Drawable::main_draw(Element a)
{
	if (found(a))
	{
		main_hand = a;
		return Returns::Exist;
	}
	return Returns::Error;
}

Returns Drawable::off_draw1(Element a)
{
	if (found(a))
	{
		off_hand_1 = a;
		return Returns::Exist;
	}
	return Returns::Error;
}

Returns Drawable::off_draw2(Element a)
{
	if (found(a))
	{
		off_hand_2 = a;
		return Returns::Exist;
	}
	return Returns::Error;
}

Returns Drawable::off_draw3(Element a)
{
	if (found(a))
	{
		off_hand_3 = a;
		return Returns::Exist;
	}
	return Returns::Error;
}

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

int Drawable::use_weapon_main()
{
	
}

Drawable::Drawable()
{
}


Drawable::~Drawable()
{
}
