/**************************************************************************************
** Program Filename: HarryPotter.cpp
** Author: Edwin Rubio
** Description: HarryPotter.cpp is the is the implementation of HarryPotter.hpp file. 
***************************************************************************************/
#include "Creature.hpp"
#include "Dice.hpp"
#include "HarryPotter.hpp"
#include <iostream>
#include <string>

HarryPotter::HarryPotter()
{
	creatureName = "Harry Potter"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 2; // the number of time the defense dice will be rolled
	armor = 0; // constant value
	strengthPoints = 10; // life meter
	lives = 2; // harry potter will have two lives how lucky is he
	alive = true;
};

void HarryPotter::Defend(int attackPoints)
{
	Dice dice (defenseDieSides);
	int defensePoints = 0;
	int damage = 0;
	
	for (int x = 0; x < nDefenseRolls; x++)
	{
		defensePoints += dice.rollDie();
		
	}
	std::cout << "Defender's total defend points: " << defensePoints << std::endl;
	damage = attackPoints - defensePoints - armor;
	
	if (damage <= 0)
	{
		strengthPoints = strengthPoints;
	}
	else
	{
		strengthPoints = strengthPoints - damage;
	}
	
	if (strengthPoints <= 0 && lives > 1)
	{
		strengthPoints = 20; 
		lives = 1;
	}
	
	std::cout << "Damage inflicted: " << damage << std::endl;

	std::cout << "Defender's Strength Points: " << strengthPoints << std::endl;
	
	if(strengthPoints <= 0)
    {
		std::cout << "Defender is dead!" << std::endl;
        alive = false;
    }
};

void HarryPotter::Reset()
{
	creatureName = "Harry Potter"; // to help distinguish the characters
	attackDieSides = 6; // the number sides in a attack dice
	nAttackRolls = 2; // the number of times the attack dice will be rolled
	defenseDieSides = 6; // the number of sides in a defense dice
	nDefenseRolls = 2; // the number of time the defense dice will be rolled
	armor = 0; // constant value
	strengthPoints = 10; // life meter
	lives = 2; // harry potter will have two lives how lucky is he
	alive = true;
};


