#ifndef HUMANA_HPP
# define HUMANA_HPP
#include "Weapon.hpp"
# include <string>

class HumanA {

public:

  HumanA(std::string name, Weapon &weapon);
  ~HumanA(void);
  void attack();

private:
  std::string pseudo;
  Weapon &arme;

};

#endif
