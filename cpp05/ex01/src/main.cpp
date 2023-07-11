#include "Bureaucrat.hpp"
#include "Form.hpp"

int main() {
  Form form1("Application", 20, 10, false);
  Bureaucrat person1("Hans", 10);
  Bureaucrat person2("Peter", 30);
  std::cout << std::endl;
  std::cout << person1 << std::endl;
  std::cout << person2 << std::endl;
  std::cout << form1 << std::endl;

  try {
    form1.beSigned(person2);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
	std::cout << std::endl;
	person2.signForm(form1);
	std::cout << std::endl;
	form1.printStatusForm();
	std::cout << std::endl;

  try {
    form1.beSigned(person1);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
	
	std::cout << std::endl;
	form1.printStatusForm();
	std::cout << std::endl;
}