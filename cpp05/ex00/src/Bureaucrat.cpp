#include "Bureaucrat.hpp"

Bureaucrat::Bureaucrat(std::string name, int grade) : m_name(name), m_grade(grade)
{
	std::cout << "Bureaucrat Constructor called" << std::endl;
}

Bureaucrat::Bureaucrat(const Bureaucrat &copy)
{
	this->m_grade = copy.m_grade;
}

Bureaucrat &Bureaucrat::operator=(const Bureaucrat &obj)
{
	this->m_grade = obj.m_grade;
	return *this;
}

Bureaucrat::~Bureaucrat() {
	std::cout << "Bureaucrat Destructor called" << std::endl;
}

std::string Bureaucrat::getName() const
{
	return m_name;
}

int Bureaucrat::getGrade() const
{
	return m_grade;
}

void Bureaucrat::GradeTooLowException() {
	if(m_grade > 150)
		throw "The Grade is too low";
}

void Bureaucrat::GradeTooHighException() {
	if(m_grade < 1)
		throw "The Grade is too high";
}

void Bureaucrat::incrementGrade(int increment_grade) {
	m_grade -= increment_grade;
}

void Bureaucrat::decrementGrade(int decrement_grade) {
	m_grade += decrement_grade;
}

std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj)
{
		os << obj.getName() << " bureaucrat has a grade of " << obj.getGrade() << std::endl;
	return os;
}
