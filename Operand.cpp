//
// Operand.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:47:56 2015 Bertrand-Rapello Baptiste
// Last update Thu Feb 26 11:23:07 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>

#include "IOperand.hh"
#include "Operand.hh"

Int8::Int8(const std::string &v) : _repre(v)
{
  int res;
  std::istringstream convert(_repre);

  //a enlever !!
  if (!(convert >> res))
    throw ExceptOpe("bad number");
  _value = (char)res;
  //_value = atoi(_repre.c_str());
  std::cout << "je suis un int 8 et ma valeur est " << _repre << " " << (int)_value << std::endl;
  if ((int)_value != (int)res)
    throw ExceptOpe("contener not enough large for the number (overflow)");
  _tpe = OperandTpe::Int8;
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

OperandTpe::eOperandType Int8::getType() const
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
  int res;
  std::istringstream convert(_repre);
  if (!(convert >> res))
    throw ExceptOpe("bad number");
  _value = (short)res;
  std::cout << "je suis un int 16 et ma valeur est " << _repre << "  " << _value << std::endl;
  if ((int)_value != res)
    throw ExceptOpe("contener not enough large for the number (overflow)");
  _tpe = OperandTpe::Int16;
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

OperandTpe::eOperandType Int16::getType() const
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

Int32::Int32(const std::string &v) : _repre(v)
{
  long res;
  std::istringstream convert(_repre);

  if (!(convert >> res))
    throw ExceptOpe("bad number");
  _value = (int)res;
  std::cout << "je suis un int 32 et ma valeur est " << _repre << std::endl;
  if ((int)_value != (int)res)
    throw ExceptOpe("contener not enough large for the number (overflow)");
  _tpe = OperandTpe::Int32;
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

OperandTpe::eOperandType Int32::getType() const
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

Double::Double(const std::string &v) : _repre(v)
{

  _value = atoi(_repre.c_str());
  std::cout << "je suis un int 32 et ma valeur est " << _repre << std::endl;
  _tpe = OperandTpe::Double;
}

Double::~Double()
{

}

int Double::getPrecision() const
{
  return 0;
}

std::string const & Double::toString() const
{
  return _repre;
}

OperandTpe::eOperandType Double::getType() const
{
  return _tpe;
}

double     Double::getValue() const
{
  return _value;
}

IOperand *Double::operator+(const IOperand &rhs) const
{
  Double *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  double res;

  convert >> res;
  chartostring << (double)res + this->getValue();
  newo = new Double(chartostring.str());
  return newo;

}

IOperand *Double::operator-(const IOperand &rhs) const
{
  Double *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  double res;

  convert >> res;
  chartostring << this->getValue() - (double)res;
  newo = new Double(chartostring.str());
  return newo;
}
IOperand *Double::operator*(const IOperand &rhs) const
{
  Double *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  double res;

  convert >> res;
  chartostring << this->getValue() * (double)res;
  newo = new Double(chartostring.str());
  return newo;
}
IOperand *Double::operator/(const IOperand &rhs) const
{
  Double *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  double res;

  convert >> res;
  chartostring << this->getValue() / (double)res;
  newo = new Double(chartostring.str());
  return newo;
}
IOperand *Double::operator%(const IOperand &rhs) const
{
  Double *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  double res;

  convert >> res;
  //  chartostring << this->getValue() % (double)res;
  newo = new Double(chartostring.str());
  return newo;
}

Float::Float(const std::string &v) : _repre(v)
{
  _value = atoi(_repre.c_str());
  std::cout << "je suis un int 32 et ma valeur est " << _repre << std::endl;
  _tpe = OperandTpe::Float;
}

Float::~Float()
{

}

int Float::getPrecision() const
{
  return 0;
}

std::string const & Float::toString() const
{
  return _repre;
}

OperandTpe::eOperandType Float::getType() const
{
  return _tpe;
}

float     Float::getValue() const
{
  return _value;
}

IOperand *Float::operator+(const IOperand &rhs) const
{
  Float *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  float res;

  convert >> res;
  chartostring << (float)res + this->getValue();
  newo = new Float(chartostring.str());
  return newo;

}

IOperand *Float::operator-(const IOperand &rhs) const
{
  Float *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  float res;

  convert >> res;
  chartostring << this->getValue() - (float)res;
  newo = new Float(chartostring.str());
  return newo;
}

IOperand *Float::operator*(const IOperand &rhs) const
{
  Float *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  float res;

  convert >> res;
  chartostring << this->getValue() * (float)res;
  newo = new Float(chartostring.str());
  return newo;
}

IOperand *Float::operator/(const IOperand &rhs) const
{
  Float *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  float res;

  convert >> res;
  chartostring << this->getValue() / (float)res;
  newo = new Float(chartostring.str());
  return newo;
}

IOperand *Float::operator%(const IOperand &rhs) const
{
  Float *newo;
  std::istringstream convert(rhs.toString());
  std::ostringstream chartostring;
  float res;

  convert >> res;
  //chartostring << this->getValue() % (float)res;
  newo = new Float(chartostring.str());
  return newo;
}
