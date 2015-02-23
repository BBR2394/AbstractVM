//
// main.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:50:02 2015 Bertrand-Rapello Baptiste
// Last update Mon Feb 23 16:00:12 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

#include "ObjRead.hh"
#include "ProcessUnit.hh"

int	main()
{
  ObjRead file("asm.txt");
  //ObjRead file;
  ProcessUnit cpu;

  std::cout << "bonjour" << std::endl;
  std::cout << file.readASM() << std::endl;

  cpu.createOperand(Int8, "42");
  cpu.dump();
  return 0;
}
