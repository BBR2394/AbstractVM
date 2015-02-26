//
// Operand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:44:21 2015 Bertrand-Rapello Baptiste
// Last update Wed Feb 25 18:40:43 2015 Bertrand-Rapello Baptiste
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <iostream>
#include <string>
#include <sstream>

#include "Exception.hh"
#include "IOperand.hh"

class Int8 : public IOperand
{
public:
  Int8(const std::string & v);
  ~Int8();

private:
  OperandTpe::eOperandType _tpe;
  std::string _repre;
  int   _precision;
  char _value;

public:
  std::string const & toString() const;
  int getPrecision() const;
  OperandTpe::eOperandType getType() const;
  char	getValue() const;
  IOperand *operator+(const IOperand &rhs) const;
  IOperand *operator-(const IOperand &rhs) const;
  IOperand *operator*(const IOperand &rhs) const;
  IOperand *operator/(const IOperand &rhs) const;
  IOperand *operator%(const IOperand &rhs) const;
};

class Int16 : public IOperand
{
public:
  Int16(const std::string & v);
  ~Int16();

private:
  OperandTpe::eOperandType _tpe;
  std::string _repre;
  int   _precision;
  short _value;

public:
  std::string const & toString() const;
  int getPrecision() const;
  OperandTpe::eOperandType getType() const;
  short getValue() const;
  IOperand *operator+(const IOperand &rhs) const;
  IOperand *operator-(const IOperand &rhs) const;
  IOperand *operator*(const IOperand &rhs) const;
  IOperand *operator/(const IOperand &rhs) const;
  IOperand *operator%(const IOperand &rhs) const;
};

class Int32 : public IOperand
{
public:
  Int32(const std::string & v);
  ~Int32();

private:
  OperandTpe::eOperandType _tpe;
  std::string _repre;
  int   _precision;
  int _value;

public:
  std::string const & toString() const;
  int getPrecision() const;
  OperandTpe::eOperandType getType() const;
  int	getValue() const;
  IOperand *operator+(const IOperand &rhs) const;
  IOperand *operator-(const IOperand &rhs) const;
  IOperand *operator*(const IOperand &rhs) const;
  IOperand *operator/(const IOperand &rhs) const;
  IOperand *operator%(const IOperand &rhs) const;
};

class Double : public IOperand
{
public:
  Double(const std::string & v);
  ~Double();
private:
  OperandTpe::eOperandType _tpe;
  std::string _repre;
  int   _precision;
  double _value;

public:
  std::string const & toString() const;
  int getPrecision() const;
  OperandTpe::eOperandType getType() const;
  double   getValue() const;
  IOperand *operator+(const IOperand &rhs) const;
  IOperand *operator-(const IOperand &rhs) const;
  IOperand *operator*(const IOperand &rhs) const;
  IOperand *operator/(const IOperand &rhs) const;
  IOperand *operator%(const IOperand &rhs) const;
};

class Float : public IOperand
{
public:
  Float(const std::string & v);
  ~Float();
private:
  OperandTpe::eOperandType _tpe;
  std::string _repre;
  int   _precision;
  float _value;

public:
  std::string const & toString() const;
  int getPrecision() const;
  OperandTpe::eOperandType getType() const;
  float   getValue() const;

  IOperand *operator+(const IOperand &rhs) const;
  IOperand *operator-(const IOperand &rhs) const;
  IOperand *operator*(const IOperand &rhs) const;
  IOperand *operator/(const IOperand &rhs) const;
  IOperand *operator%(const IOperand &rhs) const;
};


#endif
