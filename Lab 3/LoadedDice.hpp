/***********************************************************************************
** Program: LoadedDice.hpp
** Author: Edwin Rubio
** Description: LoadedDice.hpp is the spcification file header for LoadedDice class.
************************************************************************************/
#include "Dice.hpp" // brings in the dice specification header file. 

#ifndef LOADEDDICE_HPP
#define LOADEDDICE_HPP

class LoadedDice : public Dice // This indicates that LoadedDice class inherits from Dice base class
{
public:
	LoadedDice(); // default constructor
	LoadedDice(int sides); // overload constructor 
	int rollDie(); // this will override base class rollDie() member function
};

#endif