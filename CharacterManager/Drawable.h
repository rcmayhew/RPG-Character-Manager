#pragma once
#include "Stuff.h"
#include "Weapon.h"
#include <memory>
#include <unordered_map>

///typedefs for easier readiblity
//Element is for a weapon type and the interface class
typedef std::shared_ptr<Weapon> Element;
//unordered_map that uses the Element name for the key
typedef std::unordered_map<std::string, Element> Container;
//vecotr of all ammor that can be used with current weapon
typedef std::vector <Element> Available;
class Drawable :
	public Stuff
{
private:
	//this caontains and manages all weapons and trask weapons that are drawn
	//magic ativation will have its own caller
	Container collection;
	Element main_hand = nullptr;
	//most creatures only have 2 hands
	Element off_hand_1 = nullptr;
	//nobody has more than 4 hands
	Element off_hand_2 = nullptr;
	Element off_hand_3 = nullptr;

public:
	Drawable();
	virtual ~Drawable();
};

