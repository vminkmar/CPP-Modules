#include "ShrubberyCreationForm.hpp"

ShrubberyCreationForm::ShrubberyCreationForm()
    : AForm("ShrubberyCreationForm", 145, 137, false){
			m_target = "";
  std::cout << "Shrubbery Constructor called" << std::endl;
}

ShrubberyCreationForm::ShrubberyCreationForm(std::string target)
    : AForm("ShrubberyCreationForm", 145, 137, false){
	m_target = target;
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
    const ShrubberyCreationForm &copy) : AForm("ShrubberyCreationForm", 72, 45, false){
	m_target = copy.m_target;
  *this = copy;
}

void ShrubberyCreationForm::execute(Bureaucrat const &executor) const {
  if (isSigned() == false)
    throw FormNotSignedException();
  else if (executor.getGrade() > this->getexecuteGrade())
    throw GradeTooLowException();
  else {
    std::string newString;
    newString = m_target + "_shrubbery";
    std::ofstream newFile(newString);
    newFile << "       ^\n"
               "      / \\\n"
               "     /   \\\n"
               "    /     \\\n"
               "   /       \\\n"
               "  /         \\\n"
               " /           \\\n"
               "/_____________\\\n"
               "      | |\n"
               "      | |\n";
    newFile.close();
		std::cout << newString << " File has been created" << std::endl;
  }
  return;
}

std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &obj) {
  os << "Shrubbery has a Sign Grade of "
     << obj.getSignGrade() << " and a Execute Grade of " << obj.getexecuteGrade()
     << std::endl;
  return os;
}

std::string ShrubberyCreationForm::getTarget() const{
	return (m_target);
}