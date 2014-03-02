//
// AbstractVM.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:14:06 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:14:08 2014 Koszyczek Laurent
//

#ifndef ABSTRACTVM_HH_
# define ABSTRACTVM_HH_

# include "Parsing.hh"
# include "Memory.hh"
# include "Instruction.hh"

class AbstractVM
{
public:
	AbstractVM();
	~AbstractVM();

void		setMemory(Memory const &memory);
void		setFile(Parsing const &file);
Memory		*getMemory(void);
Parsing		*getParsing(void);

void		executeInstruction(Instruction &instruct);
	
private:
	Memory		_memory;
	Parsing		_file;

};

#endif /* ABSTRACTVM_HH_ */
