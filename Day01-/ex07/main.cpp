#include <iostream>
#include <fstream>
#include <string>

int main (int ac, char **av)
{
  std::string str;
  std::string str1;
  std::string str2;
  size_t findd = 0;

  if(ac != 4)
    return(0);
  std::ifstream ifs;
  str1 = av[2];
  str2 = av[3];
  ifs.open (av[1], std::ifstream::in);
  if (ifs.is_open())
  {
    std::string name = av[1];
    std::ofstream ofs(name + ".replace");
    while(std::getline(ifs, str))
    {
      findd = str.find(str1, 0);
      while(std::string::npos != findd)
      {
        str.replace(findd,str1.size(),str2);
        findd = str.find(str1, findd + 1);
      }
      ofs << str;
      ofs << std::endl;
    }
    ofs.close();
  }
}
