#pragma once
#include "Stuff.h"
#include "Drawable.h"
#include "Equippable.h"
#include "Usable.h"
#include "Quiver.h"
class Inventory :
	public Stuff
{
private:
	Drawable drawable;
	Equippable equippable;
	Usable usable;
	Quiver quiver;
public:
	// needs to handle everytime of item
	void add_item(Weapons);
	void add_item(Gears);
	void add_item(Items);
	void add_item(Ammos);
	double total_weight();
	std::string print();
	Inventory();
	~Inventory();
};

