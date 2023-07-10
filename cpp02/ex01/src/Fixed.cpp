#include "Fixed.hpp"

const int Fixed::bits = 8;

Fixed::Fixed() : value(0) {
  std::cout << "Default Constructor called" << std::endl;
}
Fixed::Fixed(const int i) {
	this->value = i << bits;
	std::cout << "Int Constructor called" << std::endl;
}

Fixed::Fixed(const float f) {
	this->value = static_cast<int>(std::roundf(f * (1 << bits)));
	std::cout << "Float Constructor called" << std::endl;
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
  return this->value;
}

void Fixed::setRawBits(int const raw) {
  value = raw;
}

int Fixed::toInt() const {
	return value >> bits;
}

float Fixed::toFloat() const {
	float result  = static_cast<float>(value) / (1 << bits);
	return result;
}

std ::ostream &operator<<(std::ostream &os, Fixed const &obj)
{
	os << obj.toFloat();
	return os;
}