#ifndef INTER_HPP
#define INTER_HPP
#include "AForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "PresidentialPardonForm.hpp"
#include "ShrubberyCreationForm.hpp"

class Intern {

public:
  Intern();
  Intern(const Intern &copy);
  // Intern &operator=(const Intern &obj);
  ~Intern();

  // functions
  AForm *makeForm(std::string name, std::string target);
};

#endif