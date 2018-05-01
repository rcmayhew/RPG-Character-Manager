#pragma once
#include "Armor.h"
#include <memory>
#include <unordered_map>

///typedefs for easier readiblity
//Element is for a weapon type and the interface class
typedef std::shared_ptr<Wearable> Element;
//contianer to hold the drawn weapons
typedef std::vector<Element> Worn;
//unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Element> Container;

class Equippable :
	public Stuff
{
private:
	//holds all the items that can be worn
	Container container;
	//the collection that holds the currently equipped gear
	Worn worn;
	//transfer number to slot
	Slots int_to_slot(int);
	//transfer slot to index of the vector
	int slots_to_int(Slots);
	//find element in the collection
	bool found(Element a);

public:
	Equippable();
	~Equippable();
};

