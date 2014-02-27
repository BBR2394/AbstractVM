//
// Exception.hh for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:14:36 2014 Koszyczek Laurent
// Last update Thu Feb 27 02:14:37 2014 Koszyczek Laurent
//

#ifndef EXCEPTION_HH_
# define EXCEPTION_HH_

# include <exception>

class Exception : public std::exception
{
protected:
	std::string			msg;

public:
	Exception(const std::string & msg) throw();
	~Exception() throw();
	
};
