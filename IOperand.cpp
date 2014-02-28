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
/*****/
template<typename T>
AOperand<T>::AOperand(const std::string &_name, eOperandType _type, int _precision)
  : type(_type), precision(_precision)
{
  this->val = Converter<T>::convertNameToValue(_name);
  this->name = Converter<T>::convertValueToName(this->val);
}

template<typename T>
AOperand<T>::~AOperand()
{
}

template<typename T>
std::string const & AOperand<T>::toString() const
{
  return (this->name);
}

template<typename T>
int AOperand<T>::getPresicion() const
{
  return (this->precision);
}

template<typename T>
eOperandType AOperand<T>::getType() const
{
  return (this->type);
}

template<typename T>
IOtemplate<typename T>
AOperand<T>::AOperand(const std::string &_name, eOperandType _type, int _precision)
  : type(_type), precision(_precision)
{
  this->val = Converter<T>::convertNameToValue(_name);
  this->name = Converter<T>::convertValueToName(this->val);
}

template<typename T>
AOperand<T>::~AOperand()
{
}

template<typename T>
std::string const & AOperand<T>::toString() const
{
  return (this->name);
}

template<typename T>
int AOperand<T>::getPresicion() const
{
  return (this->precision);
}

template<typename T>
eOperandType AOperand<T>::getType() const
{
  return (this->type);
}

template<typename T>
IOperand * AOperand<T>::operator+(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs + *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val + otherVal;
  if ((res - otherVal) != val)
    throw OverflowException(name + "+" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator-(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs - *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val - otherVal;
  if ((res + otherVal) != val)
    throw OverflowException(name + "-" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator*(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs * *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val * otherVal;
  if ((res / otherVal) != val)
    throw OverflowException(name + "*" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator/(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = val / otherVal;
    resultName = Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Division by zero");
}


template<typename T>
IOperand * AOperand<T>::operator%(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = Modulo<T>::modulo(val, otherVal);
    resultName = Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Modulo by zero");
}perand * AOperand<T>::operator+(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs + *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val + otherVal;
  if ((res - otherVal) != val)
    throw OverflowException(name + "+" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator-(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs - *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val - otherVal;
  if ((res + otherVal) != val)
    throw OverflowException(name + "-" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator*(const IOperand &rhs) const
{
  T otherVal;
  T res;
  std::string resultName;

  if (type < rhs.getType())
    return (rhs * *this);
  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  res = val * otherVal;
  if ((res / otherVal) != val)
    throw OverflowException(name + "*" + rhs.toString());
  resultName = Converter<T>::convertValueToName(res);
  return (AbstractVM::getVM()->getOperandFactory()->createOperand(type, resultName));
}

template<typename T>
IOperand * AOperand<T>::operator/(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = val / otherVal;
    resultName = Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Division by zero");
}


template<typename T>
IOperand * AOperand<T>::operator%(const IOperand &rhs) const
{
  eOperandType bigOperandType;
  std::string resultName;
  T otherVal;
  T res;

  otherVal = Converter<T>::convertNameToValue(rhs.toString());
  if (otherVal != 0)
  {
    bigOperandType = std::max(getType(), rhs.getType());
    res = Modulo<T>::modulo(val, otherVal);
    resultName = Converter<T>::convertValueToName(res);
    return (AbstractVM::getVM()->getOperandFactory()->createOperand(bigOperandType, resultName));
  }
  throw DivisionByZeroException("Modulo by zero");
}
/**/
Int8::Int8(const std::string & val)
{

}
Int8::~Int8()
{
}

Int16::Int16(const std::string & val)
{

}

Int16::~Int16()
{

}

Int32::Int32(const std::string & val)
{

}

Int32::~Int32()
{

}

Float::Float(const std::string & val)
{

}
Float::~Float()
{

}

Double::Double(const std::string & val)
{

}

Double::~Double()
{

}