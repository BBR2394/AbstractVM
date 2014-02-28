//
// Instruction.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:34:15 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:34:32 2014 Koszyczek Laurent
//

#include	"Instruction.hh"

Instruction::Instruction()
{

}

Instruction::Instruction(const std::string &str)
{
	_name = str;
}

Instruction::Instruction(const std::string &str, IOperand &ope)
{
	_name = str;
	_operand = ope;
}

Instruction::~Instruction()
{

}

void				Instruction::setName(const std::string &str)
{
	_name = str;
}

void				Instruction::setOperand(const IOperand &op)
{
	_operand = ope;
}

IOperand 			*Instruction::getOperand(void)
{
	return ope;
}

std::string			Instruction::getName(void) const
{
	return _name;
}
