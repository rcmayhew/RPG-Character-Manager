#pragma once
#include "Item.h"
#include <memory>
class Ammo :
	public Item
{
protected:
	RangedClass ranged_class;
	// speeds up reload
	// extra damage
public:
	Ammo();
	Ammo(double, int, std::string, std::string, int, RangedClass);
	// number of quantity are the amount of arrows left
	virtual void use();
	void add_ammo(std::shared_ptr<Ammo> lhs);
	void add_ammo();
	virtual ~Ammo();
	virtual double total_weight();
	RangedClass type();
	Ammo& operator+=(std::shared_ptr<Ammo>);
	virtual std::string print();
};

