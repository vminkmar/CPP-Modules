#include "Animal.hpp"

Animal::Animal() : m_type("Animal") {
  std::cout << "Animal Default Constructor called" << std::endl;
}

Animal::~Animal() { std::cout << "Animal destructor called" << std::endl; }

Animal::Animal(const Animal &copy) {
  std::cout << "Animal Copy Constructor called" << std::endl;
  m_type = copy.getType();
}

Animal &Animal::operator=(const Animal &obj) {
  m_type = obj.getType();
  return *this;
}

std::string Animal::getType() const { return this->m_type; }

void Animal::makeSound() const {
  std::cout << "Animal makes a sound" << std::endl;
}