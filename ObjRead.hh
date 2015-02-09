//
// ObjRead.hh for  in /home/baptiste/rendu
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:03:29 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb  9 18:28:22 2015 Bertrand-Rapello Baptiste
//

#ifndef OBJREAD_HH_
# define OBJREAD_HH_

# include	<iostream>
# include	<fstream>

class ObjRead
{
public:
  ObjRead();
  ObjRead(std::string name);
  ~ObjRead();

private:
  std::ifstream _file;

public:
  std::string readASM();
};


#endif
