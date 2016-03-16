/********************************************************
** Program: PressRoom.hpp
** Author: Edwin Rubio
** Description: PressRoom.hpp specificaiton file.
********************************************************/
#ifndef PRESSROOM_HPP
#define PRESSROOM_HPP
#include "Room.hpp" // brings in the Room.hpp spcification file
#include "Player.hpp" // brings in the Player.hpp specification file

class PressRoom : public Room // PressRoom class inherits from Room class
{
    private:
        bool videoTape;
        void printMenu();
    
    public:
        PressRoom() : Room("Press Room") // calls the Room's constructor to set the rooms name, and uses its own constructor to set videoTape
        {
            videoTape = false;
        }
    
        GameStatus enterRoom(Player *player);
};

#endif
