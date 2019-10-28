#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>

class Fixed {

public:

  Fixed();
  ~Fixed(void);
  Fixed(const Fixed & value);
  Fixed &operator=(const Fixed & value);
  int getRawBits(void) const ;
  void setRawBits( int const raw );

private:
  int value;
  static const int lengt = 8;

};

#endif
