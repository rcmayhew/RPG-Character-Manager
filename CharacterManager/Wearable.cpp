#include "stdafx.h"
#include "Wearable.h"


Wearable::Wearable()
{
}

Wearable::Wearable(double weight, int quantity, std::string name,
	std::string description, int cost, Slots slots) :
	Item(weight, quantity, name, description, cost)
{
	slot = slots;
}

void Wearable::add_armor()
{
	quantity++;
}

Wearable::~Wearable()
{
}
