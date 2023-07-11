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

public:
  AForm(std::string name, int signGrade, int executeGrade, bool Signed);
  AForm(const AForm &copy);
  AForm &operator=(const AForm &obj);
  ~AForm();

  // getter
  std::string getName() const;
  int getSignGrade() const;
  int getexecuteGrade() const;

  // functions
  void beSigned(Bureaucrat &offical);
  void printStatusForm();
  virtual void execute(Bureaucrat const &executor) const = 0;

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

#endif