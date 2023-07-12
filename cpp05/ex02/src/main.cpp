#include "AForm.hpp"
#include "Bureaucrat.hpp"
#include "PresidentialPardonForm.hpp"
#include "RobotomyRequestForm.hpp"
#include "ShrubberyCreationForm.hpp"

int main() {
  Bureaucrat person1("Hans", 5);
  Bureaucrat person2("Peter", 30);
  PresidentialPardonForm PPF("PPF");
  RobotomyRequestForm RRF("RRF");
  ShrubberyCreationForm SCF("SCF");
  std::cout << std::endl;
	std::cout << PPF;
	std::cout << RRF;
	std::cout << SCF;
  std::cout << std::endl;

  try {
    PPF.beSigned(person2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  person2.signForm(PPF);
  try {
    PPF.execute(person2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;

  try {
    PPF.beSigned(person1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  person1.signForm(PPF);
  try {
    PPF.execute(person1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
	person1.signForm(SCF); 
	SCF.beSigned(person1);
	SCF.execute(person1);
  std::cout << std::endl;
	RRF.beSigned(person1);
	person1.signForm(RRF);
	RRF.execute(person1);
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
}