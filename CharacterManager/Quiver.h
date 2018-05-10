#pragma once
#include "Ammo.h"
#include <memory>
#include <unordered_map>

// typedefs for easier readiblity
typedef std::shared_ptr<Ammo> Ammos;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Ammos> ArrowHolder;
// vecotr of all ammo that can be used with current weapon
typedef std::vector <Ammos> Available;

// /need to add a firmer interface for the caller
// Class to hold all ammo that is used by a ranged weapon. quantity an unordered_map
// under the hood.
class Quiver :
	public Stuff
{
private:
	// The actual quiver that holds the ammo.
	// holds Ammos in an unordered map
	ArrowHolder arrow_holder;
	
	// current ammo type that wants to be used. 
	// will be used first
	Ammos current = nullptr;

public:
	// adds ammo to the list, is called by add_item in the Inventory class
	void add_ammo(Ammos a);
	
	// makes sure the found Ammos is in the map
	bool found(Ammos);
	
	// removes an elment by object
	// /needs to change return type to Returns
	void remove_ammo(Ammos a);
	
	// removes an elment by stirng
	void remove_ammo(std::string);
	
	// use ammo
	Returns use_ammo();
	
	// select specific ammo for use
	Available search_ammo(RangedClass);

	// should only select ammo that is in the arrow_holder
	Returns select_ammo(Ammos);
	
	// find ammo for rangedtype
	// returns rangedtype for attack caller function
	RangedClass type();

	// prints out the current and all the other ammo in the quiver
	std::string print();

	// prints out the total weight of the quiver
	virtual double total_weight();

	// starts out empty
	Quiver();
	virtual ~Quiver();
};

