#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : m_target(target) {
  std::cout << "Shrubbery Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "Shrubbery Destructor called" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
  m_target = obj.m_target;
  return *this;
}

PresidentialPardonForm::PresidentialPardonForm(
    const PresidentialPardonForm &copy) {
  *this = copy;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  std::string newString;
	newString = m_target + "_shrubbery";
	std::ofstream newFile(newString);
	
}