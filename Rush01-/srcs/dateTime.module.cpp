#include <ctime>
#include <iostream>
#include "dateTime.module.hpp"

DateTime::DateTime(void)
{
    this->_graphBool = 0;
    this->_varType = "Date & Time";
}

DateTime::DateTime(DateTime const &instance)
{

  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
}

DateTime::~DateTime(void)
{

}

DateTime &	DateTime::operator=(DateTime const &rhs)
{

  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	DateTime::readAndAddToVector()
{
  time_t     now = time(0);
  struct tm  tstruct;
  char       buf[80];
  tstruct = *localtime(&now);
  strftime(buf, sizeof(buf), "%Y-%m-%d.%X", &tstruct);

  this->_Values = static_cast<std::string>(buf);
}
