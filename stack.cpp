
#include <iostream>
#include "stack.h"


//stacks are words where index1 is the first character in the word

void Stack<T>::push(T inChar) {
	if (index < SIZE) {
		word[index] = inChar;
		index++;
	}
	else {
		//exception
	}
}

T Stack<T>::pop() {
	if (index > 0) {
		index--;
		return items[index];
	}
	else {
		//exception
	}
}

T Stack<T>::top(){
	return word[SIZE-1];
}

int Stack<T>::length() {
	return word[SIZE]
}

void Stack<T>::emptyStack() {
	index = 0;
}

#endif