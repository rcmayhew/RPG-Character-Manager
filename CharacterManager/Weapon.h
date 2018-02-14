#pragma once
#include "Item.h"
#include <memory>

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
	DamageType damagetype;
	int crit_chance = 1;
	unsigned int crit;
	//magical damage

public:
	Weapon();
	Weapon(Die die, DamageType dt, Size s, WClass wc, int c, int cc, int att_bon, int r, int bon_dam, 
		double w, int co, int u, std::string n, std::string d);
	virtual ~Weapon();
	virtual int attack();
	virtual int attack(bool & critical);
	virtual int damage(int str_mod);
	virtual int damage(bool critical, int str_mod);
	virtual std::string print() = 0;
	std::string print_crit();
};
