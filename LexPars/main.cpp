//
// main.cpp for  in /home/baptiste/Documents/TPepitechTek2bis/abstractVM/LexPars
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Sun Feb 15 21:40:40 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 17 18:29:52 2015 Bertrand-Rapello Baptiste
//

#include <iostream>
#include "LinkLex.hh"

int main()
{
  Lexer lex("./asm.txt");
  std::list<LinkLex *> *lst;
  std::list<LinkLex *>::iterator it;
  LinkLex *link;

  lst = lex.readASM();
  it = lst->begin();
  std::cout << lst->front()->getWord() << std::endl;;
  lst = lex.readASM();
  it = lst->begin();
  while (it != lst->end())
    {
      link = *it;
      std::cout << "word : " << link->getWord() << std::endl;
      it++;
    }

  return 0;
}
