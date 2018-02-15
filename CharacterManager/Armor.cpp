#include "stdafx.h"
#include "Armor.h"

//leather armor
Armor::Armor() : Wearable(15.0, -1, "leather", "Leather armor is made up of pieces"
	" of hard boiled leather carefully sewn together.", 10)
{
	armor_type = ArmorType::Light;
	slots = Slots::Armor;
	AC_bonus = 2;
	max_dex = 6;
	armor_check = 0;
	spell_fail = 10;
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
