/******************************************************************************
** Program Filename: list.hpp
** Author: Edwin Rubio
** Description: list.hpp is the specification file that will hold all items
** inside a dynamic array in a List object.
*******************************************************************************/
#ifndef LIST_HPP
#define LIST_HPP

#include <fstream>
#include <string>
#include "item.hpp" // brings in the item class


class List
{
    private:
	int counter; // will keep track of items being enterd to the shopList object dynamic array
    	int memSize; // this value will increase if more memory is needed to be allocated
	Item *shopList; // this will point to the shopList address that hold items being entered
    public:
        List(); // default constructor
        void addItem(Item); // adds them items to the dynamic array
        void deleteItem(int); // deletes the selected item from the list
        int getCount(); // returns the number of items that are in the list
        double getTotalCost(); // adds all the extended prices for each item to displays the grand total for all the list. 
	void printList(); // prints the entire list to the console
	bool operator==(std::string); // this overloads the "==" operator to compare to see if the item name already exsits in the list. 
};

#endif
