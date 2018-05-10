#include "stdafx.h"
#include "Drawable.h"


bool Drawable::found(Weapons a)
{
	if (sheath.find(a->print_name()) == sheath.end()) return false;
	return true;
}

double Drawable::total_weight()
{
	// to total weight to be returned
	double ret = 0;
	for (auto it : sheath)
	{
		// the total weight being called on the weapon itself handles duplicates
		ret += it.second->total_weight();
	}
	return ret;
}

// remove weapon from inventory
// this would be called when weapon is dropped
// but weapon shouldn't run out of uses
Returns Drawable::remove_weapon(Weapons a)
{
	if (found(a))
	{
		sheath.erase(a->print_name());
		return Returns::Used;
	}
	return Returns::Error;
}

// /FIX
// still need to build the caller to finish
int Drawable::use_weapon_main()
{
	return 0;
}

Drawable::Drawable()
{
	// intializes the drawn vector as having 4 total possible slots
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

Weapons Drawable::select(std::string weapon_name)
{
	return sheath.find(weapon_name)->second;
}


void Drawable::add_weapon(Weapons weapon)
{
	if (found(weapon))
	{
		select(weapon->print_name())->add_weapon();
	}
	else
	{
		sheath.insert({ weapon->print_name(), weapon });
	}
}
