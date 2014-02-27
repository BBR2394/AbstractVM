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

typedef enum
{
	INT8,
	INT16,
	INT32,
	FLOAT,
	DOUBLE,
	UNDEF
} eOperandType;

class AbstractVM
{
public:
	AbstractVM();
	~AbstractVM();
	
private:
	Memory		_memory;
	Calculator  _cpu;

};

#endif /* ABSTRACTVM_HH_ */
