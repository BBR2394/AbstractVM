//
// Lexer.cpp for  in /home/baptiste/Documents/TPepitechTek2bis/abstractVM/LexPars
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Sun Feb 15 21:31:22 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 17 17:50:23 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "Lexer.hh"
#include "LinkLex.hh"

Lexer::Lexer()
{

}

Lexer::Lexer(std::string name) : _file(name.c_str())
{

}

Lexer::~Lexer()
{

}
/*
token Lexer::identifyCmd(std::string )
{

}
*/
std::list<LinkLex *> *Lexer::readASM()
{
  std::string lnasm;
  std::list<LinkLex *> *lst;
  LinkLex *link;
  std::string sub;
  size_t pos;
  size_t posbis;

  std::getline(_file, lnasm);
  lst = new std::list<LinkLex *>;
  pos = lnasm.find(" ");
  if (pos == std::string::npos)
    {
      pos = lnasm.rfind(lnasm[lnasm.size()-1]);
      pos += 1;
      sub = lnasm.substr(0, pos);
      link = new LinkLex(sub, Instruction);
      lst->push_front(link);
      link = new LinkLex("", Separator);
      lst->push_back(link);
      return lst;
    }
  else
    {
      sub = lnasm.substr(0, pos);
      //std::cout << "position " << pos  << "  " << sub  << std::endl;
      link = new LinkLex(sub, Instruction);
      lst->push_front(link);
      posbis = lnasm.find("(");
      sub = lnasm.substr(pos, posbis);
      link = new LinkLex(sub, Type);
      lst->push_back(link);
      pos = lnasm.find(")");
      sub = lnasm.substr(posbis, pos);
      link = new LinkLex(sub, Valor);
      lst->push_back(link);
      posbis = lnasm.rfind(lnasm[lnasm.size()-1]);
      if (pos == posbis)
	{
	  link = new LinkLex("", End);
	  lst->push_back(link);
	  return lst;  
	}
      else
	{
	  std::cout << "normalement il ne devrait y avoir rien derriere" << std::endl;
	  /*
	    il ne faut pas mettre cela et faire une exeption
	   */
	  link = new LinkLex("", End);
          lst->push_back(link);
          return lst;
	}
    }

  /*
  pos = lnasm.find("(");
  if (pos == std::string::npos)
    std::cout << "pas de parenthese" << std::endl;
  */
  // sub = lnasm.substr(pos);

  return lst;
}
