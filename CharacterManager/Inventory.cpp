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

void Inventory::add_item(Weapons weapon)
{
	drawable.add_weapon(weapon);
}

void Inventory::add_item(Gears gears)
{
	equippable.add_armor(gears);
}

void Inventory::add_item(Items items)
{
	usable.add_item(items);
}

void Inventory::add_item(Ammos ammos)
{
	quiver.add_ammo(ammos);
}

std::string Inventory::print_contents()
{
	return drawable.print_sheath() + equippable.print_gear_bag()
		+ usable.print() + quiver.print();
}

std::string Inventory::print_status()
{
	return drawable.print_drawn() + equippable.print_worn()
		+ quiver.print();
}