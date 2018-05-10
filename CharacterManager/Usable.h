#pragma once
#include "Stuff.h"
#include "Multi.h"
#include <memory>
#include <unordered_map>

// /typedefs for easier readiblity
// Element is for a weapon type and the interface class
typedef std::shared_ptr<Item> Items;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Items> Backpack;

class Usable :
	public Stuff
{
private:
	Backpack backpack;
	bool found(Items a);
public:
	double total_weight();
	void add_item(Items a);
	Usable();
	virtual ~Usable();
};

