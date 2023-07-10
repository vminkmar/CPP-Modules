#include "AMateria.hpp"

AMateria::AMateria() {}

AMateria::AMateria(std::string const &type) : m_type(type) {
  std::cout << m_type << " Constructor called" << std::endl;
}

AMateria::~AMateria() {
  std::cout << "AMateria Default Constructor called" << std::endl;
}

std::string AMateria::getType() { return m_type; }

void AMateria::use(ICharacter &target) {
  std::cout << "AMateria used on " << target.getName() << std::endl;
}

AMateria &AMateria::operator=(const AMateria &obj) {
  if (this == &obj)
    return *this;
  this->m_type = obj.m_type;
  return *this;
}

AMateria::AMateria(const AMateria &copy) {
  *this = copy;
  return;
}