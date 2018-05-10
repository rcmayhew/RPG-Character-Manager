#include "stdafx.h"
#include "Quiver.h"


Quiver::Quiver()
{
}

Available Quiver::search_ammo(RangedClass given_type)
{
	Available able;
	// adds all ammo of a type so user can select the ammo/
	for (auto it : arrow_holder)
	{
		if (it.second->type() == given_type)
		{
			able.push_back(it.second);
		}
	}
	return able;
}

void Quiver::add_ammo(Ammos a)
{
	
	if (found(a))
	{
		// if the selected ammo is of the same name
		// then it add uses(ammor amount) to the item
		arrow_holder.at(a->print_name())->add_ammo(a);
	}
	else
	{
		// adds the item to the arrow_holder if
		// not found already in the arrow_holder
		arrow_holder.emplace(a->print_name(), a);
		if (!current) current = a;
	}
}

Returns Quiver::use_ammo()
{
	// assumes that the current ammo is the wanted ammo 
	// and works for the choosen ranged weapon
	int quantity_left = current->quantity_left();
	current->use();
	// deletes ammo that is used up
	if (quantity_left == 1)
	{
		arrow_holder.erase(current->print_name());
		current = arrow_holder.begin()->second;
		return Returns::Used;
	}
	return Returns::Exist;

	
}

Returns Quiver::select_ammo(Ammos a)
{
	if (found(a))
	{
		current = a;
		return Returns::Exist;
	}
	return Returns::Error;
	
}

void Quiver::remove_ammo(Ammos a)
{
	arrow_holder.erase(a->print_name());
}

void Quiver::remove_ammo(std::string name)
{
	arrow_holder.erase(name);
}

bool Quiver::found(Ammos a)
{
	if (arrow_holder.find(a->print_name()) == arrow_holder.end()) return false;
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

	
	if (arrow_holder.size() < 2)
	{
		printout += "No other ammo in quiver.";
		return printout;
	}
	printout += line + "Other ammo in quiver:";
	for (auto it : arrow_holder)
	{
		if (it.first == current->print_name()) continue;
		printout += '\n' + it.second->print_name() + '\t' + std::to_string(it.second->quantity_left());
	}
	return printout;
}

double Quiver::total_weight()
{
	double ret = 0;
	for (auto it : arrow_holder)
	{
		ret += it.second->total_weight();
	}
	return ret;
}

Quiver::~Quiver()
{
}
