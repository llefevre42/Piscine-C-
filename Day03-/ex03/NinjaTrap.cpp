#include "NinjaTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <sstream>
#include <string>
#include <iostream>

NinjaTrap::NinjaTrap(std::string name) : ClapTrap(name)
{
  this->hp = 60;
  this->mhp = 60;
  this->mana = 120;
  this->mmana = 120;
  this->level = 1;
  this->ad = 60;
  this->adc = 5;
  this->armor = 0;
  std::cout<< "Un ninja en parfaite sante est apparu" << std::endl;
  return;
}

NinjaTrap::~NinjaTrap()
{
  std::cout<< "JE MEURS PUTAIN C'EST LA FAUTE A OL!!!!! " << std::endl;
  return;
}

NinjaTrap::NinjaTrap(const NinjaTrap &, std::string name) : ClapTrap(name)
{
  this->hp = 60;
  this->mhp = 60;
  this->mana = 120;
  this->mmana = 120;
  this->level = 1;
  this->ad = 60;
  this->adc = 5;
  this->armor = 0;
  std::cout<< "Une copie de Ninja en parfaite sante est apparu, OH WAIT!" << std::endl;
}

NinjaTrap &NinjaTrap::operator=(const NinjaTrap &)
{

  std::cout<< "Assignation operator called" << std::endl;
  return(*this);
}

void NinjaTrap::ninjaShoebox(ClapTrap &player)
{
  player.hp = player.hp;
  std::cout<< "HEY you! YES you! you are BULLSHIT " << std::endl;
}

void NinjaTrap::ninjaShoebox(ScavTrap &player)
{
  player.hp = player.hp;
  std::cout<< " /'-'/ " << std::endl;
}

void NinjaTrap::ninjaShoebox(FragTrap &player)
{
  player.hp = player.hp;
  std::cout<< "sale boiteux" << std::endl;
}

void NinjaTrap::ninjaShoebox(NinjaTrap &player)
{
  player.hp = player.hp;
  std::cout<< "THIS GUYS IS PERFECT " << std::endl;
}
