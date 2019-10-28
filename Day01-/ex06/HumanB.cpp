
#include "HumanB.hpp"
#include <sstream>
#include <string>
#include <iostream>

HumanB::HumanB(std::string name) : pseudo(name)
{
  return;
}

HumanB::~HumanB()
{
  return;
}

void HumanB::attack()
{
  std::cout << this->pseudo << " attacks with his " << this->arme->getType() << std::endl;
}

void HumanB::setWeapon(Weapon &weapon)
{
  this->arme = &weapon;
}
