#include "FragTrap.hpp"

int main(void)
{
  FragTrap jerry("jerry");
  jerry.meleeAttack("Sammy");
  jerry.rangedAttack("Sammy");
  jerry.takeDamage(25);
  jerry.beRepaired(15);
  jerry.vaulthunter_dot_exe("Sammy");

}
