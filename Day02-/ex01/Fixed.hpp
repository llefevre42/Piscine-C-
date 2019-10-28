#ifndef FIXED_HPP
# define FIXED_HPP
# include <string>



class Fixed {

public:

  Fixed();
  ~Fixed(void);
  Fixed(int integer);
  Fixed(float floa);
  Fixed(const Fixed & value);
  Fixed &operator=(const Fixed & value);

  int getRawBits(void) const ;
  void setRawBits( int const raw );
  int toInt (void) const;
  float toFloat (void) const;

private:
  int value;
  static const int lengt = 8;

};

std::ostream & operator<<(std::ostream & o, const Fixed & value);

#endif
