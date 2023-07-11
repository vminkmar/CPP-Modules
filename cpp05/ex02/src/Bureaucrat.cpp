#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade)
    : m_name(name), m_grade(grade) {
  std::cout << "Bureaucrat " << m_name << " Constructor called" << std::endl;
  if (m_grade > 150)
    throw Bureaucrat::GradeTooLowException();
  if (m_grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy) : m_name(copy.m_name) {
  std::cout << "Bureaucrat Copy Constructor called" << std::endl;
  this->m_grade = copy.m_grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj) {
  std::cout << "Bureaucrat Assignment called" << std::endl;
  this->m_grade = obj.m_grade;
  return *this;
}

Bureaucrat::~Bureaucrat() {
  std::cout << "Bureaucrat " << m_name << " Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const { return m_name; }

int Bureaucrat::getGrade() const { return m_grade; }

void Bureaucrat::incrementGrade(int increment_grade) {
  m_grade -= increment_grade;
  if (m_grade < 1)
    throw Bureaucrat::GradeTooHighException();
}

void Bureaucrat::decrementGrade(int decrement_grade) {
  m_grade += decrement_grade;
  if (m_grade > 150)
    throw Bureaucrat::GradeTooLowException();
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj) {
  os << obj.getName() << " bureaucrat has a grade of " << obj.getGrade()
     << std::endl;
  return os;
}


void Bureaucrat::signForm(Form &signedForm){
	if(signedForm.getSignGrade() >= m_grade)
		std::cout << m_name << " signed " << signedForm.getName() << std::endl;
	else
		std::cout << m_name << " couldn't sign " << signedForm.getName() << " because his grade of " << m_grade << " is too low." << std::endl;
}


const char *Bureaucrat::GradeTooLowException::what() const throw() {
  return "Grade is too low";
}

const char *Bureaucrat::GradeTooHighException::what() const throw() {
  return "Grade is too high";
}
