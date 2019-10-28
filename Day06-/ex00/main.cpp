#include <iostream>
#include <sstream>
#include <string>
#include <stdlib.h>
#include <ctype.h>
#include <stdio.h>
#include <iomanip>


int main(int ac, char **av)
{
    if(ac != 2)
      return(0);
    int i = 0;
    std:: string str(av[1]);

  if(str.compare("nanf") == 0 || str.compare("+inff") == 0 || str.compare("-inff")== 0)
  {
    str.resize(str.size() - 1);
    std::cout << str << std::endl;
  }
  if(str.compare("+inf") == 0 || str.compare("-inf") == 0 || str.compare("nan") == 0)
  {
    i = 2;
  }
  else
  {
    if('f' == str[str.size() - 1])
    {
      str.resize(str.size() - 1);
    }

    for(int j = 0; str[j]; j++)
      if(0 ==isdigit(str[j]))
      {
        if(str[j] != '.')
          i = 1;
      }
  }
  std::istringstream convert(str);
  double nbr;
  convert >> nbr;
  if(i == 1 || i == 2)
    std::cout<< "char: " << "impossible" <<std::endl;
  else if(nbr >= 33 && nbr <= 126)
    std::cout<< "char: '" << static_cast<char>(nbr)<< "'" <<std::endl;
  else
    std::cout<< "char: " << "Non displayable" <<std::endl;
  if(i == 1 || i == 2)
    std::cout<< "int: " << "impossible" <<std::endl;
  else
    std::cout<< "int: " << static_cast<int>(nbr) <<std::endl;
    std::cout << std::fixed;
    std::cout << std::setprecision(1);
  if(i == 1)
    std::cout<< "float: " << "impossible" <<std::endl;
  else if(i == 2)
    std::cout<< "float: " << str << 'f' <<std::endl;
  else
    std::cout<< "float: " << static_cast<float>(nbr) << 'f' <<std::endl;
  if(i == 1)
    std::cout<< "double: " << "impossible" <<std::endl;
  else if(i == 2)
      std::cout<< "float: " << str <<std::endl;
  else
    std::cout<< "double: " << static_cast<double>(nbr) <<std::endl;
  return(0);
}
