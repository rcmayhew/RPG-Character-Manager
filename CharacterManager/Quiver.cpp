#include "stdafx.h"
#include "Quiver.h"


Quiver::Quiver()
{
}

Available & Quiver::search_ammo(RangedClass given_type)
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
		//then it add uses to the item
		*(collection.at(a->print_name())) += a;
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
		collection.erase(current->print_name);
		current = collection.begin()->second;
	}
	
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
	if (!current) return "Quiver empty, you have no ammo";
	std::string printout;
	printout = "current ammo used: "
		+ current->print()
		+ "all other ammo in quiver:" + '\n';
	for (auto it : collection)
	{
		if (it.first != current->print_name()) continue;
		printout += it.second->print_name() + '\n';
	}
	return printout;
}

Quiver::~Quiver()
{
}
