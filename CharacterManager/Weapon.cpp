#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon()
{
	base_damage = Die();
	attack_bonus = 1;
	range = 0;
}

Weapon::Weapon(Die die, Size s, WClass wc, int att_bon, int r, int bon_dam, double w, int u, 
	std::string n, std::string d) : Item(w,u,n,d)
{
	base_damage = die;
	attack_bonus = att_bon;
	range = r;
	bonus_damage = bon_dam;
	size = s;
	wclass = wc;
}

Weapon::~Weapon()
{
}
