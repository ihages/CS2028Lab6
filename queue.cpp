#include "queue.h"
#include <iostream>
#include <string>

template <class T>
void Queue<T>::enqueue(T *inVal) {
    if (!(isFull())) {
        words[index] = inVal;
        index++;
    }
    throw Overflow("Queue Overflow", 1);
}

template <class T>
T Queue<T>::dequeue() {
    if (!(isEmpty())) {
        T *retVal = word[0];
        index --;
        for (int i{}; i < SIZE; i++) {
            words[i] = words[i+1];
        }
        return *retVal;
    }
    throw Undeflow("Queue Underflow", 1);
}

template <class T>
T Queue<T>::peek() {
    return words[0];
}

template <class T>
bool Queue<T>::isEmpty() {
    return index == 0;
}

template <class T>
bool Queue<T>::isFull() {
    return index == SIZE;
}

template <class T>
void Queue<T>::makeEmpty() {
    index = 0;
}

template <class T>
int Queue<T>::length() {
    return index;
}


template class Queue<Stack<char>>;

