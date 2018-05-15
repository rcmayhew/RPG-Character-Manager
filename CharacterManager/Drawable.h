#pragma once
#include "Weapon.h"
#include <memory>
#include <unordered_map>

// /typedefs for easier readiblity
// Weapons is for a weapon type and the interface class
typedef std::shared_ptr<Weapon> Weapons;
// contianer to hold the drawn weapons
typedef std::vector<Weapons> Drawn;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Weapons> Sheaths;

// This is the class to manager and hold all items that are weapons. 
// Even though the class name is drawable, this class does not handle 
// items like wands and potions that are drawable but not weapons.
class Drawable :
	public Stuff
{
private:
	// this caontains and manages all weapons and trask weapons that are drawn
	// magic ativation will have its own caller
	Sheaths sheath;

	// this holds all weapons that are drawn
	// it should never be larger than 4
	// and should only be accessed with Hands enum
	Drawn drawn;

	// converts from class hands to size_t for its position in drawn
	int hand_to_int(Hands);

	// converts from int to hands
	Hands int_to_hands(int);

	// Returns the string for each hand slot
	std::string int_to_string(int index);
	
public:
	// check to see if an object is in the sheath
	bool found(Weapons);

	// add weapon to the sheath
	void add_weapon(Weapons a);

	Returns draw_weapons(Hands, Weapons);

	// checks and removes item if it is in the sheath
	Returns remove_weapon(Weapons a);

	// use weapon
	// NEEDS TO BE FIXED AFTER THE ATTACK CALLER CLASS IS BUILT
	int use_weapon_main();

	// use weapon
	Returns use_weapon_all();

	// print out the current weapons that are housed in the collection and that are drawn
	std::string print();

	// Returns a string holding all the drawn weapons
	std::string print_drawn();

	// Returns a string holding all weapons in inventory
	std::string print_sheath();

	// gives the total weight of all items in the collection
	virtual double total_weight();

	Drawable();
	virtual ~Drawable();
};

