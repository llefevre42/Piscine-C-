#ifndef HUMAN_HPP
# define HUMAN_HPP
# include <string>
#include "Brain.hpp"

class Human {

public:

  Human(void);
  ~Human(void);
  Brain &getBrain(void);
  std::string identify(void);


private:
  Brain cerv;

};

#endif
