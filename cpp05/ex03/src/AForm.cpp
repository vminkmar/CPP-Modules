#include "AForm.hpp"

AForm::AForm() { std::cout << name << " Constructor called" << std::endl; }

AForm::AForm(std::string name, int signGrade, int executeGrade, bool Signed)
    : name(name), signGrade(signGrade), executeGrade(executeGrade), Signed(Signed) {
			if(signGrade > 150 || executeGrade > 150)
				throw GradeTooLowException();
			else if(signGrade < 1 || executeGrade < 1)
				throw GradeTooHighException();
			Signed = false;
			name = getName();

		}

AForm::AForm(const AForm &copy) : name(copy.name) {
  std::cout << name << " Copy Constructor called" << std::endl;
  *this = copy;
}

AForm &AForm::operator=(const AForm &obj) {
  signGrade = obj.signGrade;
  executeGrade = obj.executeGrade;
  Signed = obj.Signed;
	m_target = obj.m_target;
  return *this;
}

AForm::~AForm() { std::cout << "AForm Destructor called" << std::endl; }

std::string AForm::getName() const { return name; }

int AForm::getSignGrade() const { return signGrade; }

int AForm::getexecuteGrade() const { return executeGrade; }

void AForm::printStatusForm() const {
  if (Signed == false)
    std::cout << name << " is not signed" << std::endl;
  else
    std::cout << name << " is signed" << std::endl;
}

void AForm::beSigned(Bureaucrat &offical) {
  if (offical.getGrade() <= signGrade)
    Signed = true;
  else
    throw AForm::GradeTooLowException();
}

bool AForm::isSigned() const {
  if (Signed == false)
    return false;
  return true;
}

const char *AForm::GradeTooLowException::what() const throw() {
  return "Grade is too low to sign AForm";
}

const char *AForm::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}
const char *AForm::FormNotSignedException::what() const throw() {
  return "Form is not signed";
}

std::string AForm::getTarget() const{
	return (this->m_target);
}

// std::ostream &operator<<(std::ostream &os, const AForm &obj) {
//   os << obj.getName() << " needs a grade of " << obj.getSignGrade()
//      << " to be signed." << std::endl;
//   return os;
// }