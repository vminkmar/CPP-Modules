#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <iostream>
#include <new>
#include <string>

class Bureaucrat {
private:
  const std::string m_name;
  int m_grade;

public:
  Bureaucrat(std::string name, int grade);
  Bureaucrat(const Bureaucrat &copy);
  Bureaucrat &operator=(const Bureaucrat &obj);
  ~Bureaucrat();

  // getter
  std::string getName() const;
  int getGrade() const;

  // exceptions
  void GradeTooHighException();
  void GradeTooLowException();

  // functions
  void incrementGrade(int increment_grade);
  void decrementGrade(int decrement_grade);
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif