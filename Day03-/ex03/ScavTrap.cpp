#include "ScavTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
  this->hp = 100;
  this->mhp = 100;
  this->mana = 100;
  this->mmana = 100;
  this->level = 1;
  this->ad = 30;
  this->adc = 20;
  this->armor = 5;
  std::cout<< "Un robot en parfaite sante est apparu" << std::endl;
  return;
}

ScavTrap::~ScavTrap()
{
  std::cout<< "JE MEURS PUTAIN C'EST LA FAUTE A ZAZ!!!!! " << std::endl;
  return;
}

ScavTrap::ScavTrap(const ScavTrap &, std::string name) : ClapTrap(name)
{
  this->hp = 100;
  this->mhp = 100;
  this->mana = 100;
  this->mmana = 100;
  this->level = 1;
  this->ad = 30;
  this->adc = 20;
  this->armor = 5;
  std::cout<< "Une copie de robot en parfaite sante est apparu, OH WAIT!" << std::endl;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &)
{

  std::cout<< "Assignation operator called" << std::endl;
  return(*this);
}

void ScavTrap::challengeNewcomer(std::string const & target)
{
  time_t ptr;
  int nbr;
  std::srand(std::time(&ptr));
  nbr = std::rand() % 5;
  if(nbr == 1)
  {
    std::cout<< "Hey " << target << " ta mere elle est telment grosse qu'elle fait exploser la stack" << std::endl;
  }
  else if(nbr == 2) 
  {
    std::cout<< "Hey " << target << " ta mere elle est telment grosse qu'elle rentre pas dans un long int" << std::endl;
  }
  else if(nbr == 3)
  {
    std::cout<< "Hey " << target << " ta mere elle est telment grosse que tu peut pas l'upload sur GitHub" << std::endl;
  }
  else if(nbr == 4)
  {
    std::cout<< "Hey " << target << " ta mere elle est telment grosse qu'elle a son propre cluster a elle" << std::endl;
  }
  else if(nbr == 0)
  {
    std::cout<< "Hey " << target << " ta mere elle est telment grosse que le bocal a ete rename en l'ocean" << std::endl;
  }
}
