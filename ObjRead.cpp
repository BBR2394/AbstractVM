//
// ObjRead.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:06:07 2015 Bertrand-Rapello Baptiste
// Last update Fri Feb 27 22:49:27 2015 Bertrand-Rapello Baptiste
//

#include		"Exception.hh"
#include		"ProcessUnit.hh"
#include		"ObjRead.hh"

ObjRead::ObjRead() : _file(0)
{
  _ifExit = false;
  _cpu = new ProcessUnit;
  tabEOT["int8"] = OperandTpe::Int8;
  tabEOT["int16"] = OperandTpe::Int16;
  tabEOT["int32"] = OperandTpe::Int32;
  tabEOT["double"] = OperandTpe::Double;
  tabEOT["float"] = OperandTpe::Float;
}

ObjRead::ObjRead(std::string name) : _file(name.c_str())
{
  _ifExit = false;
  _cpu = new ProcessUnit;
  tabEOT["int8"] = OperandTpe::Int8;
  tabEOT["int16"] = OperandTpe::Int16;
  tabEOT["int32"] = OperandTpe::Int32;
  tabEOT["double"] = OperandTpe::Double;
  tabEOT["float"] = OperandTpe::Float;
}

ObjRead::~ObjRead()
{
}

void			ObjRead::push_fc(std::string lnasm)
{
  std::string sub;
  std::string type;
  std::string nb;
  size_t pos;
  size_t posbis;

  pos = lnasm.find(" ");
  posbis = lnasm.find("(");
  //std::cout << posbis << std::endl;
  type = lnasm.substr(pos+1, posbis-(pos+1));
  pos = lnasm.find(")");
  nb = lnasm.substr(posbis+1, pos-(posbis+1));

  //std::cout << "string !!! |" << type << "|  " << nb << std::endl;
  std::cout << "Ici j'ai push push fn: " << lnasm << std::endl;
  //std::cout << tabEOT[type] << std::endl;
  _cpu->createOperand(tabEOT[type], nb);
}

void			ObjRead::pop_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai pop : " << lnasm << std::endl;

  _cpu->pop();
}

void			ObjRead::dump_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai dump : " << lnasm << std::endl;

  _cpu->dump();
}

void			ObjRead::assert_fc(std::string lnasm)
{
  std::string sub;
  std::string type;
  std::string nb;
  size_t pos;
  size_t posbis;

  //std::cout << "Ici j'ai assert : " << lnasm << std::endl;
  pos = lnasm.find(" ");
  posbis = lnasm.find("(");
  //std::cout << posbis << std::endl;
  type = lnasm.substr(pos+1, posbis-(pos+1));
  pos = lnasm.find(")");
  nb = lnasm.substr(posbis+1, pos-(posbis+1));

  //std::cout << "string !!! |" << type << "|  " << nb << std::endl;
  std::cout << "Ici j'ai push : " << lnasm << std::endl;
  //std::cout << tabEOT[type] << std::endl;
  _cpu->assert(tabEOT[type], nb);
}

void			ObjRead::add_fc(std::string lnasm)
{
  //  std::cout << "Ici j'ai add : " << lnasm << std::endl;

  _cpu->add();
}

void			ObjRead::sub_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai sub : " << lnasm << std::endl;

  _cpu->sub();
}

void			ObjRead::mul_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai mul : " << lnasm << std::endl;

  _cpu->mul();
}

void			ObjRead::div_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai div : " << lnasm << std::endl;

  _cpu->div();
}

void			ObjRead::mod_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai mod : " << lnasm << std::endl;

  _cpu->mod();
}

void			ObjRead::print_fc(std::string lnasm)
{
  //std::cout << "Ici j'ai print : " << lnasm << std::endl;

  _cpu->print();
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
    push_fc(lnasm);
  else if (part1 == "pop")
    pop_fc(part1);
  else if (part1 == "dump")
    dump_fc(part1);
  else if (part1 == "assert")
    assert_fc(lnasm);
  else if (part1 == "add")
    add_fc(part1);
  else if (part1 == "sub")
    sub_fc(part1);
  else if (part1 == "mul")
    mul_fc(part1);
  else if (part1 == "div")
    div_fc(part1);
  else if (part1 == "mod")
    mod_fc(part1);
  else if (part1 == "print")
    print_fc(part1);
  else if (part1 == "exit")
    _ifExit = true;
  else if (part1[0] == ';')
    return;
  else
    throw ExceptRead("unknown instruction");
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
	      if (_ifExit == true)
		return;
	    }
	}
    }
  else
    throw ExceptRead("probleme hapened when reading the file");
  if (_ifExit == false)
    throw ExceptRead("No Exit");
  //std::cout << "End of File" << std::endl;
}
