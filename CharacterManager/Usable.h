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
	// holds the items
	Backpack backpack;
public:
	// returns true if the object is in the back pack
	bool found(Items a);
	
	// gives a print out of all objects in the backpack
	std::string print();
	
	// returns the total weight of all objects in the backpack
	double total_weight();
	
	// add an item to the backpack
	void add_item(Items a);
	
	// default constructor
	Usable();
	virtual ~Usable();
};

