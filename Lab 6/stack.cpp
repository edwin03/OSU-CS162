/*********************************************************************
** File Name: stack.cpp
** Author: Edwin Rubio
** Date: 02/14/2016
** Description: stack.cpp is the implementation file for stack.hpp 
*********************************************************************/
#include <iostream>
#include "stack.hpp"

Stack::~Stack() // destructor
{
	node *nodePtr = head;  // start head of the list
	while (nodePtr != NULL)
	{
		node *gargabe = nodePtr; // make garbage point to the beginning of the list
		nodePtr = nodePtr->next; // points to the next node
		delete gargabe; // deletes the node
	}
}

void Stack::add(int number) // adds node linka
{
	if (head == NULL) // if it is empty
		head = new node(number);
	else // else there are numbers already
	{
		head = new node(number, head);
	}
}

int Stack::remove() //removes the last number entered 
{
	node *nodePtr;
	int numRemoved;

	if (!head) // when reached the end of the list
	{
		return head->value;
	}
	else
	{
		nodePtr = head; // make nodePtr point the head node list
		numRemoved = head->value;
		head = head->next; // goes to the next list node
		delete nodePtr; // Delete node
		return numRemoved; // retruns the number removed
	}
}

void  Stack::print() // prints the list by traversing
{
	node *nodePtr = head; // make nodePtr point to the beginning of the linked list 
	while (nodePtr) // if there is an address stored read valude, if not no more nodes to be displaed
	{
		std::cout << nodePtr->value << std::endl;
		nodePtr = nodePtr->next;
	}
}