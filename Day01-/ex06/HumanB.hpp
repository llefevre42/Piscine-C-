#ifndef HUMANB_HPP
# define HUMANB_HPP
#include "Weapon.hpp"
# include <string>

class HumanB {

public:

  HumanB(std::string name);
  ~HumanB(void);
  void attack();
  void setWeapon(Weapon &weapon);

private:
  std::string pseudo;
  Weapon *arme;

};

#endif
