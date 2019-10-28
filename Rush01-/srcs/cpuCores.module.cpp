#include <iostream>
#include <stdio.h>
#include <stdint.h>
#include <sys/types.h>
#include <sys/sysctl.h>
#include <thread>
#include <string>
#include "cpuCores.module.hpp"

CpuCores::CpuCores(void)
{
  this->_graphBool = false;
  this->_varType = "Number of CPU Cores";
}


CpuCores::CpuCores(CpuCores const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();

}

CpuCores::~CpuCores(void)
{

}

CpuCores &	CpuCores::operator=(CpuCores const &rhs)
{
  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	CpuCores::readAndAddToVector()
{
  char buffer[1024];
  size_t size=sizeof(buffer);
  if (sysctlbyname("machdep.cpu.brand_string", &buffer, &size, NULL, 0) < 0)
  {
      perror("sysctl");
  }
  unsigned int nthreads = std::thread::hardware_concurrency();
  //std::cout << nthreads << '\n';
  //std::cout << buffer << '\n';
  this->_Values = std::to_string(nthreads);
}
