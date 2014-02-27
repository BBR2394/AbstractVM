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