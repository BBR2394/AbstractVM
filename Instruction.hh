#ifndef INSTRUCTION_HH_
# define INSTRUCTION_HH_

# include "IOperand.hh"

class Instruction
{
private:
	std::string 		_name;
	IOperand			_operand;

public:
	Instruction();
	Instruction(const std::string &str);
	Instruction(const std::string &str, IOperand &ope);
	~Instruction();

	void				setName(const std::string &str);
	void				setOperand(const IOperand &op);
	IOperand 			*getOperand(void);
	std::string			getName(void) const;

};

#endif /* INSTRUCTION_HH_ */