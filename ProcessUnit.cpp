//
// ProcessUnit.cpp for Abstract VM le Retour  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:58:26 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 24 21:45:49 2015 Bertrand-Rapello Baptiste
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
  std::cout << "CREATION dun operand  tpe : " << type << std::endl;  
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

void ProcessUnit::add()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();
  _pile.pop();
  std::cout << "je vais additionner " << nb1->toString() << " et " <<  nb2->toString() << std::endl;
  if (nb1->getType() <= nb2->getType())
    {
      res = *nb1 + *nb2;
      _pile.push(res);
      std::cout << "le type du nouvel objet (1) " << res->getType() << std::endl;
      //res = createOperand(nb1->getType(),
    }
  else 
    {
      res = *nb2 + *nb1;
      std::cout << "le type du nouvel objet (2) " << res->getType() << std::endl;
      _pile.push(res);
    }

}
void ProcessUnit::sub()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();
  _pile.pop();
  std::cout << "je vais soustraire " << nb1->toString() << " et " <<  nb2->toString() << "et le type " << nb1->getType() << " " << nb2->getType() << std::endl;
  if (nb1->getType() <= nb2->getType())
    {
      res = *nb1 - *nb2;
      _pile.push(res);
    }
  else
    {
      std::cout << "else " << std::endl;
      res = *nb2 -  *nb1;
      _pile.push(res);
    }
}

void ProcessUnit::mul()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();
  _pile.pop();
  std::cout << "je vais multiplier " << nb1->toString() << " et " <<  nb2->toString() << "et le type " << nb1->getType() << " " << nb2->getType() << std::endl;
  if (nb1->getType() <= nb2->getType())
    {
      res = *nb1 * *nb2;
      _pile.push(res);
    }
  else
    {
      std::cout << "else " << std::endl;
      res = *nb2 * *nb1;
      _pile.push(res);
    }
}


void ProcessUnit::div()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();
  _pile.pop();
  std::cout << "je vais diviser " << nb1->toString() << " et " <<  nb2->toString() << "et le type " << nb1->getType() << " " << nb2->getType() << std::endl;
  if (nb1->getType() <= nb2->getType())
    {
      res = *nb1 / *nb2;
      _pile.push(res);
    }
  else
    {
      //attention
      std::cout << "else " << std::endl;
      res = *nb2 / *nb1;
      _pile.push(res);
    }
}

void ProcessUnit::mod()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();
  _pile.pop();
  std::cout << "je vais Moduler " << nb1->toString() << " et " <<  nb2->toString() << "et le type " << nb1->getType() << " " << nb2->getType() << std::endl;
  if (nb1->getType() <= nb2->getType())
    {
      res = *nb1 % *nb2;
      _pile.push(res);
    }
  else
    {
      //attention
      std::cout << "else " << std::endl;
      res = *nb2 % *nb1;
      _pile.push(res);
    }
}

void ProcessUnit::dump()
{
  std::stack<IOperand *> cpy;
  IOperand *cpybis;

  cpy = _pile;
  while (!cpy.empty())
    {
      cpybis = cpy.top();
      std::cout << cpybis->toString() << std::endl;
      cpy.pop();
    }
  
}
