#include "Cat.hpp"

Cat::Cat() {
  m_brain = new Brain();
  m_type = "Cat";
  std::cout << "Cat Default Constructor called" << std::endl;
}

Cat::Cat(const Cat &copy) : AbstractAnimal(copy) {
  std::cout << "Cat Copy Constructor called"<< std::endl;
  this->m_type = copy.m_type;
  this->m_brain = new Brain(*(copy.m_brain));
}

Cat &Cat::operator=(const Cat &obj) {
  *(this->m_brain) = *(obj.m_brain);
  this->m_type = obj.m_type;
  return *this;
}

Cat::~Cat() {
  delete m_brain;
  std::cout << "Cat destructor called" << std::endl;
}

void Cat::makeSound() {
  std::cout << m_type << " makes Meow." << std::endl;
}

Brain *Cat::getBrain() const { return m_brain;}

void Cat::setIdea(unsigned int index, std::string newIdea) const {
  this->getBrain()->setIdea(index, newIdea);
}

void Cat::printIdea() const {
  for (int index = 0; index < 100; index++) {
    if (this->getBrain()->getIdea(index).empty())
      break;
    std::cout << this->getBrain()->getIdea(index) << std::endl;
  }
}