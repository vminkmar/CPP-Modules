#include "AbstractAnimal.hpp"

AbstractAnimal::AbstractAnimal() : m_type("AbstractAnimal") {
  std::cout << "AbstractAnimal Default Constructor called" << std::endl;
}

AbstractAnimal::~AbstractAnimal() { std::cout << "AbstractAnimal destructor called" << std::endl; }

AbstractAnimal::AbstractAnimal(const AbstractAnimal &copy) {
  std::cout << "AbstractAnimal Copy Constructor called" << std::endl;
  m_type = copy.getType();
}

AbstractAnimal &AbstractAnimal::operator=(const AbstractAnimal &obj) {
  m_type = obj.getType();
  return *this;
}

std::string AbstractAnimal::getType() const { return this->m_type; }

void AbstractAnimal::makeSound() {
  std::cout << "AbstractAnimal makes a sound" << std::endl;
}