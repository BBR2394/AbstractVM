//
// ProcessUnit.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:52:29 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 24 19:39:52 2015 Bertrand-Rapello Baptiste
//

#ifndef PROCESSUNIT_HH_
# define PROCESSUNIT_HH_

#include <iostream>
#include <stack>

#include "Operand.hh"

class ProcessUnit
{
public:
  ProcessUnit();
  ~ProcessUnit();

private:
  std::stack<IOperand*> _pile;

  //tentative de pointeur sur membre ...
  //IOperand *(*ptr)(const std::string &);

  IOperand *createInt8(const std::string & value);
  IOperand *createInt16(const std::string & value);
  IOperand *createInt32(const std::string & value);
  /*
  IOperand *createFloat(const std::string & value);
  IOperand *createDouble(const std::string & value);
  */
public:
  IOperand * createOperand(eOperandType type, const std::string & value);
  void	add();
  void	dump();
  void sub();
  void mul();
  void div();
  void mod();
};

#endif
