#pragma once
#include "Item.h"
#include "Types.h"
#include "Die.h"
class Weapon :
	public Item
{
protected:
	Die base_damage;
	int attack_bonus;
	int range;
	Size size;

public:
	Weapon();
	virtual ~Weapon();
};

