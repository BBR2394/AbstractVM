//
// Memory.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:15:45 2014 Koszyczek Laurent
// Last update Thu Feb 27 16:59:22 2014 Bertrand-Rapello Baptiste
//

#ifndef MEMORY_HH_
# define MEMORY_HH_

# include	"IOperand.hh"

class Memory
{
public:
	Memory();
	~Memory();

	void					push(Operand * op);
	Operand 				*getTopOperand() const;
	void					pop();
	void					dump();

private:
	std::stack<Operand::IOperand *> stack;
};

#endif /* MEMORY_HH_ */
