#include "stdafx.h"
#include "Wearable.h"


Wearable::Wearable()
{
}

Wearable::Wearable(double weight, int uses, std::string name,
	std::string description, int cost, Slots slots) :
	Item(weight, uses, name, description, cost)
{
	slot = slots;
}


Wearable::~Wearable()
{
}
