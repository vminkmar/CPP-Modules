#include "WrongDog.hpp"

WrongDog::WrongDog() {
  m_type = "WrongDog";
  std::cout << "WrongDog Default Constructor called" << std::endl;
}

WrongDog::WrongDog(const WrongDog &copy) : WrongAnimal(copy) {
  std::cout << "WrongDog Copy Constructor called";
  *this = copy;
}

WrongDog &WrongDog::operator=(const WrongDog &obj) {
  m_type = obj.getType();
  return *this;
}

WrongDog::~WrongDog() {std::cout << "WrongDog destructor called" << std::endl;}

void WrongDog::makeSound() const {
  std::cout << m_type << " makes Meow." << std::endl;
}
