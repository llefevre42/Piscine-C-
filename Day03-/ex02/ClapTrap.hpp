#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP
#include <string>

class ClapTrap {


public:
  ClapTrap(std::string name);
  ~ClapTrap();
  ClapTrap(const ClapTrap &, std::string name);
  ClapTrap &operator=(const ClapTrap &);

  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);


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
