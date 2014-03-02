//
// IOperand.cpp for avm in /home/koszyc_l/Documents/blih/cpp_abstractvm
// 
// Made by Koszyczek Laurent
// Login   <koszyc_l@epitech.net>
// 
// Started on  Fri Feb 28 11:35:14 2014 Koszyczek Laurent
// Last update Fri Feb 28 11:35:17 2014 Koszyczek Laurent
//

#include "IOperand.hh"

template<typename T>
Operand<T>::Operand(const std::string &_name, eOperandType _type, int _precision)
  : type(_type), precision(_precision)
{
  this->val = Converter<T>::convertNameToValue(_name);
  this->name = Converter<T>::convertValueToName(this->val);
}

template<typename T>
Operand<T>::~Operand()
{
}

template<typename T>
std::string const & Operand<T>::toString() const
{
  return (name);
}

template<typename T>
int Operand<T>::getPrecision() const
{
  return (precision);
}

template<typename T>
eOperandType Operand<T>::getType() const
{
  return (type);
}

template<typename T>
IOperand * Operand<T>::operator=(const IOperand &obj) const
{

}

template<typename T>
IOperand * Operand<T>::operator+(const IOperand &obj) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < obj.getType())
    return (obj + *this);
  otherVal = Converter<T>::convertNameToValue(obj.toString());
  res = val + otherVal;
  if ((res - otherVal) != val)
    throw OverflowException(name + "+" + obj.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (Operand<T>::Operand(type, resultName, 0));
}

template<typename T>
IOperand * Operand<T>::operator-(const IOperand &obj) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < obj.getType())
    return (obj - *this);
  otherVal = Converter<T>::convertNameToValue(obj.toString());
  res = val - otherVal;
  if ((res + otherVal) != val)
    throw OverflowException(name + "-" + obj.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (new Operand<T>::Operand(type, resultName, 0));
}

template<typename T>
IOperand * Operand<T>::operator*(const IOperand &obj) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < obj.getType())
    return (obj * *this);
  otherVal = Converter<T>::convertNameToValue(obj.toString());
  res = val * otherVal;
  if ((res / otherVal) != val)
    throw OverflowException(name + "*" + obj.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (new Operand<T>::Operand(type, resultName, 0));
}

template<typename T>
IOperand * Operand<T>::operator/(const IOperand &obj) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(obj.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), obj.getType());
    res = val / otherVal;
    resultName = Converter<T>::convertValueToName(res);
    return (new Operand<T>::Operand(bigOperandType, resultName, 0));
  }
  throw DivByZeroException("Division by zero");
}


template<typename T>
IOperand * Operand<T>::operator%(const IOperand &obj) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(obj.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), obj.getType());
    res = Modulo<T>::modulo(val, otherVal);
    resultName = Converter<T>::convertValueToName(res);
    return (new Operand<T>::Operand(bigOperandType, resultName, 0));
  }
  throw DivByZeroException("Modulo by zero");
}

Int8::Int8(const std::string & val)
: Operand::Operand<char>(val, INT8, 8)

{

}
Int8::~Int8()
{
}

Int16::Int16(const std::string & val)
: Operand::Operand<short>(val, INT8, 16)
{

}

Int16::~Int16()
{

}

Int32::Int32(const std::string & val)
: Operand::Operand<int>(val, INT8, 32)
{

}

Int32::~Int32()
{

}

Float::Float(const std::string & val)
: Operand::Operand<float>(val, INT8, 32)
{

}
Float::~Float()
{

}

Double::Double(const std::string & val)
: Operand::Operand<double>(val, INT8, 64)
{

}

Double::~Double()
{

}