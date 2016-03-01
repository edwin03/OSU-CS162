/*********************************************************************
** Program: main.cpp
** Author: Edwin Rubio
** Description: main.cpp uses the Dice, LoadedDice, and Game classes. 
**********************************************************************/
#include <iostream>
#include <fstream>
#include "LoadedDice.hpp" // brings in the LoadedDice specification file. 
#include "Dice.hpp" // brings in the Dice specification file. 
#include "Game.hpp" // brings in the Game specification file.

int main(){
	
int player1DiceChoice; // players 1 dice type selection variable
int player2DiceChoice; // players 2 dice type selection variable
int player1DiceSides; // players 1 dice number of sides variable
int player2DiceSides; // players 2 dice number of sides variable
int rounds; // the number of rounds (rolls) per player varible
int selection; // used for the menu selection

do
{
	std::cout << "\nWelcome to Lab 3! \n**Dice Game** \n";
	std::cout << "Please choose game type:\n 1. \"Regular (Fair) Dice (defaults)\"\n 2. \"Custom Dice\"\n 3. \"Exit\"\n" << std::endl; 
	std::cout << "Enter your selection: " << std::endl; 
	std::cin >> selection;
	while(std::cin.fail() || selection < 1 || selection > 3) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> selection;
		}
	
if (selection == 1) // user selected the default fair game
	Game playRegulatGame; // calls the default Game class constructor

else if (selection == 2)
{
	std::cout << "\nPlayer 1 - select dice type: \n 1. \"Regular Dice\"\n 2. \"Loaded Dice\"\n" << std::endl; 
	std::cout << "Enter your selection: " << std::endl; 
	std::cin >> player1DiceChoice;
	while(std::cin.fail() || player1DiceChoice < 1 || player1DiceChoice > 2) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> player1DiceChoice;
		}
	
	std::cout << "\nPlayer 1 - how many dice sides? " << std::endl;
	std::cin >> player1DiceSides;
	while(std::cin.fail() || player1DiceSides < 1) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> player1DiceSides;
		}
	
	std::cout << "\nPlayer 2 - select dice type: \n 1. \"Regular Dice\"\n 2. \"Loaded Dice\"\n" << std::endl;
	std::cout << "Enter your selection: " << std::endl; 
	std::cin >> player2DiceChoice;
	while(std::cin.fail() || player2DiceChoice < 1 || player2DiceChoice > 2) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> player2DiceChoice;
		}
	
	std::cout << "\nPlayer 2 - how many dice sides? " << std::endl;
	std::cin >> player2DiceSides;
	while(std::cin.fail() || player2DiceSides < 1) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> player2DiceSides;
		}
	
	std::cout << "\nHow many rounds? " << std::endl;
	std::cin >> rounds;
	while(std::cin.fail() || rounds < 1) // Makes sure that there is a valid input
		{
			std::cout << "Error, try again:" << std::endl;
			std::cin.clear();
			std::cin.ignore(256,'\n');
			std::cin >> rounds;
		}
	
	Game playGame(player1DiceChoice, player2DiceChoice, player1DiceSides, player2DiceSides, rounds); // calls the overloaded constructor
}

} while (selection != 3);

return 0;

}