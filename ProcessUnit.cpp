//
// ProcessUnit.cpp for Abstract VM le Retour  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:58:26 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 15:49:27 2015 Bertrand-Rapello Baptiste
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
    case Int16:
      _pile.push(createInt16(value));
      break;
    case Int32:
      _pile.push(createInt32(value));
      break;
    default :
      std::cout << "un probleme" << std::endl;
      break;
    }
  
  return NULL;
}

IOperand * ProcessUnit::createInt8(const std::string & value)
{
  IOperand *test;

  test = new class Int8(value);

  return test;
}

IOperand * ProcessUnit::createInt16(const std::string & value)
{
  IOperand *test;

  test = new class Int16(value);

  return test;
}
IOperand * ProcessUnit::createInt32(const std::string & value)
{
  IOperand *test;

  test = new class Int32(value);

  return test;
}


void ProcessUnit::dump()
{
  std::stack<IOperand *> cpy;
  IOperand *cpybis;

  cpy = _pile;
  while (!cpy.empty())
    {
      cpybis = cpy.top();
      std::cout << cpybis->getV() << std::endl;
      cpy.pop();
    }
  
}
