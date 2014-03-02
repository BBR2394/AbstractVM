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

# include <string>
# include <exception>

class Exception : public std::exception
{
protected:
	std::string			_msg;

public:
	Exception(const std::string & msg) throw();
	virtual const char *what() const throw();
	~Exception() throw();
};

class SyntaxErrorException : public Exception
{
public:
	SyntaxErrorException(const std::string & msg) throw();
	~SyntaxErrorException() throw();
};

class BadParameterException : public Exception
{
public:
	BadParameterException(const std::string & msg) throw();
	~BadParameterException() throw();
};

class DivByZeroException : public Exception
{
public:
	DivByZeroException(const std::string & msg) throw();
	~DivByZeroException() throw();
};

class FileOpeningException : public Exception
{
public:
	FileOpeningException(const std::string & msg) throw();
	~FileOpeningException() throw();
	
};

class OverflowException : public Exception
{
public:
	OverflowException(const std::string & msg) throw();
	~OverflowException() throw();
	
};

#endif
