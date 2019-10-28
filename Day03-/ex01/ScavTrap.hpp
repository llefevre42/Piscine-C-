#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>

class ScavTrap {


public:
  ScavTrap(std::string name);
  ~ScavTrap();
  ScavTrap(const ScavTrap &, std::string name);
  ScavTrap &operator=(const ScavTrap &);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void challengeNewcomer(std::string const & target);

private:
  unsigned int hp;
  unsigned int mhp;
  unsigned int mana;
  unsigned int mmana;
  unsigned int level;
  std::string pseudo;
  unsigned int ad;
  unsigned int adc;
  unsigned int armor;

};


#endif
