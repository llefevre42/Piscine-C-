#include "data.hpp"
#include <sstream>
#include <string>
#include <iostream>

int main (void)
{
    Data *info;
    void *tmp;
    tmp = serialize();
    info = deserialize(tmp);
    std::cout << info->s1 << std::endl;
    std::cout << info->n << std::endl;
    std::cout << info->s2 << std::endl;

  return(0);
}
