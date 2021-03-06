#pragma once
#include "Item.h"
#include <memory>
// /base class to all items that are used to attack with unlimited uses
// /parent class to melee and ranged class
class Weapon :
	public Item
{
protected:
	// weapon damage
	Die base_damage;
	// size of weapon
	Size size = Size::Medium;
	// weapon proficiency requires to wield weapon
	WClass wclass;
	// the type of regular damage done
	DamageType damagetype;
	
	// if there is a attack bonus like master work
	int attack_bonus;
	// range of the weapon
	int range;
	// bonus damage like weapon specialization
	int bonus_damage = 0;
	// the range of the crit from 20
	int crit_chance = 1;
	// the amount of times that the damage is rerolled on a crit
	unsigned int crit;
	// magical damage

public:
	// default constructor. builds nothing
	Weapon();
	// constructor that is used by the inherited classes. Calls the Item constructor
	Weapon(Die die, DamageType dt, Size s, WClass wc, int crit_mult, 
		int crit_range, int att_bon, int wep_range, int bon_dam, 
		double pounds, int cost, int quantity, std::string wep_name, std::string d);
	// using shared pointers so not will be called
	virtual ~Weapon();
	
	// the base attack
	virtual int attack();
	// attacks and checks if there is a crit
	virtual int attack(bool & critical);
	// the base damage roll 
	virtual int damage(int str_mod);
	// the main damage call and calls the other damage function
	virtual int damage(bool critical, int str_mod);
	// returns the weight times the qualtiy, giving the total weight
	virtual double total_weight();

	// adds a use to tehy item to signify that the quantiy has increased
	void add_weapon();
	
	// the virtual function to call print and makes the class pure virtual
	virtual std::string print() = 0;
	// prints the crit for the inherited classes print() functions
	std::string print_crit();
};
