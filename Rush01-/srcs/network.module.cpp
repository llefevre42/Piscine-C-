#include <cstdio>
#include <sstream>
#include <pthread.h>
#include <iostream>
#include <string>
#include <iomanip>

#include "network.module.hpp"

std::string bytes_format(long bytes)
{
  static const std::string s[] = {
      "bytes", "Kb", "Mb", "Gb", "Tb", "Eb"};

  long double b = bytes;

  int i = 0;

  for (i = 0; b >= 1024 && i < 6; i++)
    b /= 1024;

  std::stringstream ss;
  ss << std::setprecision((i == 0 ? 0 : 2)) << std::fixed << b << " " << s[i];

  return ss.str();
}

Network::Network(void)
{
  this->_graphBool = 0;
  this->_varType = "Network throughput";
}

Network::Network(Network const &instance)
{
  this->_Values = instance.getValues();
  this->_graphBool = instance.getGraphBool();
  this->_varType = instance.getInfoType();
  (void)instance;
}

Network::~Network(void)
{
}

Network &Network::operator=(Network const &rhs)
{
  this->_Values = rhs.getValues();
  this->_graphBool = rhs.getGraphBool();
  this->_varType = rhs.getInfoType();
  return *this;
}

void Network::readAndAddToVector()
{
  FILE *f = popen("netstat -w1", "r");

  char buf[4096];

  long input = 0;
  long output = 0;

  while (fgets(buf, 4096, f) != NULL)
  {
    std::string line(buf);

    if (line.compare(0, 17, "            input") == 0 ||
        line.compare(0, 10, "   packets") == 0)
      continue;

    long a;
    std::stringstream ss(line);

    ss >> a;      // packets
    ss >> a;      // errs
    ss >> input;  // bytes
    ss >> a;      // packets
    ss >> a;      // errs
    ss >> output; // bytes

    std::stringstream ss2;

    ss2 << bytes_format(input);
    ss2 << "/s in, ";
    ss2 << bytes_format(output);
    ss2 << "/s out";

    this->_Values = ss2.str();
    break;
  }
}