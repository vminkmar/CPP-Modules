#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
class AForm;

class RobotomyRequestForm : public AForm {
private:
  std::string m_target;

public:
  RobotomyRequestForm(std::string target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
  ~RobotomyRequestForm();


	//functions
  void execute(Bureaucrat const &executor) const;

};

#endif