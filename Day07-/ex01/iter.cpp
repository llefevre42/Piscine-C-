#include <iostream>
#include <string>

template <typename T>
void iter (T *tab, size_t i ,void (*b)(T &))
{
  for(size_t k = 0; k < i; k++)
  {
    (*b)(tab[k]);
  }
}
template <typename T>
void b(T &i)
{
  std::cout << i << std::endl;
}

int main (void)
{
  char str [] = {"bonjour"};
  size_t i  = 8;

  iter(str, i, b);
  return(0);
}
