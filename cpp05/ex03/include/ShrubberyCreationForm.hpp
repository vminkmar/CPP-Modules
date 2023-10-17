#ifndef SHRUBBERYCREATIONFORM_HPP
#define SHRUBBERYCREATIONFORM_HPP
#include "AForm.hpp"
#include <iostream>
#include <string>
class AForm;

class ShrubberyCreationForm : public AForm {
private:
  std::string m_target;

public:
  ShrubberyCreationForm();
  ShrubberyCreationForm(std::string target);
  ShrubberyCreationForm(const ShrubberyCreationForm &copy);
  ShrubberyCreationForm &operator=(const ShrubberyCreationForm &obj);
  ~ShrubberyCreationForm();

  std::string getTarget() const;

  // functions
  void execute(Bureaucrat const &executor) const;
};
std::ostream &operator<<(std::ostream &os, const ShrubberyCreationForm &obj);

#endif