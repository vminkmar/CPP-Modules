#include "Dog.hpp"

Dog::Dog(){
	m_type = "Dog";
	 std::cout << "Dog Default Constructor called" << std::endl; }

Dog::Dog(const Dog &copy) : Animal(copy) {
  std::cout << "Dog Copy Constructor called";
  *this = copy;
}

Dog &Dog::operator=(const Dog &obj) {
  m_type = obj.getType();
  return *this;
}

Dog::~Dog() {std::cout << "Dog destructor called" << std::endl;}

void Dog::makeSound() const {
  std::cout << m_type << " makes Woof." << std::endl;
}
