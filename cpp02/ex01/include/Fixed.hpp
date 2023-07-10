#ifndef FIXED_HPP
#define FIXED_HPP
#include <cmath>
#include <iostream>
#include <string>

class Fixed {
private:
  int value;
  static const int bits;

public:
  Fixed();
  Fixed(const int i);
  Fixed(const float f);
  ~Fixed();
  Fixed(const Fixed &copy);
  Fixed &operator=(const Fixed &obj);

  // getter
  int getRawBits(void);

  // setter
  void setRawBits(int const raw);

  // member
  float toFloat(void) const;
  int toInt(void) const;
};
std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif