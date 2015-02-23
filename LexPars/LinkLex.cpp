//
// LinkLex.cpp for  in /home/baptiste/Documents/TPepitechTek2bis/abstractVM/LexPars
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Tue Feb 17 16:43:24 2015 Bertrand-Rapello Baptiste
// Last update Tue Feb 17 16:47:37 2015 Bertrand-Rapello Baptiste
//

#include "LinkLex.hh"

LinkLex::LinkLex(std::string str, token id) : _id(id), _word(str)
{
}

LinkLex::~LinkLex()
{

}

int LinkLex::getId() const
{
  return _id;
}

std::string LinkLex::getWord() const
{
  return _word;
}
