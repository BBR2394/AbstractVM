//
// main.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:50:02 2015 Bertrand-Rapello Baptiste
// Last update Wed Feb 11 11:37:48 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

#include "IOperand.hh"
#include "ObjRead.hh"

int	main()
{
  ObjRead file("asm.txt");
  std::cout << "bonjour" << std::endl;
  std::cout << file.readASM() << std::endl;
  return 0;
}
