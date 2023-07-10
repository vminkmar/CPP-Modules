#include "../include/Fixed.hpp"

int main(void) {
  Fixed a;
//   Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl; // 0
  std::cout << ++a << std::endl; // 0.3
  std::cout << a << std::endl; // 0.3
  std::cout << a++ << std::endl; // 0.3
  std::cout << a-- << std::endl; // 0.7
  std::cout << a << std::endl; // 0.3
//   std::cout << b << std::endl; 
//   std::cout << Fixed::max(a, b) << std::endl;
//   std::cout << Fixed::min(a, b) << std::endl;
  return 0;
}