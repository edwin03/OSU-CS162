/********************************************************
** Program: Game.cpp
** Author: Edwin Rubio
** Description: Game class implemenation file.
********************************************************/
#include "Game.hpp"   // Brings in the Game.hpp specification file
#include "Room.hpp"  // Brings in the Room.hpp specification file
#include "PressRoom.hpp"  // Brings in the pressRoom.hpp specification file
#include "GuestBath.hpp"  // Brings in the guestBath.hpp specification file
#include "Door.hpp"  // Brings in the Door.hpp specification file
#include "SittingArea.hpp"  // Brings in the SittingArea.hpp specification file
#include "MasterBedroom.hpp"  // Brings in the MasterBedroom.hpp specification file
#include "Player.hpp"  // Brings in the Player.hpp specification file
#include <string>
#include <iostream>
#include <unistd.h>

/********************************************************
 ** Function: Game ()
 ** Description: constructor
 ** Parameters: None
 ********************************************************/
Game::Game()
{
    pressRoom = new PressRoom();
    guestBath = new GuestBath();
    door = new Door();
    sittingArea = new SittingArea();
    masterBedroom = new MasterBedroom();
    
    player = new Player();
    
    pressRoom->setUp(guestBath);
	pressRoom->setDown(door);
	pressRoom->setLeft(sittingArea);
	pressRoom->setRight(masterBedroom);
    
    guestBath->setUp(pressRoom);
	guestBath->setDown(door);
	guestBath->setLeft(sittingArea);
	guestBath->setRight(masterBedroom);
    
    door->setUp(pressRoom);
	door->setDown(guestBath);
	door->setLeft(sittingArea);
	door->setRight(masterBedroom);
	
	sittingArea->setUp(pressRoom);
	sittingArea->setDown(guestBath);
	sittingArea->setLeft(door);
	sittingArea->setRight(masterBedroom);
	
	masterBedroom->setUp(pressRoom);
	masterBedroom->setDown(guestBath);
	masterBedroom->setLeft(door);
	masterBedroom->setRight(sittingArea);
    
    player->setLocation(sittingArea);
}


/********************************************************
 ** Function: start ()
 ** Description: Starts the game
 ** Parameters: None
 ********************************************************/
int Game::start()
{
    return play();
}


/********************************************************
 ** Function: play ()
 ** Description: play
 ** Parameters: None
 ********************************************************/
int Game::play()
{
    Room *current_location;
    GameStatus status;
    
    do
    {
        current_location = player->getLocation(); // prints current location
        status = current_location->enterRoom(player);
    }while(status == KEEP_PLAYING);
    
    
    //Output win/lose dialogue
    if(status == ESCAPED)
        Game::win();
    else if(status == OUT_OF_TIME)
        Game::lose();
    
    return 0;
}

/********************************************************
 ** Function: win ()
 ** Description: executes when einning the game.
 ** Parameters: None
 ********************************************************/
void Game::win()
{
    std::cout << "\n\n*****You successfully opened the door! Now enjoy the fresh air!***** \n\n";
	std::cout << "END\n";
}

/********************************************************
 ** Function: lose ()
 ** Description: executes when player loses.
 ** Parameters: None
 ********************************************************/
void Game::lose()
{
    std::cout << "\nTime Ran Out! You are out of breath!\nGAME OVER\n";
}