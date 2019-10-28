#include "Array.hpp"
#include <sstream>
#include <string>
#include <iostream>

Array::Array()
{
  return;
}

Array::~Array()
{
  return;
}

Array::Array(const Array & value)
{
  this->setRawBits(value.getRawBits());

}

int Array::getRawBits(void) const
{
  return(this->value);
}

void Array::setRawBits( int const raw )
{
  this->value = raw;
}

Array &Array::operator=(const Array & value)
{
  this->value = value.getRawBits();
  return(*this);

}
