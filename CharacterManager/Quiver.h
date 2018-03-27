#pragma once
#include "Stuff.h"
#include "Ammo.h"
#include <algorithm>
#include <unordered_map>
#include <memory>

///typedefs for easier readiblity
typedef std::shared_ptr<Ammo> Element;
//unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Element> Container;


//Class to hold all ammo that is used by a ranged weapon. Uses an unordered_map
//under the hood.
class Quiver :
	public Stuff
{
private:
	//The actual quiver that holds the ammo.
	//holds Element in an unordered map
	Container collection;

public:
	//adds ammo to the list, is called by add_item in the Inventory class
	void add_ammo(Element a);
	//makes sure the found element is in the map
	bool found(Element);
	//need to add
	//delete ammo
	//use ammo
	//find ammo for rangedtype
	Quiver();
	virtual ~Quiver();
};

