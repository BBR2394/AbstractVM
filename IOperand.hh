//
// IOperand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:27:02 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 24 19:40:04 2015 Bertrand-Rapello Baptiste
//

#ifndef IOPERAND_HH_
# define IOPERAND_HH_

#include <iostream>

namespace OperandTpe
{
}
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

  virtual std::string const & toString() const = 0; // Renvoie une string reprensentant l’instance
  virtual int getPrecision() const = 0; // Renvoie la precision du type de l’instance
  virtual eOperandType getType() const = 0; // Renvoie le type de l’instance. Voir plus bas
  //virtual std::string getV() const = 0;
  virtual IOperand *operator+(const IOperand &rhs) const = 0; 
  virtual IOperand *operator-(const IOperand &rhs) const = 0;
  virtual IOperand *operator*(const IOperand &rhs) const = 0;

  virtual IOperand *operator/(const IOperand &rhs) const = 0;
  virtual IOperand *operator%(const IOperand &rhs) const = 0;

  virtual ~IOperand() {}
};

#endif
