#include "Ice.hpp"

Ice::Ice() : AMateria("ice") {
  std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice(const Ice &copy) : AMateria("ice") {
  std::cout << "Ice Copy Constructor called" << std::endl;
  *this = copy;
	return;
}

Ice &Ice::operator=(const Ice &obj) {
  std::cout << "Assigned from " << obj.getType() << std::endl;
  return *this;
}

Ice::~Ice(){
	std::cout << "Ice Destructor called" << std::endl;
}

void Ice::use(ICharacter &target) {
  std::cout << "shoots an ice bolt at " << target.getName() << std::endl;
}

std::string const &Ice::getType() const { return m_type; }

Ice *Ice::clone() const { return new Ice(); }
