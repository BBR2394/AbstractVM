//
// Exception.hh for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Feb 25 18:19:41 2015 Bertrand-Rapello Baptiste
// Last update Wed Feb 25 18:38:29 2015 Bertrand-Rapello Baptiste
//

#ifndef EXCEPTION_HH_
# define EXCEPTION_HH_

#include <iostream>
#include <exception>

class ExceptOpe : public std::exception
{
public:
  ExceptOpe(const std::string &msg);
  virtual ~ExceptOpe() throw() {};

protected:
  std::string _msg;
public:
  virtual std::string const &getComponent() const throw();
};

#endif
