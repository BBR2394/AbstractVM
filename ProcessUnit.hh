//
// ProcessUnit.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:52:29 2015 Bertrand-Rapello Baptiste
// Last update Thu Feb 26 18:55:54 2015 Bertrand-Rapello Baptiste
//

#ifndef PROCESSUNIT_HH_
# define PROCESSUNIT_HH_

#include <iostream>
#include <map>
#include <stack>

#include "Operand.hh"

class ProcessUnit
{
public:
  ProcessUnit();
  ~ProcessUnit();

private:
  std::stack<IOperand*> _pile;

  std::map<OperandTpe::eOperandType, IOperand *(ProcessUnit::*)(const std::string &)> tabPtr;
  //deuxieme tentative de pointeur sur fonction membre
  //IOperand *(ProcessUnit::*)(const std::string &);

  //tentative de pointeur sur membre ...
  //IOperand *(*ptr)(const std::string &);

  IOperand *createInt8(const std::string & value);
  IOperand *createInt16(const std::string & value);
  IOperand *createInt32(const std::string & value);
  IOperand *createFloat(const std::string & value);
  IOperand *createDouble(const std::string & value);

public:
  IOperand * createOperand(OperandTpe::eOperandType type, const std::string & value);
  void	add();
  void	dump();
  void sub();
  void mul();
  void div();
  void mod();
  void pop();
  void assert(OperandTpe::eOperandType type, const std::string & value);
  void print();
};

#endif
