#pragma once
#ifndef __QUEUE__HPP
#define __QUEUE__HPP

#include "Exceptions.h"

template<class T>
class Queue {
private:
	T words[size];
    int size;
	int index = 0;
public:
    Queue(int inSize) : size(inSize) { 
        words = new T *[size]; 
    }

	void enqueue(T *inVal); //Add item
	T dequeue();            //Remove item    
	T peek();               //Look at top of queue
	bool isEmpty();         //Check if queue is empty
	bool isFull();          //Check if queue is full
	void makeEmpty();       //Empty out the queue
    int length();           //Show the length of the queue

};


#endif
