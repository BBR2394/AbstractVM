//
// ProcessUnit.cpp for Abstract VM le Retour  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:58:26 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 09:54:34 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>
#include "ProcessUnit.hh"

ProcessUnit::ProcessUnit()
{
}

ProcessUnit::~ProcessUnit()
{

}

IOperand * ProcessUnit::createOperand(eOperandType type, const std::string & value)
{
  switch (type)
    {
    case Int8:
      _pile.push(createInt8(value));
      break;
    default :
      break;
    }
}

IOperand * ProcessUnit::createInt8(const std::string & value)
{
  IOperand *test;

  test = new Int8(value);

  return NULL;
}

void ProcessUnit::dump()
{
  std::stack<IOperand *> cpy;

  cpy = _pile;
  while (!cpy.empty())
    {
      std::cout << cpy.top()->toString() << std::endl;
      cpy.pop();
    }

}
