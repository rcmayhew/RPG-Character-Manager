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

//This is the class to manager and hold all items that are weapons. 
//Even though the class name is drawable, this class does not handle 
//items like wands and potions that are drawable but not weapons.
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
	//add weapon to the collection
	void add_weapon(Element a);

	//draws a into the main hand
	Returns main_draw(Element a);
	
	//draws a into the first offhand hand
	Returns off_draw1(Element a);
	
	//draws a into the second offhand hand
	Returns off_draw2(Element a);
	
	//draws a into the third offhand hand
	Returns off_draw3(Element a);

	//check to see if an object is in the collection
	bool found(Element);

	//checks and removes item if it is in the collection
	Returns remove_element(Element a);

	//use weapon
	int use_weapon_main();

	//use weapon
	Returns use_weapon_all();

	//print out the current weapons that are housed in the collection and that are drawn
	std::string print();

	//gives the total weight of all items in the collection
	virtual double total_weight();

	Drawable();
	virtual ~Drawable();
};

