//
// ObjRead.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:06:07 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 15:59:08 2015 Bertrand-Rapello Baptiste
//

#include		"Exception.hh"
#include		"ProcessUnit.hh"
#include		"ObjRead.hh"

ObjRead::ObjRead() : _file(0)
{
  _cpu = new ProcessUnit;
}

ObjRead::ObjRead(std::string name) : _file(name.c_str())
{
  _cpu = new ProcessUnit;
}

ObjRead::~ObjRead()
{
}

void			ObjRead::push_fc(std::string lnasm)
{
  std::cout << "Ici j'ai push : " << lnasm << std::endl;
  _cpu->createOperand(OperandTpe::Int8, "12");
}

void			ObjRead::pop_fc(std::string lnasm)
{
  std::cout << "Ici j'ai pop : " << lnasm << std::endl;

  _cpu->pop();
}

void			ObjRead::dump_fc(std::string lnasm)
{
  std::cout << "Ici j'ai dump : " << lnasm << std::endl;

  _cpu->dump();
}

void			ObjRead::assert_fc(std::string lnasm)
{
  std::cout << "Ici j'ai assert : " << lnasm << std::endl;
  //_cpu->assert();
}

void			ObjRead::add_fc(std::string lnasm)
{
  std::cout << "Ici j'ai add : " << lnasm << std::endl;

  _cpu->add();
}

void			ObjRead::sub_fc(std::string lnasm)
{
  std::cout << "Ici j'ai sub : " << lnasm << std::endl;

  _cpu->sub();
}

void			ObjRead::mul_fc(std::string lnasm)
{
  std::cout << "Ici j'ai mul : " << lnasm << std::endl;

  _cpu->mul();
}

void			ObjRead::div_fc(std::string lnasm)
{
  std::cout << "Ici j'ai div : " << lnasm << std::endl;

  _cpu->div();
}

void			ObjRead::mod_fc(std::string lnasm)
{
  std::cout << "Ici j'ai mod : " << lnasm << std::endl;

  _cpu->mod();
}

void			ObjRead::print_fc(std::string lnasm)
{
  std::cout << "Ici j'ai print : " << lnasm << std::endl;

  _cpu->print();
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
  else
    throw ExceptRead("problem with the file ..");
  std::cout << "End of File" << std::endl;
}
