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

//remove weapon from inventory
//this would be called when weapon is dropped
//but weapon shouldn't run out of uses
Returns Drawable::remove_element(Element a)
{
	if (found(a))
	{
		collection.erase(a->print_name());
		return Returns::Used;
	}
	return Returns::Error;
}

///FIX
//still need to build the caller to finish
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

int Drawable::hand_to_int(Hands hand)
{
	switch (hand)
	{
	case Hands::Main:
		return 0;
	case Hands::Off:
		return 1;
	case Hands::Third:
		return 2;
	case Hands::Fourth:
		return 3;
	default:
		return -1;
	}
}

Hands Drawable::int_to_hands(int index)
{
	switch (index)
	{
	case 0:
		return Hands::Main;
	case 1:
		return Hands::Off;
	case 2:
		return Hands::Third;
	case 3:
		return Hands::Fourth;
	default:
		return Hands::NOHAND;
	}
}

Element Drawable::select(Element a)
{
	return collection.find(a->print_name())->second;
}

void Drawable::add_weapon(Element a)
{
	if (found(a))
	{
		select(a)->add_weapon();
	}
	else
	{
		//collection.insert(a);
	}
}
