/*****************************************************************************
** Program: Game.cpp
** Author: Edwin Rubio
** Description: Game.cpp is the implemenation file for Game class.
******************************************************************************/
#include <iostream>
#include <cmath> // needed to do math operations
#include <cstdlib> // needed for srand and rand
#include "Game.hpp" // brings in Game header specifiaction file 
#include "Dice.hpp" // brings in Dice header specifiaction file 
#include "LoadedDice.hpp" // brings in LoadedDice header specifiaction file 

Game::Game() // default constructor
{
	rounds = 6;
	sides = 6;
	player1score = 0; 
	player2score = 0;
	draws = 0;
	
	Dice player1Dice; // default constructors creates a 6 sided dice
	Dice player2Dice; // default constructors creates a 6 sided dice
	int player1results[rounds]; // array to hold player 1 score
	int player2results[rounds]; // array to hold player 2 score
	
	for(int x = 0; x < rounds; x++) // roll players 1 dice six time and store the data in player1results array
	{
		player1results[x] = player1Dice.rollDie(); // calls dice rollDie () member function
	}
	
	for(int x = 0; x < rounds; x++) // roll players 2 dice six time and store the data in player2results array
	{
		player2results[x] = player2Dice.rollDie(); // calls dice rollDie () member function
	}
	
	for (int y = 0; y < rounds; y++) // display the results and each rounds rolls
	{
		std::cout << "Round " << y+1 << ": \n";
		std::cout << "Player 1 Rolled: " << player1results[y] << std::endl;
		std::cout << "Player 2 Rolled: " << player2results[y] << std::endl;
			
		if (player1results[y] >  player2results[y])
		{
			std::cout << "Player 1 won this round!\n" << std::endl;
			player1score++; // addpoint to player one for winning the round
		}
		
		else if (player1results[y] <  player2results[y])
		{
			std::cout << "Player 2 won this round!\n" << std::endl;
			player2score++; // addpoint to player two for winning the round
		}
		else
		{
			std::cout << "Its a draw!!!\n" << std::endl;
			draws++; // addpoint to draw
		}
	}
	
	// display the results
	std::cout << "Results: " << std::endl;
	std::cout << "Player 1: 6 sided regular dice score: " << player1score << std::endl;
	std::cout << "Player 2: 6 sided regular dice score: " << player2score << std::endl;
	
	if (player1score > player2score)
	{
		std::cout << "Player 1 is the winner!!" << std::endl;
	}
	
	else if (player1score < player2score)
	{
		std::cout << "Player 2 is the winner!!" << std::endl;
	}
	
	else
	{
		std::cout << "It's a draw!!!" << std::endl;
	}
	
}

Game::Game(int player1DieChoice, int player2DieChoice, int player1sides, int player2sides, int rounds) // Uses overload constructor when the user provides all the data for a custom game
{
	int player1results[rounds]; // holds player 1 score
	int player2results[rounds]; // holds player 2 score
	int player1score = 0; 
	int player2score = 0;
	int draws = 0;
	
	// allows player one to choose what type of dice it wants to use
	if (player1DieChoice == 1) 
	{
		Dice player1Dice(player1sides); // creates a loaded dice and uses it inherited constructor
		for(int x = 0; x < rounds; x++) // rolls the dice to the specified of rounds (rolls)
		{
			player1results[x] = player1Dice.rollDie(); // store players 1 results to player1results array
		}
	}
	
	else
	{
		LoadedDice player1LoadedDice(player1sides); // creates a loaded dice and uses it inherited constructor
		for(int x = 0; x < rounds; x++) // rolls the dice to the specified of rounds (rolls)
		{
			player1results[x] = player1LoadedDice.rollDie(); // store players 2 results to player1results array
		}
	}
	
	// allows player two to choose what type of dice it wants to use
	if (player2DieChoice == 1) 
	{
		Dice player2Dice(player2sides); // creates a loaded dice and uses it inherited constructor
		for(int x = 0; x < rounds; x++) // rolls the dice to the specified of rounds (rolls)
		{
			player2results[x] = player2Dice.rollDie(); // store players 1 results to player1results array
		}
	}
	
	else
	{
		LoadedDice player2LoadedDice(player2sides);// creates a loaded dice and uses it inherited constructor
		for(int x = 0; x < rounds; x++) // rolls the dice to the specified of rounds (rolls)
		{
			player2results[x] = player2LoadedDice.rollDie(); // store players 2 results to player1results array
		}
	}
	
	// displays the round results
	for (int y = 0; y < rounds; y++)
	{
		std::cout << "Round " << y+1 << ": \n";
		std::cout << "Player 1 Rolled: " << player1results[y] << std::endl;
		std::cout << "Player 2 Rolled: " << player2results[y] << std::endl;
		
		if (player1results[y] >  player2results[y])
		{
			std::cout << "Player 1 won this round!\n" << std::endl;
			player1score++;
		}
		
		else if (player1results[y] <  player2results[y])
		{
			std::cout << "Player 2 won this round!\n" << std::endl;
			player2score++;
		}
		
		else
		{
			std::cout << "Its a draw!!!\n" << std::endl;
			draws++;
		}
	}
	
	const std::string dType[] = {"NA", "regular", "loaded"}; // allows to converts the integer value to a readable word
	
	// Display the results
	std::cout << "Results: " << std::endl;
	std::cout << "Player 1 " << player1sides << " sided " << dType[player1DieChoice] << " dice score: " << player1score << std::endl;
	std::cout << "Player 2 " << player1sides << " sided " << dType[player2DieChoice] << " dice score: " << player2score << std::endl;
	
	if (player1score > player2score)
	{
		std::cout << "Player 1 is the winner!!" << std::endl;
	}
	
	else if (player1score < player2score)
	{
		std::cout << "Player 2 is the winner!!" << std::endl;
	}
	
	else
	{
		std::cout << "It's a draw!!!" << std::endl;
	}
	
	this->rounds = rounds;
}