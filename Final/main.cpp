/********************************************************
** Program: main.cpp
** Author: Edwin Rubio
** Description: Final project - A text based game. 
********************************************************/
#include <iostream>
#include <cstdlib> // Library used to refresh screen
#include <unistd.h> // usleep () function
#include "Game.hpp" // brings in the Game.hpp specification file
#include "Room.hpp" // brings in the Room.hpp specifiation file

int main()
{
	int choice; //

    Game start; 
	system("clear"); // clear the screen
    std::cout << "========================FINAL PROJECT========================" << std::endl;
	std::cout << "\t\t     *THE PARTY BUS GAME*" << std::endl;              
    std::cout << "\t\t   /ymMmoooooooooooooooNMmy:" << std::endl;             
    std::cout << "\t\t `mMMMMd:-------------:mMMMMh" << std::endl;            
    std::cout << "\t\t +MMhooooooooooooooooooooodMM:" << std::endl;           
    std::cout << "\t\t yMM`                     .MMo" << std::endl;           
    std::cout << "\t\t NMd                       mMd" << std::endl;           
    std::cout << "\t\t-MMo                       sMM`" << std::endl;          
    std::cout << "\t\t+MM-                       /MM:" << std::endl;          
    std::cout << "\t\thMM                        .MMo" << std::endl;          
    std::cout << "\t\thMMmdddddddddddddddddddddddmMMs" << std::endl;          
    std::cout << "\t\thMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs" << std::endl;          
    std::cout << "\t\thMMMmmMMMMMMMMMMMMMMMMMMMmmMMMs" << std::endl;          
    std::cout << "\t\thMm.  .mMMMMMMMMMMMMMMMd`  -NMs" << std::endl;          
    std::cout << "\t\thMm-  -NMMMMMMMMMMMMMMMd.  :NMs" << std::endl;          
    std::cout << "\t\thMMMNNMMMMMMMMMMMMMMMMMMMNNMMMs" << std::endl;          
    std::cout << "\t\thMMMMMMMMMMMMMMMMMMMMMMMMMMMMMs" << std::endl;          
    std::cout << "\t\t/osMMMMsoooooooooooooooyMMMMoo:" << std::endl;          
    std::cout << "\t\t  -MMMM.               :MMMM" << std::endl;             
	
	std::cout << "MAIN MENU" << std::endl;
	std::cout << "1. Enter the PARTY BUS (New Game)" << std::endl;
	std::cout << "2. EXIT" << std::endl;
	std::cout << "Selection: ";
	std::cin >> choice;
	while(std::cin.fail() || choice <= 0 || choice >= 3) // Makes sure that there is a valid input
	{
		std::cout << "Error, Selection:" << std::endl;
		std::cin.clear();
		std::cin.ignore(256,'\n');
		std::cin >> choice;
	}
	
	// Clear the buffer
	std::cin.clear();
	std::cin.ignore(256,'\n');
	
	switch (choice)
	{
		case 1:
			system("clear"); // clear the screen
			std::cout << "Welcome to the Party Bus!" << std::endl;
			std::cout << "\n*****1 Day Before*****\n" << std::endl;
			std::cout << "On Thurday, your best friend approches you during CS162 and invites you to a party bus on friday night. " 
					  << "Without any hesitation you accept since you don't have anything to do." << std::endl;
			std::cout << "\nPress ENTER to CONTINUE\n";
			std::cin.get();
			std::cout << "*****Friday*****\n" << std::endl;
			std::cout << "It's friday night and you entered to a non-typical party bus, " 
					  << "and you noticed that is the wrong party bus. " 
					  << "Since it has many rooms and monitors showing video feed from all the IP cameras "
					  << "that are attached to spying drones. Without thinking twice you tried to get out of the bus, " 
					  << "but the doors are LOCKED." << std::endl;
			std::cout << "\nPress ENTER to CONTINUE\n";
			std::cin.get();
			std::cout << "Intercom Speaker: THIS DOOR IS CLOSED UNTIL SECURITY MEASURES ARE MET! " << std::endl;
			std::cout << "HINT: Find the items to open the door. \n"; 
			std::cout << "\nPress ENTER to CONTINUE";
			std::cin.get();
			start.start();
			break;
		case 2:
			std::cout << "Bye Bye!" << std::endl;
			return 0;
	}
    return 0;
}