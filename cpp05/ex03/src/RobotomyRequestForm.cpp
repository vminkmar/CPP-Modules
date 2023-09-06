#include "RobotomyRequestForm.hpp"

RobotomyRequestForm::RobotomyRequestForm()
    : AForm("RobotomyRequestForm", 72, 45, false){
			m_target = "";
  std::cout << "Robotomy Constructor called" << std::endl;
}

RobotomyRequestForm::RobotomyRequestForm(std::string target)
    : AForm("RobotomyRequestForm", 72, 45, false) {
			m_target = target;
  std::cout << "Robotomy Constructor called" << std::endl;
}

RobotomyRequestForm::~RobotomyRequestForm() {
  std::cout <<"Robotomy Destructor called" << std::endl;
}

RobotomyRequestForm &
RobotomyRequestForm::operator=(const RobotomyRequestForm &obj) {
  m_target = obj.m_target;
  return *this;
}

RobotomyRequestForm::RobotomyRequestForm(
    const RobotomyRequestForm &copy) : AForm("RobotomyRequestForm", 72, 45, false){
			m_target = copy.m_target;
  *this = copy;
}

void RobotomyRequestForm::execute(Bureaucrat const &executor) const {
	if(isSigned() == false)
		throw FormNotSignedException();
	else if(executor.getGrade() > getexecuteGrade())
		throw GradeTooLowException();
	else
		std::cout << "makes brrr brr" << std::endl;
}

std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &obj) {
  os << "Robotomy has a Sign Grade of "
     << obj.getSignGrade() << " and a Execute Grade of " << obj.getexecuteGrade()
     << std::endl;
  return os;
}

std::string RobotomyRequestForm::getTarget() const{
	return (m_target);
}