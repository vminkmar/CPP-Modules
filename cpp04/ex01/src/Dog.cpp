#include "Dog.hpp"

Dog::Dog() {
  m_brain = new Brain();
  m_type = "Dog";
  std::cout << "Dog Default Constructor called" << std::endl;
}

Dog::Dog(const Dog &copy) : Animal(copy) {
  std::cout << "Dog Copy Constructor called" << std::endl;
  this->m_type = copy.m_type;
  this->m_brain = new Brain(*(copy.m_brain));
}

Dog &Dog::operator=(const Dog &obj) {
  *(this->m_brain) = *(obj.m_brain);
  this->m_type = obj.m_type;
  return *this;
}

Dog::~Dog() {
  delete m_brain;
  std::cout << "Dog destructor called" << std::endl;
}

void Dog::makeSound() const {
  std::cout << m_type << " makes Woof." << std::endl;
}

Brain *Dog::getBrain() const { return m_brain; }

void Dog::setIdea(unsigned int index, std::string newIdea) const {
  this->getBrain()->setIdea(index, newIdea);
}

void Dog::printIdea() const {
  for (int index = 0; index < 100; index++) {
    if (this->getBrain()->getIdea(index).empty())
      break;
    std::cout << this->getBrain()->getIdea(index) << std::endl;
  }
}