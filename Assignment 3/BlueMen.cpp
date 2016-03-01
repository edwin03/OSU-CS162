/**************************************************************************************
** Program Filename: BlueMen.cpp
** Author: Edwin Rubio
** Description: BlueMen.cpp is the is the implementation of BlueMen.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "BlueMen.hpp"
#include <iostream>
#include <string>

BlueMen::BlueMen()
{
	creatureName = "Blue Men"; // to help distinguish the characters
	attackDieSides = 10; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 3; // the number of time the defense dice will be rolled
	armor = 3; // constant value
	strengthPoints = 12; // life meter
	alive = true;
};

void BlueMen::Defend(int attackPoints)
{
	Dice dice (defenseDieSides);
	int defensePoints = 0;
	
	for (int x = 0; x < nDefenseRolls; x++)
	{
		defensePoints += dice.rollDie();
		
	}
	std::cout << "Defender points: " << defensePoints << std::endl;
	int damage = 0;
	damage = attackPoints - defensePoints - armor;
	
	if (damage <= 0)
	{
		strengthPoints = strengthPoints;
	}
	else
	{
		strengthPoints = strengthPoints - damage;
		
		if (strengthPoints <= 8 && strengthPoints > 4)
		{
			nDefenseRolls = 2;
			std::cout << "Subraacted one from the defense roll: " << nDefenseRolls << std::endl;
		}
		if (strengthPoints <= 4 && strengthPoints > 0)
		{
			nDefenseRolls = 1;
			std::cout << "Subraacted one from the defense roll: " << nDefenseRolls << std::endl;
		}
		std::cout << "defense rolls:  " << nDefenseRolls << std::endl;
	}
	
	std::cout << "Damage inflicted: " << damage << std::endl;

	std::cout << "Defender's Strength Points: " << strengthPoints << std::endl;
	
	if(strengthPoints <= 0)
    {
		std::cout << "Blue Man class: Youre Dead!" << std::endl;
        alive = false;
    }
};

void BlueMen::Reset()
{
	creatureName = "Blue Men"; // to help distinguish the characters
	attackDieSides = 10; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 3; // the number of time the defense dice will be rolled
	armor = 3; // constant value
	strengthPoints = 12; // life meter
	alive = true;
};