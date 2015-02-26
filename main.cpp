//
// main.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 16:50:02 2015 Bertrand-Rapello Baptiste
// Last update Thu Feb 26 12:08:21 2015 Bertrand-Rapello Baptiste
//

#include <iostream>

#include "Exception.hh"
#include "ObjRead.hh"
#include "ProcessUnit.hh"

int	main()
{
  ObjRead file("asm.txt");
  //ObjRead file;
  ProcessUnit cpu;

  std::cout << "bonjour" << std::endl;
  std::cout << file.readASM() << std::endl;
  try
    {
      cpu.createOperand(OperandTpe::Int16, "-42");
      //cpu.add();
      cpu.createOperand(OperandTpe::Int8, "100");
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
      cpu.add();
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
      cpu.createOperand(OperandTpe::Int8, "83");
      cpu.sub();
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
      std::cout << "il faut que je verifie mais il semlble y avoir un probleme avec la division et le modulo " << std::endl;
      cpu.createOperand(OperandTpe::Int32, "-42");
      cpu.createOperand(OperandTpe::Int32, "42");
      cpu.mul();
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
      cpu.createOperand(OperandTpe::Int32, "42");
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
      cpu.div();
      std::cout << "---DUMP---" << std::endl;
      cpu.dump();
      std::cout << "----------" << std::endl;
    }
  catch (const ExceptOpe& e)
    {
      std::cout << "an exception has been thrown :-/ : " << e.getComponent() << std::endl;
      return -1;
    }
  return 0;
}
