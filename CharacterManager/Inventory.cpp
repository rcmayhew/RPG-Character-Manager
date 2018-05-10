#include "stdafx.h"
#include "Inventory.h"

double Inventory::total_weight()
{
	return drawable.total_weight() + equippable.total_weight()
		+ usable.total_weight() + quiver.total_weight();
}

Inventory::Inventory()
{
}


Inventory::~Inventory()
{
}
