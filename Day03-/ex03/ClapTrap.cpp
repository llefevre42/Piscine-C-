#include "ClapTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

ClapTrap::ClapTrap(std::string name) : pseudo(name)
{
  std::cout<< "UN ROBOT EST NEE IL SE NOMMEEEEEEEEEEEEE " << this->pseudo << std::endl;
  return;
}

ClapTrap::~ClapTrap()
{
  std::cout<< "Nous somme reunie en ce jour pour assister au recyclage de " << this->pseudo << std::endl;
  return;
}

ClapTrap::ClapTrap(const ClapTrap &,std::string name) : pseudo(name)
{
  return;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &)
{

  std::cout<< "Assignation operator called" << std::endl;
  return(*this);
}

void ClapTrap::rangedAttack(std::string const & target)
{
    std::cout<< "FR4G-TP " << this->pseudo <<" attacks " << target << " a distance, et lui inflige " << this->adc << " points de damage !" << std::endl;
}

void ClapTrap::meleeAttack(std::string const & target)
{
  std::cout<< "FR4G-TP " << this->pseudo <<" attacks " << target << " au corp a corp, et lui inflige " << this->ad << " points de damage !" << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::beRepaired(unsigned int amount)
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
