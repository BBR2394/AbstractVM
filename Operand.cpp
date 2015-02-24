//
// Operand.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:47:56 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 24 21:25:00 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>

#include "IOperand.hh"
#include "Operand.hh"

Int8::Int8(const std::string &v) : _repre(v)
{
  _value = atoi(_repre.c_str());
  std::cout << "je suis un int 8 et ma valeur est " << _repre << std::endl;
  _tpe = (eOperandType)0;
}

Int8::~Int8()
{

}

int Int8::getPrecision() const
{
  return 0;
}

std::string const & Int8::toString() const
{
  return _repre;
}

eOperandType Int8::getType() const
{
  return _tpe;
}

char Int8::getValue() const
{
  return _value;
}

IOperand *Int8::operator+(const IOperand &rhs) const
{
  Int8 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;  
  chartostring << (char)res + this->getValue();
  newo = new Int8(chartostring.str());
  return newo;
}

IOperand *Int8::operator-(const IOperand &rhs) const
{
  Int8 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() - (char)res;
  newo = new Int8(chartostring.str());
  return newo;
}

IOperand *Int8::operator*(const IOperand &rhs) const
{
  Int8 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() * (char)res;
  newo = new Int8(chartostring.str());
  return newo;
}

IOperand *Int8::operator/(const IOperand &rhs) const
{
  Int8 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() / (char)res;
  newo = new Int8(chartostring.str());
  return newo;
}

IOperand *Int8::operator%(const IOperand &rhs) const
{
  Int8 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() % (char)res;
  newo = new Int8(chartostring.str());
  return newo;
}

Int16::Int16(const std::string &v) : _repre(v)
{
  _value = atoi(_repre.c_str());
  std::cout << "je suis un int 16 et ma valeur est " << _repre << std::endl;
  _tpe = (eOperandType)1;
}

Int16::~Int16()
{

}

int Int16::getPrecision() const
{
  return 0;
}

std::string const & Int16::toString() const
{
  return _repre;
}

eOperandType Int16::getType() const
{
  return _tpe;
}

short	Int16::getValue() const
{
  return _value;
}

IOperand *Int16::operator+(const IOperand &rhs) const
{
  Int16 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << (short)res + this->getValue();
  newo = new Int16(chartostring.str());
  return newo;
}

IOperand *Int16::operator-(const IOperand &rhs) const
{
  Int16 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() + (short)res;
  newo = new Int16(chartostring.str());
  return newo;
}

IOperand *Int16::operator*(const IOperand &rhs) const
{
  Int16 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() * (short)res;
  newo = new Int16(chartostring.str());
  return newo;
}

IOperand *Int16::operator/(const IOperand &rhs) const
{
  Int16 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() / (short)res;
  newo = new Int16(chartostring.str());
  return newo;
}

IOperand *Int16::operator%(const IOperand &rhs) const
{
  Int16 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() % (short)res;
  newo = new Int16(chartostring.str());
  return newo;
}

/*
IOperand *Int16::operator+(const IOperand &rhs) const
{
  Int16 *res;
  //res = new Int16(this->getValue() + a.getValue());
  res = new Int16("16");

  return res;
  }*/

Int32::Int32(const std::string &v) : _repre(v)
{
  _value = atoi(_repre.c_str());
  std::cout << "je suis un int 32 et ma valeur est " << _repre << std::endl;
  _tpe = (eOperandType)2;
}

Int32::~Int32()
{

}

int Int32::getPrecision() const
{
  return 0;
}

std::string const & Int32::toString() const
{
  return _repre;
}

eOperandType Int32::getType() const
{
  return _tpe;
}

int	Int32::getValue() const
{
  return _value;
}

IOperand *Int32::operator+(const IOperand &rhs) const
{
  Int32 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << (int)res + this->getValue();
  newo = new Int32(chartostring.str());
  return newo;
}

IOperand *Int32::operator-(const IOperand &rhs) const
{
  Int32 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() - (int)res;
  newo = new Int32(chartostring.str());
  return newo;
}

IOperand *Int32::operator*(const IOperand &rhs) const
{
  Int32 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() * (int)res;
  newo = new Int32(chartostring.str());
  return newo;
}

IOperand *Int32::operator/(const IOperand &rhs) const
{
  Int32 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() / (int)res;
  newo = new Int32(chartostring.str());
  return newo;
}

IOperand *Int32::operator%(const IOperand &rhs) const
{
  Int32 *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  int res;

  convert >> res;
  chartostring << this->getValue() % (int)res;
  newo = new Int32(chartostring.str());
  return newo;
}


/*
IOperand *Int32::operator+(const IOperand &rhs) const
{
  Int32 *res;
  //res = new Int32(this->getValue() + a.getValue());
  res = new Int32("42");
  return res;
}
*/
