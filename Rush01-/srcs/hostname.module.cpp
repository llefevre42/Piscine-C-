#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "hostname.Module.hpp"
#include <iostream>
#include <string>

HostName::HostName(void)
{
    this->_graphBool = false;
    this->_varType = "DumpName & Name";
}


HostName::HostName(HostName const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();

}

HostName::~HostName(void)
{

}

HostName &	HostName::operator=(HostName const &rhs)
{

  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	HostName::readAndAddToVector()
{
  const size_t LEN = 100;
  char name[LEN];
  if (gethostname(name, LEN) == -1)
  {
      fprintf(stderr, "%s\n", strerror(errno));
  }
  this->_Values = (static_cast<std::string>(getenv("USER")) + static_cast<std::string>(" ") + static_cast<std::string>(name));
}
