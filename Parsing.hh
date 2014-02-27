#ifndef PARSING_HH_
# define PARSING_HH_

class Parsing
{
private:
	std::string			path;

public:
	Parsing();
	Parsing(const std::string &str);
	~Parsing();

	char			checkLine(const std::string &str);
	Instruction		*createInstruction(const std::string &str);
	
};

#endif /* PARSING_HH_ */