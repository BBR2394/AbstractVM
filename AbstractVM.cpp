//
// AbstractVM.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:33:25 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:33:27 2014 Koszyczek Laurent
//

#include "AbstractVM.hh"

AbstractVM::AbstractVM()
{
}

AbstractVM::~AbstractVM()
{
}

void		AbstractVM::setMemory(Memory const &memory)
{
	_memory = memory;
}

void		AbstractVM::setFile(Parsing const &file)
{
	_file = file;
}

Memory		*AbstractVM::getMemory(void)
{
	return &_memory;
}

Parsing		*AbstractVM::getParsing(void)
{
	return &_file;
}


void		AbstractVM::executeInstruction(Instruction &instruct)
{

}
