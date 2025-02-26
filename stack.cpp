#include <iostream>
#include "stack.h"


//stacks are words where index1 is the first character in the word

template <class T>
void Stack<T>::push(T inChar) {
	if (index < SIZE) {
		word[index] = inChar;
		index++;
	}
	else {
		//exception
	}
}

template <class T>
T Stack<T>::pop() {
	if (index > 0) {
		index--;
		return items[index];
	}
	else {
		//exception
	}
}

template <class T>
T Stack<T>::top(){
	return word[SIZE-1];
}

template <class T>
int Stack<T>::length() {
	return word[SIZE]
}

template <class T>
void Stack<T>::emptyStack() {
	index = 0;
}
