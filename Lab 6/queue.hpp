/*********************************************************************
** File Name: queue.hpp
** Author: Edwin Rubio
** Date: 02/14/2016
** Description: queue.hpp is the specification file for queue.cpp 
*********************************************************************/
#ifndef QUEUE_H
#define QUEUE_H
#include <iostream>

class Queue
{
protected:
	// decalring the class for the list node
	struct node
	{
		int value;
		node *next;
		node(int value1, node *next1 = NULL)
		{
			value = value1;
			next = next1;
		}
	};
	node *head; // the node head pointer
public:
	Queue(){head = NULL;}; // constructor
	~Queue(); // destructor
	void add(int number); // adds integer to end of the list
	int remove();
	void print();
};

#endif