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
  /// copy constructor
  Fixed(const Fixed &copy);

  Fixed &operator=(const Fixed &obj);
  // getter
  int getRawBits(void);
  // setter
  void setRawBits(int const raw);
  // member
  float toFloat(void) const;
  int toInt(void) const;

  // arithmetic
  float operator+(const Fixed &obj);
  float operator-(const Fixed &obj);
  float operator*(const Fixed &obj);
  float operator/(const Fixed &obj);

  // comparison
  bool operator>(const Fixed &obj);
  bool operator<(const Fixed &obj);
  bool operator<=(const Fixed &obj);
  bool operator>=(const Fixed &obj);
  bool operator==(const Fixed &obj);
  bool operator!=(const Fixed &obj);

  // min/max
  static const Fixed &max(const Fixed &a, const Fixed &b);
  static const Fixed &min(const Fixed &a, const Fixed &b);
  static Fixed &max(Fixed &a, Fixed &b);
  static Fixed &min(Fixed &a, Fixed &b);

  //increments
  Fixed& operator++();
  Fixed& operator--();
  Fixed operator++(int);
  Fixed operator--(int);


};
std::ostream &operator<<(std::ostream &os, const Fixed &obj);

#endif