#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap {


public:
  ScavTrap(std::string name);
  ~ScavTrap();
  ScavTrap(const ScavTrap &,std::string name);
  ScavTrap &operator=(const ScavTrap &);

  void challengeNewcomer(std::string const & target);

private:


};


#endif
