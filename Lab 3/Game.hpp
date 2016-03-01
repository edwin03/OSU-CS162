/***************************************************************************
** Program: Game.hpp
** Author: Edwin Rubio
** Description: Game.hpp is the spcification file header for the Game class.
****************************************************************************/
#include <iostream>
#include "Dice.hpp" // brings in the dice specification header file. 
#include "LoadedDice.hpp" // brings in the dice specification header file.
#ifndef GAME_HPP
#define GAME_HPP


class Game
{
	private:
		
		int sides; // stores dice number of sides
		int rounds; // stores the number of rounds (rolls)
		int player1score; // holds player 1 score
		int player2score; // holds player 2 score
		int draws; // stores draw rolls score
		
	public:
		Game(); // this will create a default player profile
		Game(int, int, int, int, int); // overload constructor that takes in the game details
};

#endif