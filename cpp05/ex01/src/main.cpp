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
    person1.GradeTooHighException();
  } catch (int m_grade) {
    std::cout << person1.getName() << " grade too high"
              << " (" << person1.getGrade() << ")" << std::endl;
  }

  person3.decrementGrade(100);
  try {
    person3.GradeTooLowException();
  } catch (int m_grade) {
    std::cout << person3.getName() << " grade too low"
              << " (" << person3.getGrade() << ")" << std::endl;
  }
}