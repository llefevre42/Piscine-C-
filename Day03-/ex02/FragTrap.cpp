#include "FragTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
  this->hp = 100;
  this->mhp = 100;
  this->mana = 100;
  this->mmana = 100;
  this->level = 1;
  this->ad = 30;
  this->adc = 20;
  this->armor = 5;
  std::cout<< "Un robot bancale est apparu" << std::endl;
  return;
}

FragTrap::~FragTrap()
{
  std::cout<< "JE MEURS PUTAIN C'EST LA FAUTE A COTON!!!!! " << std::endl;
  return;
}

FragTrap::FragTrap(const FragTrap &,std::string name) : ClapTrap(name)
{
  this->hp = 100;
  this->mhp = 100;
  this->mana = 100;
  this->mmana = 100;
  this->level = 1;
  this->ad = 30;
  this->adc = 20;
  this->armor = 5;
  std::cout<< "Une copie de robot bancale est apparu, OH WAIT! " << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &)
{
  std::cout<< "Assignation operator called" << std::endl;
  return(*this);
}

void FragTrap::vaulthunter_dot_exe(std::string const & target)
{
  if(this->mana - 25 > 0)
  {
    time_t ptr;
    int nbr;
    std::srand(std::time(&ptr));
    nbr = std::rand() % 5;
    if(nbr == 1)
    {
      std::cout<< "Tir de snipe, sans aucune originalite, target : " << target << std::endl;
    }
    else if(nbr == 2)
    {
      std::cout<< "Pichenette du DEMON!!!!" << std::endl;
    }
    else if(nbr == 3)
    {
      std::cout<< "Un lance-chat automatique, la meilleur arme cree cette semaine" << std::endl;
    }
    else if(nbr == 4)
    {
      std::cout<< "TACLE ASSASSIN!!!" << std::endl;
    }
    else if(nbr == 0)
    {
      std::cout<< "*SUMMON SATAN* GLOIRE A LA SAINTE BIQUETTE" << std::endl;
    }
    this->mana -= 25;
  }
  else
  {
    std::cout<< "J'ai besoin de plus de SANGGGGGGGG!!!" << std::endl;
  }
}
