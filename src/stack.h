#ifndef STACK_H
#define STACK_H

#include <iostream>
#include <stack>
#include <string>
#include <map>
#include <vector>
#include <sstream>
#include <stdlib.h>

class STACK_MACHINE {

	private:
		int memPtr;
		int progCtr;
		std::stack <std::string> memory;
		std::map <int,std::string> heap;
		std::vector <std::string> program;
		std::string to_string(int);
	public:
		STACK_MACHINE();
		~STACK_MACHINE();
		void loadVector(std::vector <std::string> code){ this -> program = code; }
		void exec();
		void push(std::string);
		std::string pop();
		void add();
		void sub();
		void mul();
		void div();
};

STACK_MACHINE::STACK_MACHINE()
{
	this -> memPtr = 0;
	this -> progCtr = 0;
}

STACK_MACHINE::~STACK_MACHINE()
{

}

void STACK_MACHINE::exec()
{
	for(this -> progCtr; this -> progCtr < this -> program.size(); this -> progCtr++)
	{

		std::cout << "Current Instruction: " << this -> program[this -> progCtr] << std::endl;
		std::string opcode = this -> program[this -> progCtr].substr(0,4);
		std::cout << "\tFound Opcode: " << opcode << std::endl;

	}

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
	std::string answer = this -> to_string( atoi(firstitem.c_str()) + atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::sub()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = this -> to_string( atoi(firstitem.c_str()) - atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::mul()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = this -> to_string( atoi(firstitem.c_str()) * atoi(seconditem.c_str()) );
	this -> push(answer);
}

void STACK_MACHINE::div()
{
	std::string firstitem = this -> pop();
	std::string seconditem = this -> pop();
	std::string answer = this -> to_string( atoi(firstitem.c_str()) / atoi(seconditem.c_str()) );
	this -> push(answer);
}

std::string STACK_MACHINE::to_string(int number)
{
    std::stringstream ss;
    ss << number;
    return ss.str();
}
#endif /* STACK_H */

