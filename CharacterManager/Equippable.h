#pragma once
#include "Armor.h"
#include <memory>
#include <unordered_map>

// /typedefs for easier readiblity
// Element is for a weapon type and the interface class
typedef std::shared_ptr<Gear> Gears;
// contianer to hold the drawn weapons
typedef std::vector<Gears> Worn;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Gears> GearBag;


// Need to add use for slotless items
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
	
	// selects the pointer to an object of the same name
	Gears select(std::string);
	
	// changes the enum class to a string name of the slot
	std::string slots_to_string(Slots slot);

public:
	// find Gears in the collection
	bool found(Gears a);
	
	// returns the total weight of all objects taht it manages
	double total_weight();
	
	//  adds armor to the inventory
	void add_armor(Gears armor);
	
	/////////////////////////////
	void equips_armor(Gears armor);
	
	//gives a print out of all objects in the gear_bag
	std::string print();
	
	// Returns a string of all gear that is being worn
	// All items worn are also in the gear bag
	std::string print_worn();
	
	// Returns string that has all items in the gear bag
	std::string print_gear_bag();
	Equippable();
	~Equippable();
};

