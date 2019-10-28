#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>
#include <string>

Human::Human()
{
  return;
}

Human::~Human()
{
  return;
}

Brain &Human::getBrain(void)
{
  return(this->cerv);
}

std::string Human::identify(void)
{
  return(this->cerv.identify());
}
