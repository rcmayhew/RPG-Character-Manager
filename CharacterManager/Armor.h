#pragma once
#include "Wearable.h"
///this is for all wearable items that give armor class (shields and armor)
class Armor :
	public Wearable
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
	
	//main constructor, calls the wearable constructor
	Armor(double weight, int uses, std::string name, std::string description,
		int cost, ArmorType armort, Slots slot, int ACb, int maxd, int armorc,
		int spellf, ArmorSpeed armors);
	
	//prints out a description of the item
	virtual std::string print();

	//lowers the uses of the item by one
	//is changed by wearable and weapons classes
	virtual void use();
	virtual ~Armor();
};
