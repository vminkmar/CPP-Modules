#include "Cat.hpp"

Cat::Cat() {
  m_type = "Cat";
  std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : Animal(copy) {
  std::cout << "Cat Copy Constructor called";
  *this = copy;
}

Cat &Cat::operator=(const Cat &obj) {
  m_type = obj.getType();
  return *this;
}

Cat::~Cat() {std::cout << "Cat destructor called" << std::endl;}

void Cat::makeSound() const {
  std::cout << m_type << " makes Meow." << std::endl;
}
