#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>

int main(void)
{
  FragTrap jerry("jerry");
  std::cout<< std::endl;
  jerry.meleeAttack("jerry");
  jerry.rangedAttack("jerry");
  jerry.takeDamage(25);
  jerry.beRepaired(15);
  std::cout<< std::endl;
  jerry.vaulthunter_dot_exe("jerry");
  std::cout<< std::endl;
  ScavTrap Sammy("Sammy");
  std::cout<< std::endl;
  Sammy.meleeAttack("jerry");
  Sammy.rangedAttack("jerry");
  Sammy.takeDamage(20);
  Sammy.beRepaired(1);
  std::cout<< std::endl;
  Sammy.challengeNewcomer("jerry");
  std::cout<< std::endl;
}
