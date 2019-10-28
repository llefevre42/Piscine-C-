#include "Fixed.hpp"
#include <sstream>
#include <string>
#include <iostream>
#include <math.h>

Fixed::Fixed()
{
  this->value = 0;
  std::cout<< "Default constructor called" << std::endl;
  return;
}

Fixed::~Fixed()
{
  std::cout<< "Destructor called" << std::endl;
  return;
}

Fixed::Fixed(const Fixed & value)
{
  std::cout<< "Copy constructor called" << std::endl;
  this->setRawBits(value.getRawBits());
}

Fixed::Fixed( const float floa)
{
  std::cout<< "Float constructor called" << std::endl;
  this->setRawBits(roundf(floa * ( 1 << this->lengt )));
}

Fixed::Fixed(const int integer)
{
  std::cout<< "Int constructor called" << std::endl;
  this->setRawBits(integer << this->lengt);
}

int Fixed::getRawBits(void) const
{
  return(this->value);
}

void Fixed::setRawBits( int const raw )
{
  this->value = raw;
}

Fixed &Fixed::operator=(const Fixed & value)
{
  std::cout<< "Assignation operator called" << std::endl;
  this->value = value.getRawBits();
  return(*this);
}

std::ostream & operator<<(std::ostream & o, const Fixed & value)
{
  o << value.toFloat();
  return(o);
}

float Fixed::toFloat( void ) const
{
  return((float)this->value / (1 << this->lengt));
}

int Fixed::toInt (void) const
{
  return(this->value >> this->lengt);
}
