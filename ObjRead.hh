//
// ObjRead.hh for  in /home/baptiste/rendu
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:03:29 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 15:43:29 2015 Bertrand-Rapello Baptiste
//

#ifndef		OBJREAD_HH_
# define	OBJREAD_HH_

# include	<iostream>
# include	<string>
# include	<fstream>
# include	"ProcessUnit.hh"

class		ObjRead
{
  enum		sentence
    {
      push,
      pop,
      dump,
      assert,
      add,
      sub,
      mul,
      div,
      mod,
      print,
      exit,
    };

public:
  ObjRead();
  ObjRead(std::string name);
  ~ObjRead();
  
private:
  std::ifstream	_file;
  ProcessUnit	*_cpu;
public:
  void		readASM();
  void		push_fc(std::string);
  void		pop_fc(std::string);
  void		dump_fc(std::string);
  void		assert_fc(std::string);
  void		add_fc(std::string);
  void		sub_fc(std::string);
  void	        mul_fc(std::string);
  void		div_fc(std::string);
  void		mod_fc(std::string);
  void		print_fc(std::string);
  void		exit_fc(std::string);
  void		check_line(std::string);
};


#endif		/* OBJREAD_HH_ */
