#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <stdlib.h>

class STACK_MACHINE {

	private:
		int memPtr = 0;
		std::stack <std::string> memory;
		std::map <int,std::string> heap;
	public:
		STACK_MACHINE();
		~STACK_MACHINE();
		void push(std::string);
		std::string pop();
		void add();
		void sub();
		void mul();
		void div();
};

STACK_MACHINE::STACK_MACHINE()
{

}

STACK_MACHINE::~STACK_MACHINE()
{

}

void STACK_MACHINE::push(std::string thing)
{
	this -> memory.push(thing);
	std::cout << "Just pushed " << thing << std::endl;
}

std::string STACK_MACHINE::pop()
{
	std::string thing = this -> memory.top();
	std::cout << "Just popped " << thing << std::endl;
	this -> memory.pop();
	return thing;
}

void STACK_MACHINE::add()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = std::to_string( atoi(firstitem.c_str()) + atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::sub()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = std::to_string( atoi(firstitem.c_str()) - atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::mul()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = std::to_string( atoi(firstitem.c_str()) * atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::div()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = std::to_string( atoi(firstitem.c_str()) / atoi(seconditem.c_str()) );
	this -> push(answer);
}
#endif /* STACK_H */

