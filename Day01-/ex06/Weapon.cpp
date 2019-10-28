#include "Weapon.hpp"
#include <sstream>
#include <string>

Weapon::Weapon(std::string type) : tipe(type)
{
  return;
}

Weapon::~Weapon()
{
  return;
}

void Weapon::setType(std::string type)
{
  this->tipe = type;
}

std::string Weapon::getType()
{
  return(this->tipe);
}
