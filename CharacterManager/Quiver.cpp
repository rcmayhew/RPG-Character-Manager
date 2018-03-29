#include "stdafx.h"
#include "Quiver.h"


Quiver::Quiver()
{
}

Available Quiver::search_ammo(RangedClass given_type)
{
	Available able;
	//adds all ammo of a type so user can select the ammo/
	for (auto it : collection)
	{
		if (it.second->type() == given_type)
		{
			able.push_back(it.second);
		}
	}
	return able;
}

void Quiver::add_ammo(Element a)
{
	
	if (found(a))
	{
		//if the selected ammo is of the same name
		//then it add uses(ammor amount) to the item
		collection.at(a->print_name())->add_ammo(a);
	}
	else
	{
		//adds the item to the collection if
		//not found already in the collection
		collection.emplace(a->print_name(), a);
		if (!current) current = a;
	}
}

Returns Quiver::use_ammo()
{
	//assumes that the current ammo is the wanted ammo 
	//and works for the choosen ranged weapon
	int uses_left = current->uses_left();
	current->use();
	//deletes ammo that is used up
	if (uses_left == 1)
	{
		collection.erase(current->print_name());
		current = collection.begin()->second;
		return Returns::Used;
	}
	return Returns::Exist;

	
}

Returns Quiver::select_ammo(Element a)
{
	if (found(a))
	{
		current = a;
		return Returns::Exist;
	}
	return Returns::Error;
	
}

void Quiver::remove_element(Element a)
{
	collection.erase(a->print_name());
}

void Quiver::remove_element(std::string name)
{
	collection.erase(name);
}

bool Quiver::found(Element a)
{
	if (collection.find(a->print_name()) == collection.end()) return false;
	return true;
}

RangedClass Quiver::type()
{
	return current->type();
}

std::string Quiver::print()
{
	std::string line = "================================================================================";
	if (!current) return "Quiver empty, you have no ammo.";
	std::string printout;
	printout = "Current ammo used: \n"
		+ current->print() + '\n';

	
	if (collection.size() < 2)
	{
		printout += " \nNo other ammo in quiver.";
		return printout;
	}
	printout += line + "\nOther ammo in quiver:";
	for (auto it : collection)
	{
		if (it.first == current->print_name()) continue;
		printout += '\n' + it.second->print_name() + '\t' + std::to_string(it.second->uses_left());
	}
	return printout;
}

double Quiver::total_weight()
{
	double ret = 0;
	for (auto it : collection)
	{
		ret += it.second->total_weight();
	}
	return ret;
}

Quiver::~Quiver()
{
}
