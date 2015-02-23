//
// Operand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb 23 09:44:21 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 09:55:13 2015 Bertrand-Rapello Baptiste
//

#ifndef OPERAND_HH_
# define OPERAND_HH_

#include <iostream>
#include <string>

#include "IOperand.hh"

class Int8 : public IOperand
{
public:
  Int8(std::string v);
  ~Int8();

private:
  eOperandType _tpe;
  std::string _repre;
  int   _precision;

public:
  std::string const & toString() const;
  int getPrecision() const;
  eOperandType getType() const;

};

#endif
