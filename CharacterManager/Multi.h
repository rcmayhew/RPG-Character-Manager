#pragma once
#include "Item.h"
// this is for all items that have mulitple uses per item
// assumes that you use item linearly
// and has no support for mulitple partially used items
class Multi :
	public Item
{
private:
	int uses;
	int max_uses;
	// Will handle when the quanity is zero
	// will over ride the uses left if no quantity left
	void lower_quantity();
public:
	virtual double total_weight();
	// lowers the quantity of the item by one
	// is changed by wearable and weapons classes
	virtual void use();
	// prints out the quantity left
	// not changed by the wearabel and weapons class,
	// so for those classes it prints out the number of duplicates
	int total_uses_left();
	// prints out a description of the item
	virtual std::string print();
	Multi();
	virtual ~Multi();
};

