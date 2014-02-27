//
// Grammar.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:14:58 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:15:00 2014 Koszyczek Laurent
//

#include "Grammar.hpp"

Grammar::Grammar()
{
	std::map<std::string, char> word;

	_keyword = word;
	init_grammar();
}

Grammar::Grammar(Grammar const &obj)
{
	_keyword = obj->_keyword;
}

Grammar::~Grammar()
{
	delete _keyword;
}

char		Grammar::is_valid(std::string str)
{
	std::map<std::string, char>::iterator it;

	it = _keyword.find(str);
	if (it == _keyword.end())
		return ('E');
	return (_keyword[str]);
}

void		Grammar::init_grammar(void)
{
	_keyword.insert(std::pair<std::string, char>("push", 'C'));
	_keyword.insert(std::pair<std::string, char>("pop", 'C'));
	_keyword.insert(std::pair<std::string, char>("dump", 'C'));
	_keyword.insert(std::pair<std::string, char>("assert", 'C'));
	_keyword.insert(std::pair<std::string, char>("add", 'C'));
	_keyword.insert(std::pair<std::string, char>("sub", 'C'));
	_keyword.insert(std::pair<std::string, char>("mul", 'C'));
	_keyword.insert(std::pair<std::string, char>("div", 'C'));
	_keyword.insert(std::pair<std::string, char>("mod", 'C'));
	_keyword.insert(std::pair<std::string, char>("print", 'C'));
	_keyword.insert(std::pair<std::string, char>("exit", 'C'));
	_keyword.insert(std::pair<std::string, char>("int8", 'T'));
	_keyword.insert(std::pair<std::string, char>("int16", 'T'));
	_keyword.insert(std::pair<std::string, char>("int32", 'T'));
	_keyword.insert(std::pair<std::string, char>("float", 'T'));
	_keyword.insert(std::pair<std::string, char>("double", 'T'));
}
