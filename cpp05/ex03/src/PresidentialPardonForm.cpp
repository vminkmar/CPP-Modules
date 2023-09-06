#include "PresidentialPardonForm.hpp"

PresidentialPardonForm::PresidentialPardonForm()
    : AForm("PresidentialPardonForm", 25, 5, false), m_target("") {
	m_target = "";
  std::cout << "Presidential Constructor called" << std::endl;
}

PresidentialPardonForm::PresidentialPardonForm(std::string target)
    : AForm("PresidentialPardonForm", 25, 5, false) {
			m_target = target;
  std::cout << "Presidential Target Constructor called" << std::endl;
}

PresidentialPardonForm::~PresidentialPardonForm() {
  std::cout << "Presidential Destructor called" << std::endl;
}

PresidentialPardonForm &
PresidentialPardonForm::operator=(const PresidentialPardonForm &obj) {
  m_target = obj.m_target;
  return *this;
}

PresidentialPardonForm::PresidentialPardonForm
    (const PresidentialPardonForm &copy) : AForm("PresidentialPardonForm", 25, 5, false)
  {
	 m_target = copy.m_target;
  *this = copy;
}

void PresidentialPardonForm::execute(Bureaucrat const &executor) const {
  if (isSigned() == false)
    throw FormNotSignedException();
  else if (executor.getGrade() > getexecuteGrade())
    throw GradeTooLowException();
  else {
    std::cout << m_target << " has been pardoned by Zaphod Beeblebrox"
              << std::endl;
  }
}

std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &obj) {
  os << "Presidential has a Sign Grade of " << obj.getSignGrade()
     << " and a Execute Grade of " << obj.getexecuteGrade() << std::endl;
  return os;
}

std::string PresidentialPardonForm::getTarget() const{
	return (m_target);
}