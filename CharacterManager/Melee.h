#pragma once
#include "Weapon.h"
#include <memory>
class Melee :
	public Weapon
{
protected:
	MeleeType meleetype;
public:
	Melee();
	Melee(MeleeType mt, Die die, Size s, WClass wc, int att_bon, int bon_dam,
		double w, std::string n, std::string d);
	virtual ~Melee();
	virtual int attack();
	virtual int damage();
};

