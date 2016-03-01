/**************************************************************************************
** Program Filename: Barbarian.hpp
** Author: Edwin Rubio
** Description: Barbarian.hpp is the specification file for Barbarian.cpp that creates
** a Barbarian creature object.
***************************************************************************************/
#ifndef BARBARIAN_HPP
#define BARBARIAN_HPP
#include <string>
#include "Creature.hpp"

class Barbarian : public Creature // inherits from creature
{
	protected:
	
	public:
	Barbarian(); // constuctor
	void Reset(); // resets object to default
};

#endif