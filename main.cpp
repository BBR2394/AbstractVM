//
// main.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:50:02 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb  9 18:30:55 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

#include "ObjRead.hh"

int	main()
{
  ObjRead file("asm.txt");
  std::cout << "bonjour" << std::endl;
  std::cout << file.readASM() << std::endl;
  return 0;
}
