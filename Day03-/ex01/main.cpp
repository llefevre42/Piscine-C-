#include "FragTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
  FragTrap jerry("jerry");
  jerry.meleeAttack("jerry");
  jerry.rangedAttack("jerry");
  jerry.takeDamage(25);
  jerry.beRepaired(15);
  jerry.vaulthunter_dot_exe("jerry");

  ScavTrap Sammy("Sammy");
  Sammy.meleeAttack("jerry");
  Sammy.rangedAttack("jerry");
  Sammy.takeDamage(20);
  Sammy.beRepaired(1);
  Sammy.challengeNewcomer("jerry");
}
