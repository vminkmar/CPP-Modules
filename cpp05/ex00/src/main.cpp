#include "Bureaucrat.hpp"

int main() {
  Bureaucrat person1("Hans", 150);
  Bureaucrat person2("Bernhard", 1);
  Bureaucrat person3(person2);
  std::cout << person1;
  std::cout << person3;
  person1.incrementGrade(100);
  std::cout << person1;
  person3.decrementGrade(100);
  std::cout << person3;

  try {
    person1.incrementGrade(100);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    person3.decrementGrade(100);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
  try {
    Bureaucrat person4("Peter", 0);
  } catch (std::exception &e) {
    std::cout << e.what() << std::endl;
  }
}