#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
class AForm;

class RobotomyRequestForm : public AForm {
private:
  std::string m_target;

public:
  RobotomyRequestForm();
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
  ~RobotomyRequestForm();

	std::string getTarget() const;

	//functions
  void execute(Bureaucrat const &executor) const;

};
std::ostream &operator<<(std::ostream &os, const RobotomyRequestForm &obj);

#endif