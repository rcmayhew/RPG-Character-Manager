#include "stdafx.h"
#include "Melee.h"


Melee::Melee() : Weapon(Die(1,4), Size::Small, WClass::Simple, 0, 0, 0, 1, -1, "Dagger", 
	"A dagger has a blade that is about 1 foot in length.\n\nBenefit: You get a + 2 bonus"
	" on Sleight of Hand skill checks made to conceal a dagger on your body(see Using Skills).")
{
	meleetype = MeleeType::Light;
}


Melee::~Melee()
{
}

Melee::Melee(MeleeType mt, Die die, Size s, WClass wc, int att_bon, int bon_dam,
	double w, std::string n, std::string d) : 
	Weapon(die, s, wc, att_bon, 0, bon_dam, w, -1, n, d)
{
	meleetype = mt;
}

int Melee::attack()
{
	std::shared_ptr<Die> attack_die = std::make_shared <Die> (1, 20);
	return attack_die->roll() + attack_bonus;
}

int Melee::damage()
{

}
