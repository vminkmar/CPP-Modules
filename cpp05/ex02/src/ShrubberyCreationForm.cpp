#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : m_target(target) {
  std::cout << "Shrubbery Constructor called" << std::endl;
}

ShrubberyCreationForm::~ShrubberyCreationForm() {
  std::cout << "Shrubbery Destructor called" << std::endl;
}

ShrubberyCreationForm &
ShrubberyCreationForm::operator=(const ShrubberyCreationForm &obj) {
  m_target = obj.m_target;
  return *this;
}

ShrubberyCreationForm::ShrubberyCreationForm(
    const ShrubberyCreationForm &copy) {
  *this = copy;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  std::string newString;
	newString = m_target + "_shrubbery";

}