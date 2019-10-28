#include "ScavTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

ScavTrap::ScavTrap(std::string name) : pseudo(name)
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

ScavTrap::ScavTrap(const ScavTrap &, std::string name) : pseudo(name)
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

void ScavTrap::rangedAttack(std::string const & target)
{
    std::cout<< "FRENCH BAGUETTE " << this->pseudo <<" attacks " << target << " a distance, et lui inflige " << this->adc << " points de damage !" << std::endl;
}

void ScavTrap::meleeAttack(std::string const & target)
{
  std::cout<< "FRENCH BAGUETTE " << this->pseudo <<" attacks " << target << " au corp a corp, et lui inflige " << this->ad << " points de damage !" << std::endl;
}

void ScavTrap::takeDamage(unsigned int amount)
{
  if((this->hp-amount) > 0)
  {
    std::cout<< "meme l'autre robot a plus de force" << std::endl;
    if(amount > this->armor)
      this->hp -= (amount + this->armor);
    else
    {
      std::cout<< "WESH C PAS TOI QUI PAYE LE GARAGISTE" << std::endl;
    }
  }
  else
  {
      std::cout<< "mourir c'est mainstream" << std::endl;
      this->hp  = 0;
  }
}

void ScavTrap::beRepaired(unsigned int amount)
{
  if((this->hp-amount) < this->mhp)
  {
    std::cout<< "mercurochrome le pansement des heros" << std::endl;
    this->hp += amount;
  }
  else
  {
    std::cout<< "donnr moi plus d'hp pls" << std::endl;
    this->hp = this->mhp;
  }
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
