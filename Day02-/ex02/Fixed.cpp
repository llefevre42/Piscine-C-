#include "Fixed.hpp"
#include <sstream>
#include <string>
#include <iostream>
#include <math.h>

Fixed::Fixed()
{
  this->value = 0;
  return;
}

Fixed::~Fixed()
{
  return;
}

Fixed::Fixed(const Fixed & value)
{
  this->setRawBits(value.getRawBits());
}

Fixed::Fixed( const float floa)
{
  this->setRawBits(roundf(floa * ( 1 << this->lengt )));
}

Fixed::Fixed(const int integer)
{
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

/***********************************************************************/

Fixed Fixed::operator+(const Fixed & value) const
{
  return(Fixed(this->toFloat() + value.toFloat()));
}

Fixed Fixed::operator-(const Fixed & value) const
{
  return(Fixed(this->toFloat() - value.toFloat()));
}

Fixed Fixed::operator*(const Fixed & value) const
{
  return(Fixed(this->toFloat() * value.toFloat()));
}

Fixed Fixed::operator/(const Fixed & value) const
{
  return(Fixed(this->toFloat() / value.toFloat()));
}

/*****************************************************************************/

bool Fixed::operator>(const Fixed & value) const
{
  return(this->value > value.getRawBits());
}

bool Fixed::operator<(const Fixed & value) const
{
  return(this->value < value.getRawBits());
}

bool Fixed::operator>=(const Fixed & value) const
{
  return(this->value >= value.getRawBits());
}

bool Fixed::operator<=(const Fixed & value) const
{
  return(this->value <= value.getRawBits());
}

bool Fixed::operator==(const Fixed & value) const
{
  return(this->value == value.getRawBits());
}

bool Fixed::operator!=(const Fixed & value) const
{
  return(this->value != value.getRawBits());
}

/******************************************************************************/

Fixed &Fixed::operator++(void)
{
  ++this->value;
  return(*this);
}

Fixed Fixed::operator++(int)
{
  Fixed tmp(*this);

  this->value++;
  return(tmp);
}

Fixed &Fixed::operator--(void)
{
  --this->value;
  return(*this);
}

Fixed Fixed::operator--(int)
{
  Fixed tmp(*this);

  this->value--;
  return(tmp);
}

/******************************************************************************/

const Fixed &Fixed::max( Fixed const & a, Fixed const & b)
{
  if(a > b)
    return(a);
  else
    return(b);
}

const Fixed &Fixed::min( Fixed const & a, Fixed const & b)
{
  if(a < b)
    return(a);
  else
    return(b);
}

const Fixed &Fixed::max( Fixed & a, Fixed & b)
{
  if(a > b)
    return(a);
  else
    return(b);
}

const Fixed &Fixed::min( Fixed & a, Fixed & b)
{
  if(a < b)
    return(a);
  else
    return(b);
}
