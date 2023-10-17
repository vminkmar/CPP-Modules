#ifndef AFORM_HPP
#define AFORM_HPP
#include "Bureaucrat.hpp"
#include <fstream>
#include <iostream>
#include <string>

class Bureaucrat;

class AForm {
private:
  const std::string name;
  int signGrade;
  int executeGrade;
  bool Signed;
protected:
	std::string m_target;

public:
  AForm();
  AForm(std::string name, int signGrade, int executeGrade);
  AForm(const AForm &copy);
  AForm &operator=(const AForm &obj);
  ~AForm();

  // getter
  std::string getName() const;
  int getSignGrade() const;
  int getexecuteGrade() const;

  // functions
  void beSigned(Bureaucrat &offical);
  void printStatusForm() const;
  bool isSigned() const;
  virtual void execute(Bureaucrat const &executor) const = 0;
	std::string getTarget() const;
  // nested classes
  class GradeTooHighException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class GradeTooLowException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class FormNotSignedException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};

#endif