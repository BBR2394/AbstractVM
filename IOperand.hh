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

# include <sstream>
# include <cmath>
# include "Exception.hh"

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

  virtual IOperand    *operator+(const IOperand &obj) const = 0;
  virtual IOperand    *operator-(const IOperand &obj) const = 0;
  virtual IOperand    *operator*(const IOperand &obj) const = 0;
  virtual IOperand    *operator/(const IOperand &obj) const = 0;
  virtual IOperand    *operator%(const IOperand &obj) const = 0;
	virtual IOperand    *operator=(const IOperand &obj) const = 0;
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
	Operand(const std::string &name, eOperandType type, int precision);
  virtual             ~Operand();
  virtual std::string const & toString() const;
  virtual int getPrecision() const;
  virtual eOperandType getType() const;

  virtual IOperand    *operator+(const IOperand &obj) const;
  virtual IOperand    *operator-(const IOperand &obj) const;
  virtual IOperand    *operator*(const IOperand &obj) const;
  virtual IOperand    *operator/(const IOperand &obj) const;
  virtual IOperand    *operator%(const IOperand &obj) const;
  virtual IOperand    *operator=(const IOperand &obj) const;

};

class Int8 : public Operand<char>
  {
    public:
      Int8(const std::string & val);
      ~Int8();
  };

  class Int16 : public Operand<short>
  {
    public:
      Int16(const std::string & val);
      ~Int16();
  };

  class Int32 : public Operand<int>
  {
    public:
      Int32(const std::string & val);
      ~Int32();
  };

  class Float : public Operand<float>
  {
    public:
      Float(const std::string & val);
      ~Float();
  };

  class Double : public Operand<double>
  {
    public:
      Double(const std::string & val);
      ~Double();
  };

  template<typename T>
    class Converter
    {
      public:
      static T const           convertNameToValue(const std::string &name)
      {
        T   value;
        std::stringstream conv;
        conv << name;
        conv >> value;
        return (value);
      }

      static std::string const  convertValueToName(const T &val)
      {
        std::string name;
        std::stringstream conv;
        conv << val;
        conv >> name;
        return (name);
      }
    };

  template<>
    class Converter<char>
    {
      public:
      static char        convertNameToValue(const std::string &name)
      {
        int number;
        std::stringstream conv;
        conv << name;
        conv >> number;
        return ((char) number);
      }

      static std::string const    convertValueToName(char &val)
      {
        std::string name;
        std::stringstream conv;
        conv << (int) val;
        conv >> name;
        return (name);
      }
    };

  template <class T>
    class Modulo
    {
      public:
        static T modulo(const T &a, const T &b)
        {
          return (a % b);
        }
    };

  template <>
    class Modulo<float>
    {
      public:
        static float modulo(const float &a, const float &b)
        {
          return (std::fmod(a, b));
        }
    };

  template <>
    class Modulo<double>
    {
      public:
        static double modulo(const double &a, const double &b)
        {
          return (std::fmod(a, b));
        }
    };

#endif
