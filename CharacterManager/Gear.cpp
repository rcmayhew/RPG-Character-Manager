#include "stdafx.h"
#include "Gear.h"


Gear::Gear() : Wearable(1, -1, "Mask", "Gala events are where one may see the "
	"most outlandish and stylish of masks, but simpler masks may be found "
	"wherever local customs permit. They range from small bits of fabric that "
	"cover only a portion of the face to elaborate constructions that cover "
	"the entire face or head.", 50, Slots::Eyes)
{
}

Gear::Gear(double weight, int quantity, std::string name, std::string description,
	int cost, Slots slots) : Wearable(weight, quantity, name, description, cost, slots)
{
}

void Gear::use()
{
	return;
}

Gear::~Gear()
{
}

std::string Gear::print()
{
	std::string printout;
	printout = name + '\t'
		+ std::to_string(weight) + " lbs \n"
		+ description;
	return printout;
}

Slots Gear::give_slot()
{
	return slot;
}
