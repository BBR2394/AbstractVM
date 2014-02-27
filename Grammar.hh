//
// Grammar.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:15:09 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:15:11 2014 Koszyczek Laurent
//

#ifndef GRAMMAR_HH_
# define GRAMMAR_HH_

# include <map>

class Grammar
{
private:
	std::std::map<std::string, char> _keyword;

public:
	Grammar();
	Grammar(Grammar const &obj);
	~Grammar();

	char		is_valid(std::string str);

private:
	void		init_grammar(void);
	
};

#endif /* GRAMMAR_HH_ */
