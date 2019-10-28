#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class Weapon {

public:

  Weapon(std::string type);
  ~Weapon(void);
  void setType(std::string type);
  std::string getType(void);

private:
  std::string tipe;

};

#endif
