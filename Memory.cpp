//
// Memory.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:15:37 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:15:39 2014 Koszyczek Laurent
//

#include	"Memory.hh"

Memory::Memory()
{

}

Memory::Memory(const Memory &obj)
{
	_stack = obj._stack;
}

Memory::~Memory()
{

}

void					Memory::push(IOperand & op)
{
	_stack.push(op);
}

IOperand 				*Memory::getTopOperand() const
{
	return _stack.top();
}

void					Memory::pop()
{
	_stack.pop();
}

void					Memory::dump()
{
	// Display memory
}
