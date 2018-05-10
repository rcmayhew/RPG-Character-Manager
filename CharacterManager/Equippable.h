#pragma once
#include "Armor.h"
#include <memory>
#include <unordered_map>

// /typedefs for easier readiblity
// Element is for a weapon type and the interface class
typedef std::shared_ptr<Wearable> Gears;
// contianer to hold the drawn weapons
typedef std::vector<Gears> Worn;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Gears> GearBag;

class Equippable :
	public Stuff
{
private:
	// holds all the items that can be worn
	GearBag gear_bag;
	// the collection that holds the currently equipped gear
	Worn worn;
	// transfer number to slot
	Slots int_to_slot(int);
	// transfer slot to index of the vector
	int slots_to_int(Slots);
	// find Gears in the collection
	bool found(Gears a);
	// selects the pointer to an object of the same name
	Gears select(std::string);

public:
	//
	double total_weight();
	//  adds armor to the inventory
	void add_armor(Gears armor);
	// equips armor
	void equips_armor(Gears armor);
	Equippable();
	~Equippable();
};

