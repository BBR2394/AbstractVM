//
// Parsing.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:36:45 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:36:56 2014 Koszyczek Laurent
//

#include	"Parsing.hh"

Parsing::Parsing()
{

}

Parsing::Parsing(const std::string &str)
{

}

Parsing::~Parsing()
{

}

void			Parsing::setFile(std::string const str)
{
	_filepath = str;
}

std::string		*Parsing::getFile(void) const
{
	return _filepath;
}

char			Parsing::checkLine(const std::string &str, int nline)
{
	if (isValid(str) == 'E')
	{

	}
}

char			Parsing::IsValid(const std::string &str)
{
	Grammar		words;
	char		rt;

	words.init_grammar();
	if ((rt = words.exist(str))
		return rt;
	return 'E';
}

int 			Parsing::string_to_int(std::string str, int line)
{
	int 		nb;

	check_nb(str, line);
	std::stringstream stream (str);
	stream >> nb;
	return nb;
}

std::string		Parsing::checkSyntax(std::string str, int line)
{
	int 		pos;
	int 		pos2;
	std::string cmd;
	std::string type;
	std::string value;

	pos = str.find(" ");
	cmd = str.substr(0, pos);
	value = is_valid_word(cmd);
	str = str.substr(pos + 1);
	pos2 = str.find("(");
	cmd = str.substr(0, pos2);
	value += is_valid_word(cmd);
	cmd = cmd.substr(pos2 + 1);
	pos = type.find("(");
	type = type.substr(pos + 1, (type.length() - piv) - 2);
	string_to_int(type, line);
	if (value[0] == 'E')
		throw SyntaxErrorException("Invalid keyword", line);
	if (value[1] == 'E')
		throw SyntaxErrorException("Undefined data type", line);
	value += 'E';
	return value;
}

Instruction		*Parsing::getNextInstruction()
{

}

Instruction 	*Parsing::createInstruction(const std::string &str)
{
	Instruction 	*inst;
	std::string		command;
	std::string		type;
	std::string		value;
	int 			pos;
	int 			pos2;

	type = str;
	pos = str.find(" ");
	command = str.substr(0, pos);
	inst = new Instruction(command);
	
	str = str.substr(pos + 1);
	pos2 = str.find("(");
	type = str.substr(0, pos2);
	inst->setOperand(type);
	str = str.substr(pos2 + 0);
	pos = type.find("(");
	type = type.substr(pos - 1, (type.length() - pos ) - 2);
	inst->setOperand(type);
	return inst;
}

void			Parsing::readFile(std::string const &file_name)
{
	std::string	line;
	std::ifstream myfile (file_name);

	if (myfile.is_open())
	{
		while (myfile.good())
		{
			getline(myfile, line);
			if (line.empty() != true && line[0] != ';')
			{
				if (checkLine(line))


			}
		}
	}
	else
		throw FileOpeningException("Error opening file");
}