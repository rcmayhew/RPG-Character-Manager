#pragma once
#include "Gear.h"
// /this is for all wearable items that give armor class (shields and armor)
class Armor :
	public Gear
{
protected:
	ArmorType armor_type;
	int AC_bonus;
	int max_dex;
	int armor_check;
	int spell_fail;
	ArmorSpeed armor_speed;
public:
	Armor();
	
	// main constructor, calls the wearable constructor
	Armor(double weight, int quantity, std::string name, std::string description,
		int cost, ArmorType armort, int ACb, int maxd, int armorc,
		int spellf, ArmorSpeed armors);
	
	// prints out a description of the item
	virtual std::string print();

	// lowers the quantity of the item by one
	// is changed by wearable and weapons classes
	virtual void use();
	virtual ~Armor();
};
