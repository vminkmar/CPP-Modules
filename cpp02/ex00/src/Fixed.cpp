#include "Fixed.hpp"
const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
  std::cout << "Default Constructor called" << std::endl;
}

Fixed::~Fixed() { std::cout << "Destructor called" << std::endl; }

Fixed::Fixed(const Fixed &copy) : value(copy.value) {
  std::cout << "Copy Constructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &obj) {
  this->value = obj.value;
  std::cout << "Copy assignment operator called" << std::endl;
  return *this;
}

int Fixed::getRawBits() {
  std::cout << "getRawBits member function called" << std::endl;
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  std::cout << "Member function called" << std::endl;
  value = raw;
}
