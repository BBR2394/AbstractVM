//
// LinkLex.hh for  in /home/baptiste/Documents/TPepitechTek2bis/abstractVM/LexPars
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Feb 17 16:41:35 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 17 16:47:24 2015 Bertrand-Rapello Baptiste
//

#ifndef LINKLEX_HH_
# define LINKLEX_HH_

#include <iostream>
#include "Lexer.hh"

class LinkLex
{
public:
  LinkLex(std::string, token);
  ~LinkLex();

private:
  std::string	_word;
  token		_id;

public:
  int getId() const;
  std::string getWord() const;

};

#endif
