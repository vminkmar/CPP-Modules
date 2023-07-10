#include "WrongCat.hpp"

WrongCat::WrongCat() {
  m_type = "WrongCat";
  std::cout << "WrongCat Default Constructor called" << std::endl;
}

WrongCat::WrongCat(const WrongCat &copy) : WrongAnimal(copy) {
  std::cout << "WrongCat Copy Constructor called";
  *this = copy;
}

WrongCat &WrongCat::operator=(const WrongCat &obj) {
  m_type = obj.getType();
  return *this;
}

WrongCat::~WrongCat() {std::cout << "WrongCat destructor called" << std::endl;}

void WrongCat::makeSound() const {
  std::cout << m_type << " makes Woof." << std::endl;
}
