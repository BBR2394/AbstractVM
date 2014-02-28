//
// Parsing.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:36:45 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:36:56 2014 Koszyczek Laurent
//

#include	"Parsing.hh"

Parsing::Parsing()
{

}

Parsing::Parsing(const std::string &str)
{

}

Parsing::~Parsing()
{

}

void			Parsing::setFile(std::string const str)
{
	_filepath = str;
}

std::string		*Parsing::getFile(void) const
{
	return _filepath;
}

char			Parsing::checkLine(const std::string &str)
{

}

Instruction		*Parsing::getNextInstruction()
{
	Instruction 	*inst;

	inst = new Instruction();
}
