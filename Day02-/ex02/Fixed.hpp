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

  /***************************************/
  Fixed operator+(const Fixed & value) const;
  Fixed operator-(const Fixed & value) const;
  Fixed operator*(const Fixed & value) const;
  Fixed operator/(const Fixed & value) const;
  /****************************************/
  bool operator>(const Fixed & value) const;
  bool operator<(const Fixed & value) const;
  bool operator>=(const Fixed & value) const;
  bool operator<=(const Fixed & value) const;
  bool operator==(const Fixed & value) const;
  bool operator!=(const Fixed & value) const;
  /*****************************************/
  Fixed &operator++(void);
  Fixed operator++(int);
  Fixed &operator--(void);
  Fixed operator--(int);
  /*******************************************/
  static const Fixed &max(Fixed const & a,Fixed const & b);
  static const Fixed &min(Fixed const & a,Fixed const & b);
  static const Fixed &max(Fixed & a,Fixed & b);
  static const Fixed &min(Fixed & a,Fixed & b);


private:
  int value;
  static const int lengt = 8;

};

std::ostream & operator<<(std::ostream & o, const Fixed & value);

#endif
