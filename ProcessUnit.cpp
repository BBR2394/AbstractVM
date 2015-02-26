//
// ProcessUnit.cpp for Abstract VM le Retour  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 19 14:58:26 2015 Bertrand-Rapello Baptiste
// Last update Thu Feb 26 19:00:44 2015 Bertrand-Rapello Baptiste
//

#include <cstdlib>
#include "ProcessUnit.hh"

ProcessUnit::ProcessUnit()
{
  this->tabPtr[OperandTpe::Int8] = &ProcessUnit::createInt8;
  this->tabPtr[OperandTpe::Int16] = &ProcessUnit::createInt16;
  this->tabPtr[OperandTpe::Int32] = &ProcessUnit::createInt32;
  this->tabPtr[OperandTpe::Double] = &ProcessUnit::createDouble;
  this->tabPtr[OperandTpe::Float] = &ProcessUnit::createFloat;
}

ProcessUnit::~ProcessUnit()
{

}

IOperand * ProcessUnit::createOperand(OperandTpe::eOperandType type, const std::string & value)
{
  std::cout << "CREATION dun operand  tpe : " << type << std::endl;
  //(this->*tabPtr[type])(value);
  //return NULL;

  switch (type)
    {
    case OperandTpe::Int8:
      _pile.push(createInt8(value));
      break;
    case OperandTpe::Int16:
      _pile.push(createInt16(value));
      break;
    case OperandTpe::Int32:
      _pile.push(createInt32(value));
      break;
    case OperandTpe::Double:
      _pile.push(createDouble(value));
      break;
    case OperandTpe::Float:
      _pile.push(createFloat(value));
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

IOperand * ProcessUnit::createDouble(const std::string & value)
{
  IOperand *test;

  test = new class Double(value);

  return test;
}

IOperand * ProcessUnit::createFloat(const std::string & value)
{
  IOperand *test;

  test = new class Float(value);

  return test;
}

void ProcessUnit::add()
{
  IOperand *nb1;
  IOperand *nb2;
  IOperand *res;

  if (_pile.empty())
    throw ExceptOpe("the stack is empty");
  nb1 = _pile.top();
  _pile.pop();
  if (_pile.empty())
    throw ExceptOpe("not enough number in the stack");
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
  delete nb1;
  delete nb2;
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
  delete nb1;
  delete nb2;
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
  delete nb1;
  delete nb2;
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
      res = *nb2 / *nb1;
      _pile.push(res);
    }
  else
    {
      //attention
      std::cout << "else " << std::endl;
      res = *nb2 / *nb1;
      _pile.push(res);
    }
  delete nb1;
  delete nb2;
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
      res = *nb2 % *nb1;
      _pile.push(res);
    }
  else
    {
      //attention
      std::cout << "else " << std::endl;
      res = *nb2 % *nb1;
      _pile.push(res);
    }
  delete nb1;
  delete nb2;
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

void ProcessUnit::pop()
{
  if (_pile.empty())
    throw ExceptOpe("pile vide (pop)");
  _pile.pop();
}

void ProcessUnit::assert(OperandTpe::eOperandType type, const std::string & value)
{
  IOperand *nb1;
  IOperand *nb2;

  createOperand(type, value);
  nb1 = _pile.top();
  _pile.pop();
  nb2 = _pile.top();

  if ((nb1->toString() == nb2->toString()) && nb1->getType() == nb2->getType());
  else
    throw ExceptOpe("assert: not egale");
  delete nb1;
}

void ProcessUnit::print()
{
  IOperand  *nb1;
  
  char	nb;

  try
    {
      this->assert(OperandTpe::Int8, _pile.top()->toString());
    }
  catch (const ExceptOpe& e)
    {
      throw ExceptOpe("cannot print");
    }
  nb1 = _pile.top();
  std::cout << nb1->toString() << std::endl;
  std::istringstream convert(nb1->toString());
  //convert.str(nb1->toString());
  convert >> nb;
  std::cout << (int)nb << std::endl;

}
