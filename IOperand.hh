//
// IOperand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:27:02 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 20 18:11:38 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

enum eOperandType
  {
    Int8,
    Int16,
    Int32,
    Float,
    Double
  };

class IOperand
{
public:

  virtual std::string  toString() const = 0; // Renvoie une string reprensentant l’instance
  virtual int getPrecision() const = 0; // Renvoie la precision du type de l’instance
  virtual eOperandType getType() const = 0; // Renvoie le type de l’instance. Voir plus bas

  /*
  virtual IOperand *operator+(const IOperand &rhs) const = 0;
  virtual IOperand *operator-(const IOperand &rhs) const = 0;
  virtual IOperand *operator*(const IOperand &rhs) const = 0;
  virtual IOperand *operator/(const IOperand &rhs) const = 0;
  virtual IOperand *operator%(const IOperand &rhs) const = 0;
  */
  virtual ~IOperand() {}



};
