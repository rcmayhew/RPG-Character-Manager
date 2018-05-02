#include "stdafx.h"
#include "Armor.h"

// leather armor
Armor::Armor() : Gear(15.0, -1, "leather", "Leather armor is made up of pieces"
	" of hard boiled leather carefully sewn together.", 10, Slots::Armor)
{
	armor_type = ArmorType::Light;
	AC_bonus = 2;
	max_dex = 6;
	armor_check = 0;
	spell_fail = 10;
}

Armor::Armor(double weight, int quantity, std::string name, std::string description,
	int cost, ArmorType armort, int ACb, int maxd, int armorc,
	int spellf, ArmorSpeed armors) : Gear(weight, quantity, name, description, cost,
	Slots::Armor)
{
	armor_type = armort;
	AC_bonus = ACb;
	max_dex = maxd;
	armor_check = armorc;
	spell_fail = spellf;
	armor_speed = armors;
}

void Armor::use()
{
	return;
}

Armor::~Armor()
{
}

std::string Armor::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(cost) + " gp\t"
		+ std::to_string(AC_bonus) + '\t'
		+ std::to_string(max_dex) + '\t'
		+ std::to_string(armor_check) + '\t'
		+ std::to_string(spell_fail) + '\t'
		+ armor_speed.to_string() + '\t'
		+ std::to_string(weight) + " lbs. \n"
		+ description;
	return printout;
}
