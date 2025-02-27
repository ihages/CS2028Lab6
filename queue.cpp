#include "queue.h"
#include <iostream>
#include <string>

//Add an item to the Queue
template <class T>
void Queue<T>::enqueue(T *inVal) {
    if (!(isFull())) {
        words[index] = inVal;
        index++;
        return;
    }
    throw Overflow("Queue Overflow", 1);
}

//Remove an item from the Queue, then returns it 
template <class T>
T *Queue<T>::dequeue() {
    if (!(isEmpty())) {
        T *retVal = words[0];

        for (int i{}; i < index-1; i++) {
            words[i] = words[i+1];
        }
        index --;
        return retVal;
    }
    throw Underflow("Queue Underflow", 1);
}

//Look at the top item of the Queue
template <class T>
T *Queue<T>::peek() {
    return words[0];
}

//Check if the Queue is empty
template <class T>
bool Queue<T>::isEmpty() {
    return index == 0;
}

//Check if the Queue is full
template <class T>
bool Queue<T>::isFull() {
    return index == SIZE;
}

//Empties out the Queue
template <class T>
void Queue<T>::makeEmpty() {
    index = 0;
}

//Returns the total amount of items in the Queue
template <class T>
int Queue<T>::length() {
    return index;
}


//Base template
template class Queue<Stack<char>>;

