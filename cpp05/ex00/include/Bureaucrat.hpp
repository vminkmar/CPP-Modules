#ifndef BUREAUCRAT_HPP
#define BUREAUCRAT_HPP
#include <exception>
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

  // functions
  void incrementGrade(int increment_grade);
  void decrementGrade(int decrement_grade);

  // nested classes
  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
std::ostream &operator<<(std::ostream &os, const Bureaucrat &obj);

#endif