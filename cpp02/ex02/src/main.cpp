#include "../include/Fixed.hpp"

int main(void) {
  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
	Fixed c(1);
	std::cout << c << std::endl;
  std::cout << a << std::endl;
  std::cout << ++a << std::endl; 
  std::cout << a << std::endl; 
  std::cout << a++ << std::endl; 
  std::cout << a-- << std::endl; 
  std::cout << a << std::endl;
  std::cout << b << std::endl; 
  std::cout << Fixed::max(a, b) << std::endl;
  std::cout << Fixed::min(a, b) << std::endl;
	if(a == b)
		std::cout << "true" <<std::endl;
	else
		std::cout << "false" <<std::endl;
	if(a != b)
		std::cout << "true" <<std::endl;
	else
		std::cout << "false" <<std::endl;
	if(a < b)
		std::cout << "true" <<std::endl;
	else
		std::cout << "false" <<std::endl;
  if(a > b)
		std::cout << "true" <<std::endl;
	else
		std::cout << "false" <<std::endl;
	return 0;
}