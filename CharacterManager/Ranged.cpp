#include "stdafx.h"
#include "Ranged.h"


Ranged::Ranged() : Weapon(Die(1, 4), DamageType::B, Size::Medium, WClass::Simple,
	2, 1, 0, 50, 0, 0, 0, -1, "Sling", "A sling is little more than a leather cup"
	" attached to a pair of strings.\nYour Strength modifier applies to damage "
	"rolls when you use a sling, just as it does for thrown weapons.You can fire,"
	" but not load, a sling with one hand.\nYou can hurl ordinary stones with a "
	"sling, but stones are not as dense or as round as bullets.Thus, such an "
	"attack deals damage as if the weapon were designed for a creature one size "
	"category smaller than you and you take a –1 penalty on attack rolls.")
{
	reload_time = Actions::Move;
	reload_hands = HandType::Twohanded;
	fire_hands = HandType::OneHanded;
	str_bonus = 0;
}

Ranged::Ranged(Die die, DamageType dt, Size s, WClass wc, int c, int cc,
	int att_bon, int r, int bon_dam, double w, int co, std::string n,
	std::string d, Actions reloadt, HandType reloadh, HandType fireh, int str) :
		Weapon(die, dt, s, wc, c, cc, att_bon, r, bon_dam, w, co, -1, n, d)
{
	reload_time = reloadt;
	reload_hands = reloadh;
	fire_hands = fireh;
	str_bonus = str;
}

Ranged::~Ranged()
{
}

std::string Ranged::print()
{
	std::string printout;
	printout = name + '\n'
		+ std::to_string(cost) + " gp\t"
		+ base_damage.to_string() + std::to_string(str_bonus) + '\t'
		+ this->print_crit() + '\t'
		+ "Weight: " + std::to_string(weight) + '\n'
		+ description;
	return printout;
}
