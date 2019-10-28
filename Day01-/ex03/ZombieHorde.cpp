#include "ZombieHorde.hpp"
#include "Zombie.hpp"
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>

ZombieHorde::ZombieHorde(int n) : numb(n)
{
  this->setZombieType("staff");
  Zombie* crea = new Zombie[numb];
  for(int i = 0; i < numb; i++)
  {
    crea[i].Init(i);
    crea[i].Announce();
  }
  delete [] crea;
}

ZombieHorde::~ZombieHorde()
{
  return;
}

void ZombieHorde::setZombieType(std::string type)
{
    this->tipe = type;
}
