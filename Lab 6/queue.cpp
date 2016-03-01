/*********************************************************************
** File Name: queue.cpp
** Author: Edwin Rubio
** Date: 02/14/2016
** Description: queue.cpp is the implementation file for queue.hpp 
*********************************************************************/
#include <iostream>
#include "queue.hpp"

Queue::~Queue() // destrucotr
{
	node *nodePtr = head;  //Start head of the list
	while (nodePtr != NULL) // if nodePtr contains an address it will execute, if not just return back
	{
		node *garbage = nodePtr;
		nodePtr = nodePtr->next; // move to the next node
		delete garbage; // deallocate memory
	}
}

void Queue::add(int number) // adds a number to the end of the queue list
{
	if (head == NULL) // if empty create a new node where head will be pointing too
		head = new node(number);
	else
	{	// the list is not empty and find the next empty space to add number
		node *nodePtr = head;
		while (nodePtr->next != NULL)
			nodePtr = nodePtr->next;
		
		nodePtr->next = new node(number); // store it in the space available
	}
}

int Queue::remove() //removes the last entered number
{
	node *nodePtr;
	int numRemoved;

	if (!head) // if no address in head
	{
		return head->value;
	}
	else
	{
		nodePtr = head; // pass the address of the head to nodePtr
		numRemoved = head->value; // copies the value going to be removed to numRemoved
		head = head->next; // goes to next pointer to be removed
		delete nodePtr; // Delete node
		return numRemoved;
	}
}

void  Queue::print() // traversing through the linked list
{
	node *nodePtr = head; // start at the head of the list
	while (nodePtr) // if there is an address keeep going
	{
		std::cout << nodePtr->value << std::endl; // print current node
		nodePtr = nodePtr->next; // move to the next node
	}
}