#pragma once
#include "Weapon.h"
class Melee :
	public Weapon
{
protected:
	//the "handedness" of the weapon. i.e. two handed weapon
	HandType meleetype;
public:
	//default constructor, build a regular dagger
	Melee();
	//allows any melee weapon to be imputted into the system
	Melee(Die die, DamageType dt, Size s, WClass wc, int c,
		int cc, int att_bon, int bon_dam, double w, int co, std::string n,
		std::string d, HandType mt);
	virtual ~Melee();
	//prints out the information on the weapon
	virtual std::string print();
	///featueres that might be added in the future
	//virtual int attack();
	//int attack(bool & critical);
	//int damage(bool critical);
	//virtual int damage();
};

