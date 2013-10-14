#ifndef STACK_H
#define STACK_H

#include <stack>

class STACK_MACHINE {

	private:
		int stackPtr;
		std::stack <std::string> memory;
	public:
		STACK_MACHINE();
		~STACK_MACHINE();
		void push(std::string);
		std::string pop();

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
 
#endif /* STACK_H */
