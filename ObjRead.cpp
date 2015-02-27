//
// ObjRead.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:06:07 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 05:44:31 2015 mantez paul
//

#include		"ObjRead.hh"

ObjRead::ObjRead() : _file(0)
{

}

ObjRead::ObjRead(std::string name) : _file(name.c_str())
{
}

ObjRead::~ObjRead()
{
}

void			ObjRead::push_fc(std::string lnasm)
{
  std::cout << "Ici j'ai push : " << lnasm << std::endl;
}

void			ObjRead::pop_fc(std::string lnasm)
{
  std::cout << "Ici j'ai pop : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.pop();
}

void			ObjRead::dump_fc(std::string lnasm)
{
  std::cout << "Ici j'ai dump : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.dump();
}

void			ObjRead::assert_fc(std::string lnasm)
{
  std::cout << "Ici j'ai assert : " << lnasm << std::endl;
}

void			ObjRead::add_fc(std::string lnasm)
{
  std::cout << "Ici j'ai add : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.add();
}

void			ObjRead::sub_fc(std::string lnasm)
{
  std::cout << "Ici j'ai sub : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.sub();
}

void			ObjRead::mul_fc(std::string lnasm)
{
  std::cout << "Ici j'ai mul : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.mul();
}

void			ObjRead::div_fc(std::string lnasm)
{
  std::cout << "Ici j'ai div : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.div();
}

void			ObjRead::mod_fc(std::string lnasm)
{
  std::cout << "Ici j'ai mod : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.mod();
}

void			ObjRead::print_fc(std::string lnasm)
{
  std::cout << "Ici j'ai print : " << lnasm << std::endl;

  ProccessUnit		ftn;

  ftn.print();
}

void			ObjRead::exit_fc(std::string lnasm)
{
  std::cout << "Ici j'ai exit : " << lnasm << std::endl;
}

void			ObjRead::check_line(std::string lnasm)
{
  int			a;
  std::string		part1;

  a = 0;
  while (lnasm[a] != ' ' && lnasm[a] != '\n' && lnasm[a])
    {
      part1.push_back(lnasm[a]);
      a++;
    }
  if (part1 == "\n")
    return;
  else if (part1 == "push")
    push_fc(part1);
  else if (part1 == "pop")
    pop_fc(part1);
  else if (part1 == "dump")
    dump_fc(part1);
  else if (part1 == "assert")
    assert_fc(part1);
  else if (part1 == "add")
    add_fc(part1);
  else if (part1 == "sub")
    add_fc(part1);
  else if (part1 == "mul")
    mul_fc(part1);
  else if (part1 == "div")
    div_fc(part1);
  else if (part1 == "mod")
    mod_fc(part1);
  else if (part1 == "print")
    print_fc(part1);
  else if (part1 == "exit")
    exit_fc(part1);
}

void			ObjRead::readASM()
{
  std::string		lnasm;

  if (_file)
    {
      while (getline(_file, lnasm))
	{
	  if (lnasm[0] != 0)
	    {
	      std::cout << "Object Checked : " << lnasm << std::endl;
	      check_line(lnasm);
	    }
	}
    }
  std::cout << "End of File" << std::endl;
}
