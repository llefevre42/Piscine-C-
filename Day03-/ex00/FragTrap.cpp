#include "FragTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

FragTrap::FragTrap(std::string name) : pseudo(name)
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

FragTrap::FragTrap(const FragTrap &, std::string name) : pseudo(name)
{
  this->hp = 100;
  this->mhp = 100;
  this->mana = 100;
  this->mmana = 100;
  this->level = 1;
  this->ad = 30;
  this->adc = 20;
  this->armor = 5;
  std::cout<< "Une copie de robot bancale est apparu, OH WAIT!" << std::endl;
}

FragTrap &FragTrap::operator=(const FragTrap &)
{
  std::cout<< "Assignation operator called" << std::endl;
  return(*this);
}

void FragTrap::rangedAttack(std::string const & target)
{
    std::cout<< "FR4G-TP " << this->pseudo <<" attacks " << target << " a distance, et lui inflige " << 11 << " points de damage !" << std::endl;
}

void FragTrap::meleeAttack(std::string const & target)
{
  std::cout<< "FR4G-TP " << this->pseudo <<" attacks " << target << " au corp a corp, et lui inflige " << 1 << " points de damage !" << std::endl;
}

void FragTrap::takeDamage(unsigned int amount)
{
  if((this->hp-amount) > 0)
  {
    std::cout<< "meme norminet a plus de force" << std::endl;
    if(amount > this->armor)
      this->hp -= (amount + this->armor);
    else
    {
      std::cout<< "Ma CARROSERIE MERDE!!" << std::endl;
    }
  }
  else
  {
      std::cout<< "ne donner pas mon corps a la sience c'est tous des connards" << std::endl;
      this->hp  = 0;
  }
}

void FragTrap::beRepaired(unsigned int amount)
{
  if((this->hp-amount) < this->mhp)
  {
    std::cout<< "un doliprane et ca repart" << std::endl;
    this->hp += amount;
  }
  else
  {
    std::cout<< "je suis full life mais je boitte toujours quel jeux de merde" << std::endl;
    this->hp = this->mhp;
  }
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
