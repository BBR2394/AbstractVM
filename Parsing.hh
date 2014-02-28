//
// Parsing.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:37:05 2014 Koszyczek Laurent
// Last update Fri Feb 28 16:36:28 2014 Bertrand-Rapello Baptiste
//

#ifndef PARSING_HH_
# define PARSING_HH_

# include <string>
# include "Instruction.hh"

class Parsing
{
private:
	std::string			_filepath;
	std::ifstream			fd_file;
public:
	Parsing();
	Parsing(const std::string &str);
	~Parsing();

	void			setFile(std::string const str);
	std::string		*getFile(void) const;
	char			checkLine(const std::string &str);
	Instruction		*getNextInstruction();

};

#endif /* PARSING_HH_ */
