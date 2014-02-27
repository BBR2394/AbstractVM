//
// Memory.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:15:45 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:15:46 2014 Koszyczek Laurent
//

#ifndef MEMORY_HH_
# define MEMORY_HH_

class Memory
{
public:
	Memory();
	~Memory();

	void					push(Operand::IOperand * op);
	Operand::IOperand*  	getTopOperand() const;
	void					pop();
	void					dump();

private:
	std::stack<Operand::IOperand *> stack;
};

#endif /* MEMORY_HH_ */
