#ifndef ROBOTOMYREQUESTFORM_HPP
#define ROBOTOMYREQUESTFORM_HPP
#include "AForm.hpp"
class AForm;

class RobotomyRequestForm : public AForm {
public:
  RobotomyRequestForm(std:string target);
  RobotomyRequestForm(const RobotomyRequestForm &copy);
  RobotomyRequestForm &operator=(const RobotomyRequestForm &obj);
  ~RobotomyRequestForm();
};

#endif