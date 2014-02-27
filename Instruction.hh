#ifndef INSTRUCTION_HH_
# define INSTRUCTION_HH_

class Instruction
{
private:
	std::string 		_name;
	Operand				_operand;
public:
	Instruction();
	Instruction(const std::string &str);
	Instruction(const std::string &str, Operand &ope);
	~Instruction();

	void				setName(const std::string &str);
	void				setOperand(const Operand &op);
	Operand 			*getOperand(void);
	std::string			getName(void) const;

};

#endif /* INSTRUCTION_HH_ */