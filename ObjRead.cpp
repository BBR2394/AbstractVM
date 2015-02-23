//
// ObjRead.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:06:07 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 15:59:08 2015 Bertrand-Rapello Baptiste
//

#include	"ObjRead.hh"

ObjRead::ObjRead() : _file(0)
{

}

ObjRead::ObjRead(std::string name) : _file(name.c_str())
{
}

ObjRead::~ObjRead()
{

}

std::string ObjRead::readASM()
{
  std::string lnasm;

  std::getline(_file, lnasm);
  return lnasm;
}
