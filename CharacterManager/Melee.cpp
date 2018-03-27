#include "stdafx.h"
#include "Melee.h"


Melee::Melee() : Weapon(Die(1,4), DamageType::P, Size::Medium, WClass::Simple,
	2, 2, 0, 0, 0, 1, 1, -1, "Dagger", "A dagger has a blade that is about 1 "
	"foot in length.\nBenefit: You get a + 2 bonus on Sleight of Hand skill "
	"checks made to conceal a dagger on your body(see Using Skills).")
{
	meleetype = HandType::Light;
}


Melee::~Melee()
{
}

Melee::Melee(Die die, DamageType dt, Size s,  WClass wc, int c, int cc, int att_bon,
	int bon_dam, double w, int co, std::string n, std::string d, HandType mt) :
	Weapon(die, dt, s, wc, c, cc, att_bon, 0, bon_dam, w, co, 1, n, d)
{
	meleetype = mt;
}

std::string Melee::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(cost) + " gp\t"
		+ base_damage.to_string() + '\t'
		+ print_crit() + '\t'
		+ std::to_string(weight) + " lbs. \n"
		+ description;
	return printout;
}
