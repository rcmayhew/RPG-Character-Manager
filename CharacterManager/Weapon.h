#pragma once
#include "Item.h"

//the base class for both ranged and melee weapons
class Weapon :
	public Item
{
protected:
	Die base_damage;
	int attack_bonus;
	int range;
	int bonus_damage = 0;
	Size size = Size::Medium;
	WClass wclass;
	//magical damage

public:
	Weapon();
	Weapon(Die die, Size s, WClass wc, int att_bon, int r, int bon_dam, 
		double w, int u, std::string n, std::string d);
	virtual ~Weapon();
	virtual int attack() = 0;
	virtual int damage() = 0;
};
