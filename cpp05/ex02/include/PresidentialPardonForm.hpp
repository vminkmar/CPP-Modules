#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class AForm;

class PresidentialPardonForm : public AForm {
private:
	std::string m_target;
public:
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &copy);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
  ~PresidentialPardonForm();


	//functions
  void execute(Bureaucrat const &executor) const;

};

#endif