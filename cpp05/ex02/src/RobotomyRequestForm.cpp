#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : m_target(target) {
  std::cout << "Shrubbery Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout << "Shrubbery Destructor called" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
  m_target = obj.m_target;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(
    const RobotomyRequestForm &copy) {
  *this = copy;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
  std::string newString;
	newString = m_target + "_shrubbery";
	std::ofstream newFile(newString);
	
}