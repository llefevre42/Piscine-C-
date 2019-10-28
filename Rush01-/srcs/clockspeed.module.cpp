#include <stdio.h>
#include <stdint.h>
#include <unistd.h>
#include "ClockSpeed.hpp"
#include "ncursesDisplay.hpp"

uint64_t rdtsc(void)
{
    uint32_t ret0[2];
    __asm__ __volatile__("rdtsc" : "=a"(ret0[0]), "=d"(ret0[1]));
    return ((uint64_t)ret0[1] << 32) | ret0[0];
}

ClockSpeed::ClockSpeed(void)
{
    this->_graphBool = 0;
    this->_varType = "CPU ClockSpeed";
}


ClockSpeed::ClockSpeed(ClockSpeed const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
  (void)instance;
}

ClockSpeed::~ClockSpeed(void)
{

}

ClockSpeed &ClockSpeed::operator=(ClockSpeed const &rhs)
{
  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void	ClockSpeed::readAndAddToVector()
{
  uint64_t startCount = rdtsc();
  sleep(1);
  uint64_t endCount = rdtsc();
  ncursesDisplay::iteration++; 

  this->_Values = std::to_string(endCount - startCount);
}
