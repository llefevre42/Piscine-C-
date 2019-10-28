#ifndef ARRAY_HPP
# define ARRAY_HPP

#include <string>

template <typename T>
class Array {

public:
  Array();
  ~Array();
  Array(const Array & value);
  Array(unsigned int n);
  Array &operator=(const Array & value);

private:
  T rv1;
  T rv2;
  T rv3;
  T rv4;

};


#endif
