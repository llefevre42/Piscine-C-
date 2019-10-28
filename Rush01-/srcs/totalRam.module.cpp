#include <sys/types.h>
#include <sys/sysctl.h>
#include <iostream>
#include <thread>
#include "totalRam.module.hpp"
#include <string>


TotalRam::TotalRam(void)
{
    this->_graphBool = false;
    this->_varType = "Total TotalRam";
}


TotalRam::TotalRam(TotalRam const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
}

TotalRam::~TotalRam(void)
{

}

TotalRam &	TotalRam::operator=(TotalRam const &rhs)
{
  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	TotalRam::readAndAddToVector()
{
  int mib[2];
  int64_t physical_memory;
  mib[0] = CTL_HW;
  mib[1] = HW_MEMSIZE;
  size_t length = sizeof(int64_t);
  sysctl(mib, 2, &physical_memory, &length, NULL, 0);
  this->_Values = std::to_string(physical_memory);
}
