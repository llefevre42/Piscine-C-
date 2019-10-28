#include "Base.hpp"
#include <iostream>
#include <string>

class A : public Base
{};
class B : public Base
{};
class C : public Base
{};

Base * generate(void)
{
  time_t time;
  std::srand(std::time(&time));
  int nbr = rand() % 3;
  Base *ptr;
  if(nbr == 0)
     ptr = new A;
  else if(nbr == 1)
     ptr = new B;
  else
     ptr = new C;
  return(ptr);
}

void identify_from_pointer( Base * p )
{
  if(NULL != dynamic_cast<A*>( p ))
    std::cout << "il s'agit d'un pointer sur A.\n";
  if(NULL != dynamic_cast<B*>( p ))
    std::cout << "il s'agit d'un pointer sur B.\n";
  if(NULL != dynamic_cast<C*>( p ))
    std::cout << "il s'agit d'un pointer sur C.\n";
}

void identify_from_reference( Base & p )
{
  try
  {
    A a = dynamic_cast<A&>( p );
    std::cout << "il s'agit d'une reference sur A.\n";
  }
  catch (const std::bad_cast & )
  {}
  try
  {
    B b = dynamic_cast<B&>( p );
    std::cout << "il s'agit d'une d'une reference sur B.\n";
  }
  catch (const std::bad_cast & )
  {}
  try
  {
    C c = dynamic_cast<C&>( p );
    std::cout << "il s'agit d'und'une reference sur C.\n";
  }
  catch (const std::bad_cast & )
  {}
}

int main (void)
{
  Base *info;
  info = generate();
  identify_from_pointer(info);
  identify_from_reference(*info);
  delete(info);
  return(0);
}
