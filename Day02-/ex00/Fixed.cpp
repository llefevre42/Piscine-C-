#include "Fixed.hpp"
#include <sstream>
#include <string>
#include <iostream>

Fixed::Fixed()
{
  this->value = 0;
  std::cout<< "Default constructor called" << std::endl;
  return;
}

Fixed::~Fixed()
{
  return;
}

Fixed::Fixed(const Fixed & value)
{
  std::cout<< "Copy constructor called" << std::endl;
  this->setRawBits(value.getRawBits());

}

int Fixed::getRawBits(void) const
{
  std::cout<< "getRawBits member function called" << std::endl;
  return(this->value);
}

void Fixed::setRawBits( int const raw )
{
  //std::cout<< "Assignation operator called" << std::endl;
  this->value = raw;
}

Fixed &Fixed::operator=(const Fixed & value)
{
  std::cout<< "Assignation operator called" << std::endl;
  this->value = value.getRawBits();
  return(*this);

}
