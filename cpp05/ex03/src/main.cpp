#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "Intern.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  Bureaucrat person1("Hans", 5);
  Bureaucrat person2("Peter", 100);
  Intern someRandomIntern1;
  Intern someRandomIntern2;
  std::cout << std::endl;
  AForm *SCF;
  SCF = someRandomIntern2.makeForm("Shrubbery", "Michel");
  std::cout << std::endl;
  AForm *RRF = someRandomIntern1.makeForm("robotomy", "Bender");
  std::cout << std::endl;

  try {
    RRF->beSigned(person2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  person2.signForm(*RRF);

  try {
    RRF->execute(person2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  try {
    RRF->beSigned(person1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  person2.signForm(*RRF);

  try {
    RRF->execute(person1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
}