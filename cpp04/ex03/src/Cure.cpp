#include "Cure.hpp"

Cure::Cure() : AMateria("cure") {
  std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure(const Cure &copy) : AMateria("cure") {
  std::cout << "Cure Copy Constructor called" << std::endl;
  *this = copy;
  return;
}

Cure &Cure::operator=(const Cure &obj) {
  std::cout << "Assigned from " << obj.getType() << std::endl;
  return *this;
}

Cure::~Cure() { std::cout << "Cure Destructor called" << std::endl; }

void Cure::use(ICharacter &target) {
  std::cout << "shoots an Cure bolt at " << target.getName() << std::endl;
}

std::string const &Cure::getType() const { return this->m_type; }

Cure *Cure::clone() const { return (new Cure()); }
