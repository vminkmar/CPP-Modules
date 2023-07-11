#ifndef FORM_HPP
#define FORM_HPP
#include "Bureaucrat.hpp"
class Bureaucrat;

class Form {
private:
  const std::string name;
  int signGrade;
  int executeGrade;
  bool Signed;

public:
  Form();
  Form(const Form &copy);
  Form &operator=(const Form &obj);
  ~Form();

  // getter
  std::string getName() const;
  int getSignGrade() const;
  int getexecuteGrade() const;

  // functions
  void beSigned(Bureaucrat &offical);
	void printStatusForm();

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
std::ostream &operator<<(std::ostream &os, const Form &obj);

#endif