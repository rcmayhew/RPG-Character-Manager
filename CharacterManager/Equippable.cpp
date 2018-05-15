#include "stdafx.h"
#include "Equippable.h"


Equippable::Equippable()
{
}

int Equippable::slots_to_int(Slots slot)
{
	switch (slot)
	{
	case Slots::Head:
		return 0;
	case Slots::Headband:
		return 1;
	case Slots::Eyes:
		return 2;
	case Slots::Shoulders:
		return 3;
	case Slots::Neck:
		return 4;
	case Slots::Chest:
		return 5;
	case Slots::Body:
		return 6;
	case Slots::Armor:
		return 7;
	case Slots::Belt:
		return 8;
	case Slots::Wrists:
		return 9;
	case Slots::Hands:
		return 10;
	case Slots::RRing:
		return 11;
	case Slots::LRing:
		return 12;
	case Slots::Feet:
		return 13;
	default:
		return -1;
	}
}

std::string Equippable::slots_to_string(Slots slot)
{
	switch (slot)
	{
	case Slots::Head:
		return "Head";
	case Slots::Headband:
		return "Headband";
	case Slots::Eyes:
		return "Eyes";
	case Slots::Shoulders:
		return "Shoulders";
	case Slots::Neck:
		return "Neck";
	case Slots::Chest:
		return "Chest";
	case Slots::Body:
		return "Body";
	case Slots::Armor:
		return "Armor";
	case Slots::Belt:
		return "Belt";
	case Slots::Wrists:
		return "Wrist";
	case Slots::Hands:
		return "Hands";
	case Slots::RRing:
		return "Right Ring";
	case Slots::LRing:
		return "Left Ring";
	case Slots::Feet:
		return "Feet";
	default:
		return "Slotless";
	}
}

Slots Equippable::int_to_slot(int index)
{
	switch (index)
	{
	case 0:
		return Slots::Head;
	case 1:
		return Slots::Headband;
	case 2:
		return Slots::Eyes;
	case 3:
		return Slots::Shoulders;
	case 4:
		return Slots::Neck;
	case 5:
		return Slots::Chest;
	case 6:
		return Slots::Body;
	case 7:
		return Slots::Armor;
	case 8:
		return Slots::Belt;
	case 9:
		return Slots::Wrists;
	case 10:
		return Slots::Hands;
	case 11:
		return Slots::RRing;
	case 12:
		return Slots::LRing;
	case 13:
		return Slots::Feet;
	default:
		return Slots::NOSLOT;
	}
}

bool Equippable::found(Gears armor) {
	if (gear_bag.find(armor->print_name()) == gear_bag.end()) return false;
	return true;
}

Gears Equippable::select(std::string armor_name)
{
	return gear_bag.find(armor_name)->second;
}

// fix
void Equippable::add_armor(Gears armor)
{
	if (found(armor))
	{
		select(armor->print_name())->add_armor();
	}
	else
	{
		gear_bag.insert({ armor->print_name(), armor });
	}
}

Equippable::~Equippable()
{
}

double Equippable::total_weight()
{
	double ret = 0;
	for (auto it : gear_bag)
	{
		ret += it.second->total_weight();
	}
	return ret;
}

std::string Equippable::print_gear_bag()
{
	std::string printout;
	for (auto it : gear_bag)
	{
		printout += it.second->print_name() + " x " + std::to_string(it.second->quantity_left()) + '\n';
	}
	return printout;
}

std::string Equippable::print_worn()
{
	std::string printout;
	for (auto it : worn)
	{
		if (!it) continue;
		printout += slots_to_string(it->give_slot()) + " : " + it->print_name() + '\n';
	}
	return printout;
}


std::string Equippable::print()
{
	return "";
}
