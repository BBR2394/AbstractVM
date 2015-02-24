//
// main.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:50:02 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 24 21:45:17 2015 Bertrand-Rapello Baptiste
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

  cpu.createOperand(Int16, "-42");
  cpu.createOperand(Int8, "83");
  std::cout << "---DUMP---" << std::endl;
  cpu.dump();
  std::cout << "----------" << std::endl;
  cpu.add();
  std::cout << "---DUMP---" << std::endl;
  cpu.dump();
  std::cout << "----------" << std::endl;
  cpu.createOperand(Int8, "83");
  cpu.sub();
  std::cout << "---DUMP---" << std::endl;
  cpu.dump();
  std::cout << "----------" << std::endl;
  cpu.createOperand(Int32, "-42");
  cpu.createOperand(Int32, "42");
  cpu.mul();
  std::cout << "---DUMP---" << std::endl;
  cpu.dump();
  std::cout << "----------" << std::endl;
  cpu.createOperand(Int32, "42");
  cpu.mod();
  std::cout << "---DUMP---" << std::endl;
  cpu.dump();
  std::cout << "----------" << std::endl;
  return 0;
}
