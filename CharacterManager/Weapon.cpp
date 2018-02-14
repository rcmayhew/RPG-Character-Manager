#include "stdafx.h"
#include "Weapon.h"


Weapon::Weapon()
{
	base_damage = Die();
	attack_bonus = 1;
	range = 0;
}

Weapon::Weapon(Die die, DamageType dt, Size s, WClass wc, int c, int cc, int att_bon, int r, 
	int bon_dam, double w, int co, int u, std::string n, std::string d) : 
		Item(w,u,n,d,co)
{
	base_damage = die;
	attack_bonus = att_bon;
	range = r;
	bonus_damage = bon_dam;
	size = s;
	wclass = wc;
	damagetype = dt;
	crit_chance = cc;
	crit = c;
}

Weapon::~Weapon()
{
}

int Weapon::attack()
{
	std::shared_ptr<Die> attack_die = std::make_shared <Die>(1, 20);
	return attack_die->roll();
}

int Weapon::attack(bool & critical)
{
	int base = this->attack();
	if (base > (20 - crit_chance)) critical = true;
	return base + attack_bonus;
}

int Weapon::damage(bool critical, int str_mod)
{
	int total = 0;
	if (critical) {
		for (size_t i = 0; i < crit; ++i) total += this->damage(str_mod);
	}
	else total += this->damage(str_mod);
	return total;
}

int Weapon::damage(int str_mod)
{
	return base_damage.roll() + bonus_damage;
}

std::string Weapon::print_crit()
{
	std::string printout;
	if (crit_chance > 2)
	{
		printout += std::to_string(21 - crit_chance) + '-' + std::to_string(20) + '/';
	}
	printout += 'x' + std::to_string(crit);
	return printout;
}
