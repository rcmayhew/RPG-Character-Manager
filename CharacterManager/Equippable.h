#pragma once
#include "Stuff.h"
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
public:
	Equippable();
	~Equippable();
};

