#ifndef ZOMBIEHORDE_HPP
# define ZOMBIEHORDE_HPP

# include <string>
# include "Zombie.hpp"

class ZombieHorde {

public:

  ZombieHorde(int n);
  ~ZombieHorde(void);
  void setZombieType(std::string type);
  int cmp;

private:
  std::string tipe;
  int numb;
};

#endif
