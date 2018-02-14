#pragma once
#include "Weapon.h"
class Melee :
	public Weapon
{
protected:
	MeleeType meleetype;
public:
	Melee();
	Melee(MeleeType mt, Die die, DamageType dt, Size s, WClass wc, int c, int cc, int att_bon, int bon_dam,
		double w, int co, std::string n, std::string d);
	virtual ~Melee();
	virtual std::string print();
	//virtual int attack();
	//int attack(bool & critical);
	//int damage(bool critical);
	//virtual int damage();
};

