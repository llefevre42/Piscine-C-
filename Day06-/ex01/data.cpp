#include "data.hpp"
#include <sstream>
#include <string>
#include <iostream>

void * serialize(void)
{
  Data *info = new Data;
  time_t ptr;
  std::srand(std::time(&ptr));
  int nbr = rand() % 2147483647;
  std::string str2 = "12345678";
  std::string str = "12345678";
  static const char alphanum[] =
    "0123456789"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
    "abcdefghijklmnopqrstuvwxyz";

  for(int i = 0; str[i]; i++)
    str[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
  for(int i = 0; str2[i]; i++)
    str2[i] = alphanum[std::rand() % (sizeof(alphanum) - 1)];
    info->s1 = str;
    info->s2 = str2;
    info->n = nbr;
  return(reinterpret_cast<void *>(info));
}

Data * deserialize( void * raw)
{
  return(reinterpret_cast<Data *>(raw));
}
