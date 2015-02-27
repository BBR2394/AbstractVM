//
// MainDeTest.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Fri Feb 27 14:51:03 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 17:09:10 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Computer.hh"

int	main(int ac, char **av)
{
  if (ac <= 1)
    {
      std::cout << "no file" << std::endl;
    }
  else
    {
      ObjRead	computer(av[1]);
      //Computer mac("asm.txt");
      try
	{
	  computer.readASM();
	}
      catch (const ExceptRead& e)
	{
	  std::cout << "An exception \"ExceptRead\" has been thrown :\n     -> " << e.getComponent() << std::endl;
	  return -1;
	}
      catch (const ExceptOpe& e)
	{
	  std::cout << "An exception \"ExceptOpe\" has been thrown :\n     -> " << e.getComponent() << std::endl;
	  return -1;
	}
      //mac.work();
    }
  return 0;
}
