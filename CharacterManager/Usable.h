#pragma once
#include "Stuff.h"
#include "Multi.h"
#include <memory>
#include <unordered_map>

// /typedefs for easier readiblity
// Element is for a weapon type and the interface class
typedef std::shared_ptr<Item> Element;
// unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Element> Backpack;

class Usable :
	public Stuff
{
private:
	Backpack backpack;
	bool found(Element a);
public:
	double total_weight();
	void add_item(Element a);
	Usable();
	virtual ~Usable();
};

