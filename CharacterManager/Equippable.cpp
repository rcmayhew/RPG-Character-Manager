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

bool Equippable::found(Element armor) {
	if (container.find(armor->print_name()) == container.end()) return false;
	return true;
}

Element Equippable::select(std::string armor_name)
{
	return container.find(armor_name)->second;
}

// fix
void Equippable::add_armor(Element armor)
{
	if (found(armor))
	{
		select(armor->print_name())->add_armor();
	}
	else
	{
		container.insert({ armor->print_name(), armor });
	}
}

Equippable::~Equippable()
{
}
