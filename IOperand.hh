//
// IOperand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:27:02 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb  9 16:30:59 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

class IOperand
{
public:

  virtual std::string const & toString() const = 0; // Renvoie une string reprensentant l’instance
  virtual int getPrecision() const = 0; // Renvoie la precision du type de l’instance
  virtual eOperandType getType() const = 0; // Renvoie le type de l’instance. Voir plus bas

  virtual IOperand *operator+(const IOperand &rhs) const = 0;
  virtual IOperand *operator-(const IOperand &rhs) const = 0;
  virtual IOperand *operator*(const IOperand &rhs) const = 0;
  virtual IOperand *operator/(const IOperand &rhs) const = 0;
  virtual IOperand *operator%(const IOperand &rhs) const = 0;

  virtual ~IOperand() {}
};
