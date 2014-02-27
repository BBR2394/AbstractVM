//
// main.cpp for abstractvm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Wed Feb 26 18:02:05 2014 Koszyczek Laurent
// Last update Wed Feb 26 18:02:33 2014 Koszyczek Laurent
//

#include	"AbstractVM.hh"

int		main(int ac, char **av)
{
	AbstractVM 			vm;
	Instruction			instruction;

	vm.getParsing()->setFile("test.asm");
	instruction = vm.getParsing()->getNextInstruction();
	return 0;
}
