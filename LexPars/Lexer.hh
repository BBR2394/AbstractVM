//
// Lexer.hh for  in /home/baptiste/Documents/TPepitechTek2bis/abstractVM/LexPars
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Sun Feb 15 21:26:17 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 17 17:50:03 2015 Bertrand-Rapello Baptiste
//

#ifndef LEXER_HH_
# define LEXER_HH_

#include <iostream>
#include <string>
#include <list>
# include       <fstream>

class LinkLex;

enum token
  {
    Instruction,
    Separator,
    Type,
    Valor,
    End
  };

class Lexer
{
public:
  Lexer();
  Lexer(std::string name);
  ~Lexer();

private:
  std::ifstream _file;

public:
  std::list<LinkLex *> *readASM();
};

#endif
