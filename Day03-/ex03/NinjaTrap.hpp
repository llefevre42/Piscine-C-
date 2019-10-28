#ifndef NINJATRAP_HPP
# define NINJATRAP_HPP
#include <string>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class NinjaTrap : public ClapTrap {


public:
  NinjaTrap(std::string name);
  ~NinjaTrap();
  NinjaTrap(const NinjaTrap &,std::string name);
  NinjaTrap &operator=(const NinjaTrap &);

  void ninjaShoebox(ClapTrap &player);
  void ninjaShoebox(ScavTrap &player);
  void ninjaShoebox(FragTrap &player);
  void ninjaShoebox(NinjaTrap &player);


private:


};


#endif
