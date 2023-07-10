#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : m_type("WrongAnimal") {
  std::cout << "WrongAnimal Default Constructor called" << std::endl;
}

WrongAnimal::~WrongAnimal() {
  std::cout << "WrongAnimal destructor called" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal &copy) {
  std::cout << "WrongAnimal Copy Constructor called";
  m_type = copy.getType();
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &obj) {
  m_type = obj.getType();
  return *this;
}

std::string WrongAnimal::getType() const { return this->m_type; }

void WrongAnimal::makeSound() const {
  std::cout << "WrongAnimal makes a sound" << std::endl;
}