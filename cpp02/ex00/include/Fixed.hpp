#ifndef FIXED_HPP
#define FIXED_HPP
#include <iostream>
#include <string>

class Fixed {
private:
  int value;
  static const int bits;

public:
  Fixed();
  Fixed(const Fixed &copy);
  Fixed &operator=(const Fixed &obj);
  ~Fixed();

	
  int getRawBits(void);
  void setRawBits(int const raw);
};
#endif