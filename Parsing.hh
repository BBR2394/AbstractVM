//
// Parsing.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:37:05 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:37:06 2014 Koszyczek Laurent
//

#ifndef PARSING_HH_
# define PARSING_HH_

class Parsing
{
private:
	std::string			_filepath;

public:
	Parsing();
	Parsing(const std::string &str);
	~Parsing();

	void			setFile(std::string const str);
	std::string		*getFile(void) const;
	char			checkLine(const std::string &str);
	Instruction		*getNextInstruction(const std::string &str);

};

#endif /* PARSING_HH_ */
