#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include "stack.h"
#include "queue.h"

//need a funtion that turns sentence into words and then words into chars


int main() {

	
	
	std::string inString = "";
	std::cout << "Input a string" << std::endl;
	std::getline(std::cin, inString);

	std::stringstream s(inString); //breaks up words

	std::string word; //stores word

	int queueSize = 0;	

	while(s>>word){
		queueSize++; 
	}

	s.seekg(0, std::ios::beg);
	
	Queue<Stack<char>> wordQueue(queueSize);

	while (std::getline(s, word, ' ')) {
		Stack<char> *letterStack = new Stack<char>(static_cast<int>(word.length()));
		//word.<add to queue>

		//word to chars
		for (int i = 0; i < word.length()-1; i++) {
			letterStack->push(&word[i]);
			//add letters to to stack
			//word[i].<add to stack>
		}
		
		wordQueue.enqueue(letterStack);
		//for loop to go through the word STACK and pull out each letter
		//for loop to pull out words from QUEUE and pull out each word

		
	}

	for (int i{}; i < queueSize; i++) {
		std::cout << wordQueue.dequeue().pop() << std::endl;
	}
	


	



	//funtions go here using inString
}
