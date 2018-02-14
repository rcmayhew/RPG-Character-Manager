#pragma once
#include "Item.h"
#include <memory>

//the base class for both ranged and melee weapons
class Weapon :
	public Item
{
protected:
	//weapon damage
	Die base_damage;
	//size of weapon
	Size size = Size::Medium;
	//weapon proficiency requires to wield weapon
	WClass wclass;
	//the type of regular damage done
	DamageType damagetype;
	
	//if there is a attack bonus like master work
	int attack_bonus;
	//range of the weapon
	int range;
	//bonus damage like weapon specialization
	int bonus_damage = 0;
	//the range of the crit from 20
	int crit_chance = 1;
	//the amount of times that the damage is rerolled on a crit
	unsigned int crit;
	//magical damage

public:
	//default constructor. builds nothing
	Weapon();
	//constructor that is used by the inherited classes. Calls the Item constructor
	Weapon(Die die, DamageType dt, Size s, WClass wc, int c, int cc, int att_bon, int r, int bon_dam, 
		double w, int co, int u, std::string n, std::string d);
	//using shared pointers so not will be called
	virtual ~Weapon();
	
	//the base attack
	virtual int attack();
	//attacks and checks if there is a crit
	virtual int attack(bool & critical);
	//the base damage roll 
	virtual int damage(int str_mod);
	//the main damage call and calls the other damage function
	virtual int damage(bool critical, int str_mod);
	
	//the virtual function to call print and makes the class pure virtual
	virtual std::string print() = 0;
	//prints the crit for the inherited classes print() functions
	std::string print_crit();
};
