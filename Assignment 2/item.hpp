/******************************************************************************
** Program Filename: item.hpp
** Author: Edwin Rubio
** Description: item.hpp is the specification file that creates an item.
*******************************************************************************/
#ifndef ITEM_HPP
#define ITEM_HPP

#include <string>

class Item
{
    private:
        std::string name; // item name 
        std::string unit; // units e.g. can, box, pounds or ounces
        double numToBuy; // quantity
        double unitPrice; // item price
        double total; // stores the item total cost = numToBuy x unitPrice; 

    public:
	Item(); // default constructor
        Item(std::string, std::string, int, double); // overloaded constructor
        std::string getName(); // passes current item's name
        std::string getUnit(); // passes current item's unit
        double getNumToBuy(); // passes current item's quantity
        double getUnitPrice(); // passes current item's price
        double getTotal(); // passes current item's total price
        void print(); // print item's information
};

#endif
