#include "Brain.hpp"
#include "Human.hpp"
#include <sstream>
#include <string>

Brain::Brain()
{
  this->buff << this;
  return;
}

Brain::~Brain()
{
  return;
}

std::string Brain::identify(void)
{
  return(this->buff.str());
}
