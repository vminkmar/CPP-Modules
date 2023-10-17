#include "Form.hpp"

Form::Form(){}

Form::Form(std::string name, int signGrade, int executeGrade)
    : name(name), signGrade(signGrade), executeGrade(executeGrade) {
			Signed = false;
  std::cout << name << " Constructor called" << std::endl;
}

Form::Form(const Form &copy) : name(copy.name) {
  std::cout << name << " Copy Constructor called" << std::endl;
  *this = copy;
}

Form &Form::operator=(const Form &obj) {
  signGrade = obj.signGrade;
  executeGrade = obj.executeGrade;
  Signed = obj.Signed;
  return *this;
}

Form::~Form() { std::cout << name << " Destructor called" << std::endl; }

std::string Form::getName() const { return name; }

int Form::getSignGrade() const { return signGrade; }

int Form::getexecuteGrade() const { return executeGrade; }

void Form::printStatusForm(){
	if(Signed == false)
		std::cout << name << " is not signed" << std::endl;
	else
		std::cout << name << " is signed" << std::endl;
}

void Form::beSigned(Bureaucrat &offical) {
  if (offical.getGrade() <= signGrade)
    Signed = true;
	else
    throw Form::GradeTooLowException();
}

const char *Form::GradeTooLowException::what() const throw() {
  return "Grade is too low to sign form";
}

const char *Form::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}

std::ostream &operator<<(std::ostream &os, const Form &obj) {
  os << obj.getName() << " needs a grade of " << obj.getSignGrade() << " to be signed."
     << std::endl;
  return os;
}