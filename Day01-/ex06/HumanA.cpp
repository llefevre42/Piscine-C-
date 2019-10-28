#include "HumanA.hpp"
#include <sstream>
#include <string>
#include <iostream>

HumanA::HumanA(std::string name, Weapon &weapon) : pseudo(name),arme(weapon)
{
  return;
}

HumanA::~HumanA()
{
  return;
}

void HumanA::attack()
{
  std::cout << this->pseudo << " attacks with his " << this->arme.getType() << std::endl;
}
