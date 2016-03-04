/**************************************************************************
** File Name: structure.cpp
** Author: Edwin Rubio
** Date: 02/28/2016
** Description: structure.cpp is the implementation file for structure.hpp 
***************************************************************************/
#include <iostream>
#include "structure.hpp"
#include "Creature.hpp"

/*********************************************************************
** Function: remove()
** Description: takes off the object on top of the stack. 
** Parameters: None
*********************************************************************/
Creature* Structure::remove()
{
	Node *nodePtr;
	Creature *c;

	nodePtr = head;
	c = head->player;
	head = head->next;
	delete nodePtr;
	return c;
}

/*********************************************************************
** Function: isEmpty()
** Description: indicates if the list is empty.  
** Parameters: None
*********************************************************************/
bool Structure::isEmpty()
{
	return head == NULL;
}
