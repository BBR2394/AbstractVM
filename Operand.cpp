//
// Operand.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:47:56 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 11:17:13 2015 Bertrand-Rapello Baptiste
//

#include "IOperand.hh"
#include "Operand.hh"

Int8::Int8(const std::string &v) : _v(v)
{
  std::cout << "je suis un int 8 et ma valeur est " << _v << std::endl;
}

Int8::~Int8()
{

}

int Int8::getPrecision() const
{

}
/*
std::string const & Int8::toString() const
{

}
*/
eOperandType Int8::getType() const
{
  return _tpe;
}

std::string Int8::getV() const
{
  return _v;
}

Int16::Int16(const std::string &v) : _v(v)
{
  std::cout << "je suis un int 16 et ma valeur est " << _v << std::endl;
}

Int16::~Int16()
{

}

int Int16::getPrecision() const
{

}
/*                                                                                     std::string const & Int16::toString() const
{
}
*/
eOperandType Int16::getType() const
{
  return _tpe;
}

std::string Int16::getV() const
{
  return _v;
}

Int32::Int32(const std::string &v) : _v(v)
{
  std::cout << "je suis un int 32 et ma valeur est " << _v << std::endl;
}

Int32::~Int32()
{

}

int Int32::getPrecision() const
{

}
/*
std::string const & Int32::toString() const
{
}
*/
eOperandType Int32::getType() const
{
  return _tpe;
}

std::string Int32::getV() const
{
  return _v;
}
