#pragma once
#include "Stuff.h"
#include "Weapon.h"
#include <memory>
#include <unordered_map>

///typedefs for easier readiblity
//Element is for a weapon type and the interface class
typedef std::shared_ptr<Weapon> Element;
//contianer to hold the drawn weapons
typedef std::vector<Element> Drawn;
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
	//test git
	//this caontains and manages all weapons and trask weapons that are drawn
	//magic ativation will have its own caller
	Container collection;
	//this holds all weapons that are drawn
	//if should never be larger than 4
	//and shoudl only be accessed with Hands enum
	Drawn drawn;

	//converts from class hands to size_t for its position in drawn
	int hand_to_int(Hands);

	//converts from int to hands
	Hands int_to_hands(int);

	//check to see if an object is in the collection
	bool found(Element);
	
public:
	//add weapon to the collection
	void add_weapon(Element a);

	Returns draw_weapons(Hands, Element);

	//checks and removes item if it is in the collection
	Returns remove_element(Element a);

	//use weapon
	//NEEDS TO BE FIXED AFTER THE ATTACK CALLER CLASS IS BUILT
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

