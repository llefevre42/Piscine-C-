#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>

class FragTrap {


public:
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(const FragTrap &, std::string name);
  FragTrap &operator=(const FragTrap &);
  void rangedAttack(std::string const & target);
  void meleeAttack(std::string const & target);
  void takeDamage(unsigned int amount);
  void beRepaired(unsigned int amount);
  void vaulthunter_dot_exe(std::string const & target);

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
