#pragma once
#include "Weapon.h"
// /the class for all ranged weapons, is managed by the drawable class and will be called by attack caller class
class Ranged :
	public Weapon
{
protected:
	RangedClass ranged_class;
	Actions reload_time;
	HandType reload_hands;
	HandType fire_hands;
	int str_bonus;

public:
	// default constructor, build a regular sling
	Ranged();
	// allows any ranged weapon to be imputted into the system
	// calls the weapon constructor
	Ranged(Die die, DamageType dt, Size s, WClass wc, int c, int cc, 
		int att_bon, int r, int bon_dam, double w, int co, std::string n,
		std::string d, RangedClass rangedc, Actions reloadt, HandType reloadh, 
		HandType fireh, int str);
	virtual ~Ranged();

	// prints out all the stats of the randed weapon
	std::string print_str();

	// prints out the information on the weapon
	virtual std::string print();
	// /featueres that might be added in the future
	// virtual int attack();
	// int attack(bool & critical);
	// int damage(bool critical);
	// virtual int damage();
	// check_str()
	// add_dex()
};

