//
// ObjRead.cpp for  in /home/baptiste/rendu/cpp_abstractvm
// 
// Made by Bertrand-Rapello Baptiste
// Login   <bertra_l@epitech.net>
// 
// Started on  Mon Feb  9 18:06:07 2015 Bertrand-Rapello Baptiste
// Last update Sun Mar  1 22:52:00 2015 Bertrand-Rapello Baptiste
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
  type = lnasm.substr(pos+1, posbis-(pos+1));
  pos = lnasm.find(")");
  nb = lnasm.substr(posbis+1, pos-(posbis+1));

  if (!tabEOT[type])
    throw ExceptRead("operand unknown");
  _cpu->createOperand(tabEOT[type], nb);
}

void			ObjRead::pop_fc(std::string lnasm)
{
  _cpu->pop();
}

void			ObjRead::dump_fc(std::string lnasm)
{
  _cpu->dump();
}

void			ObjRead::assert_fc(std::string lnasm)
{
  std::string sub;
  std::string type;
  std::string nb;
  size_t pos;
  size_t posbis;


  pos = lnasm.find(" ");
  posbis = lnasm.find("(");

  type = lnasm.substr(pos+1, posbis-(pos+1));
  pos = lnasm.find(")");
  nb = lnasm.substr(posbis+1, pos-(posbis+1));

  _cpu->assert(tabEOT[type], nb);
}

void			ObjRead::add_fc(std::string lnasm)
{
  _cpu->add();
}

void			ObjRead::sub_fc(std::string lnasm)
{
  _cpu->sub();
}

void			ObjRead::mul_fc(std::string lnasm)
{
  _cpu->mul();
}

void			ObjRead::div_fc(std::string lnasm)
{
  _cpu->div();
}

void			ObjRead::mod_fc(std::string lnasm)
{
  _cpu->mod();
}

void			ObjRead::print_fc(std::string lnasm)
{
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
}

void			ObjRead::readOnCin()
{
  std::string	line;
  bool	stop = false;

  while (stop != true)
    {
      getline (std::cin, line);
      _listRead.push_back(line);
      if (line[0] == ';' && line[1] == ';')
	stop = true;
    }
}

void			ObjRead::execFromCin()
{
  std::string           lnasm;
  std::list<std::string>::iterator itList = _listRead.begin();

  while (itList != _listRead.end())
    {
      lnasm = _listRead.front();
      itList++;
      _listRead.pop_front();
      check_line(lnasm);
      if (_ifExit == true)
	return;
    }

  if (_ifExit == false)
    throw ExceptRead("No Exit");
}
