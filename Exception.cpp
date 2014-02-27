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

Exception::Exception(const std::string & msg)
{
  this->msg = msg;
}

Exception::~Exception()
{

}

SyntaxErrorException::SyntaxErrorException(const std::string & msg)
{
  this->msg = "SyntaxErrorException: " + msg;
}

SyntaxErrorException::~SyntaxErrorException()
{
}

BadParameterException::BadParameterException(const std::string & msg)
{
  this->msg = "BadParameterException: " + msg;
}

BadParameterException::~BadParameterException()
{

}

DivByZeroException::DivByZeroException(const std::string & msg)
{
  this->msg = "DivByZeroException: " + msg;
}

DivByZeroException::~DivByZeroException()
{

}
