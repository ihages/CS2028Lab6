#include <iostream>
#include <string>
#include <iostream>
#include <sstream>
#include "stack.h"
#include "queue.h"

//need a funtion that turns sentence into words and then words into chars


int main() {
	Stack letterStack;
	Queue wordQueue;
	
	std::string inString = "";
	std::cout << "Input a string" << std::endl;
	std::getline(std::cin, inString);

	std::stringstream s(inString); //breaks up words

	std::string word; //stores word

	while (s >> word) {
		//word.<add to queue>

		//word to chars
		for (int i = 0; i < word.length(); i++) {
			//add letters to to stack
			//word[i].<add to stack>
		}

		//for loop to go through the word STACK and pull out each letter
		//for loop to pull out words from QUEUE and pull out each word
	}


	//funtions go here using inString
}
