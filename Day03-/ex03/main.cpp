#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "NinjaTrap.hpp"
#include <iostream>

int main(void)
{
  ClapTrap random("random");
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
  NinjaTrap ninja("bob");
  ninja.meleeAttack("jerry");
  ninja.rangedAttack("jerry");
  ninja.takeDamage(20);
  ninja.beRepaired(1);
  std::cout<< std::endl;
  ninja.ninjaShoebox(jerry);
  ninja.ninjaShoebox(Sammy);
  ninja.ninjaShoebox(random);
  ninja.ninjaShoebox(ninja);
    std::cout<< std::endl;

}
