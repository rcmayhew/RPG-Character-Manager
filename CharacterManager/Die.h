#pragma once
#include <string>
#include <chrono>
#include <random>
// This class is for rolling multiple of the same die. If there are more than
// one die size, there will need to be more than one class of die.
class Die
{
private:
	// gives the equal distribution to simulate dice
	std::uniform_int_distribution<int> random;
	// the actaul generator that has been seeded
	std::default_random_engine generator;
	// the number of same die
	int num_of_dice;
	//name of die
	std::string name;
	
	/// private member function
	// rolls the dice each time
	int roll_single();
public:
	// constructor will default to 1d20 or a 20 sided die
	Die();
	// first parameter is the number of dice, the second is the size
	Die(int, int);
	~Die();
	// totals the dice that were rolled
	int roll();
	// allows printing of dice
	std::string print_name();
};

