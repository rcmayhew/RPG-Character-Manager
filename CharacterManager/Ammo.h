#pragma once
#include "Item.h"
#include <memory>
class Ammo :
	public Item
{
protected:
	RangedClass ranged_class;
	//speeds up reload
	//extra damage
public:
	Ammo();
	Ammo(double, int, std::string, std::string, int, RangedClass);
	//number of uses are the amount of arrows left
	virtual void use();
	void add_ammo();
	virtual ~Ammo();
	Ammo& operator+=(std::shared_ptr<Ammo>);
};

