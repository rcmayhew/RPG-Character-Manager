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
	void add_item();
	double total_weight();
	Inventory();
	~Inventory();
};

