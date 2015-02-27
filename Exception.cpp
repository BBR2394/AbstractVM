//
// Exception.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Wed Feb 25 18:33:15 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 15:57:21 2015 Bertrand-Rapello Baptiste
//

#include "Exception.hh"

ExceptOpe::ExceptOpe(const std::string &msg) : _msg(msg)
{

}

std::string const &ExceptOpe::getComponent() const throw()
{
  return _msg;
}

ExceptRead::ExceptRead(const std::string &msg) : _msg(msg)
{

}

std::string const &ExceptRead::getComponent() const throw()
{
  return _msg;
}

