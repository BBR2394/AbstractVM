//
// Exception.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Thu Feb 27 02:14:23 2014 Koszyczek Laurent
// Last update Thu Feb 27 16:10:42 2014 Bertrand-Rapello Baptiste
//

#include "Exception.hh"

Exception::Exception(const std::string & msg) throw()
{
  this->_msg = msg;
}

Exception::~Exception() throw()
{
}

SyntaxErrorException::SyntaxErrorException(const std::string & msg) throw()
: Exception::Exception(std::string("Syntax Error Exception: ") + msg)
{
}

SyntaxErrorException::~SyntaxErrorException() throw()
{
}

BadParameterException::BadParameterException(const std::string & msg) throw()
: Exception::Exception(std::string("Bad Parameter Exception: ") + msg)
{
}

BadParameterException::~BadParameterException() throw()
{
}

DivByZeroException::DivByZeroException(const std::string & msg) throw()
: Exception::Exception(std::string("Div By Zero Exception: ") + msg)
{
}

DivByZeroException::~DivByZeroException() throw()
{

}

FileOpeningException::FileOpeningException(const std::string &msg) throw()
: Exception::Exception(std::string("File Opening Exception: " ) + msg)
{

}

FileOpeningException::~FileOpeningException() throw()
{

}

OverflowException::OverflowException(const std::string &msg) throw()
: Exception::Exception(std::string("Overflow Exception: ") + msg)
{

}

OverflowException::~OverflowException() throw()
{

}