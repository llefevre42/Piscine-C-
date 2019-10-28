#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP
#include <string>
#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {


public:
  FragTrap(std::string name);
  ~FragTrap();
  FragTrap(const FragTrap &, std::string name);
  FragTrap &operator=(const FragTrap &);

  void vaulthunter_dot_exe(std::string const & target);

private:

};


#endif
