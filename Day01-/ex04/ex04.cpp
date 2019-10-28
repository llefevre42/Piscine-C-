#include <string>
#include <iostream>

int main (void)
{
  std::string hi = "HI THIS IS BRAIN";
  std::string *ptr = &hi;
  std::string &ref = hi;
  std::cout << "with pointer :" << *ptr << std::endl;
  std::cout << "with reference :" << ref << std::endl;
}
