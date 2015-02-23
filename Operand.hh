//
// Operand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:44:21 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 11:08:06 2015 Bertrand-Rapello Baptiste
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <iostream>
#include <string>

#include "IOperand.hh"

class Int8 : public IOperand
{
public:
  Int8(const std::string & v);
  ~Int8();

private:
  eOperandType _tpe;
  std::string _repre;
  int   _precision;
  char _value;
  std::string _v;

public:
  //std::string const & toString() const;
  int getPrecision() const;
  eOperandType getType() const;
  std::string getV() const;
};

class Int16 : public IOperand
{
public:
  Int16(const std::string & v);
  ~Int16();

private:
  eOperandType _tpe;
  std::string _repre;
  int   _precision;
  short _value;
  std::string _v;

public:
  //std::string const & toString() const;
  int getPrecision() const;
  eOperandType getType() const;
  std::string getV() const;
};

class Int32 : public IOperand
{
public:
  Int32(const std::string & v);
  ~Int32();

private:
  eOperandType _tpe;
  std::string _repre;
  int   _precision;
  int _value;
  std::string _v;

public:
  //std::string const & toString() const;
  int getPrecision() const;
  eOperandType getType() const;
  std::string getV() const;
};



#endif
