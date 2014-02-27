//
// IOperand.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Thu Feb 20 11:55:26 2014 Bertrand-Rapello Baptiste
// Last update Thu Feb 20 17:28:38 2014 Koszyczek Laurent
//

#ifndef IOPERAND_HH_
# define IOPERAND_HH_

typedef enum
{
  INT8,
  INT16,
  INT32,
  FLOAT,
  DOUBLE,
  UNDEF
} eOperandType;

class IOperand
{
 public:

  virtual std::string const & toString() const = 0;
  virtual int getPrecision() const = 0;
  virtual eOperandType getType() const = 0;

  virtual IOperand    *operator+(const IOperand &rhs) const = 0 ;
  virtual IOperand    *operator-(const IOperand &rhs) const = 0 ;
  virtual IOperand    *operator*(const IOperand &rhs) const = 0 ;
  virtual IOperand    *operator/(const IOperand &rhs) const = 0 ;
  virtual IOperand    *operator%(const IOperand &rhs) const = 0 ;
	
};

template<typename T>
class Operand : public IOperand
{
protected:
    T             val;
    std::string   name;
    eOperandType  type;
    int           precision;

public:
	Operand(const std::string name, eOperandType type, int precision);
	~Operand();

  virtual std::string const & toString() const;
  virtual int getPrecision() const;
  virtual eOperandType getType() const;

  virtual IOperand    *operator+(const IOperand &rhs) const;
  virtual IOperand    *operator-(const IOperand &rhs) const;
  virtual IOperand    *operator*(const IOperand &rhs) const;
  virtual IOperand    *operator/(const IOperand &rhs) const;
  virtual IOperand    *operator%(const IOperand &rhs) const;
  virtual ~Operand();
};

class Int8 : public AOperand<char>
  {
    public:
      Int8(const std::string & val);
      ~Int8();
  };

  class Int16 : public AOperand<short>
  {
    public:
      Int16(const std::string & val);
      ~Int16();
  };

  class Int32 : public AOperand<int>
  {
    public:
      Int32(const std::string & val);
      ~Int32();
  };

  class Float : public AOperand<float>
  {
    public:
      Float(const std::string & val);
      ~Float();
  };

  class Double : public AOperand<double>
  {
    public:
      Double(const std::string & val);
      ~Double();
  };



#endif
