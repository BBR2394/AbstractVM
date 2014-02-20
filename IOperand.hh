//
// IOperand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 20 11:55:26 2014 Bertrand-Rapello Baptiste
// Last update Thu Feb 20 11:58:58 2014 Bertrand-Rapello Baptiste
//

#ifndef IOPERAND_HH_
#define IOPERAND_HH_

clss IOperand
{
 public:

  virtual std::string const & toString() const = 0;
  virtual int getPrecision() const = 0;
  virtual eOperandType getType() const = 0;

  virtual IOperand * operator+(const IOperand &rhs) const = 0 ;
  virtual IOperand * operator-(const IOperand &rhs) const = 0 ;
  virtual IOperand * operator*(const IOperand &rhs) const = 0 ;
  virtual IOperand * operator/(const IOperand &rhs) const = 0 ;
  virtual IOperand * operator%(const IOperand &rhs) const = 0 ;
	
};

#endif
