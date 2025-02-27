#pragma once
#ifndef __QUEUE__HPP
#define __QUEUE__HPP

#include "Exceptions.h"
#include "stack.h"

//Queues are going to be filled with Stacks
template<class T>
class Queue {
private:
    int SIZE = 0;
	T **words;
	int index = 0;
public:
    Queue(int inSize) : SIZE(inSize) { 
        words = new T *[SIZE]; 
    }

	void enqueue(T *inVal);  //Add an item to the Queue
	T *dequeue();            //Remove an item from the Queue, then returns it    
	T *peek();               //Look at the top item of the Queue
	bool isEmpty();          //Check if the Queue is empty
	bool isFull();           //Check if the Queue is full
	void makeEmpty();        //Empties out the Queue
    int length();            //Returns the total amount of items in the Queue

};


#endif
