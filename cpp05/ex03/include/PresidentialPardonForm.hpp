#ifndef PRESIDENTIALPARDONFORM_HPP
#define PRESIDENTIALPARDONFORM_HPP
#include "AForm.hpp"
class AForm;

class PresidentialPardonForm : public AForm {
private:
	std::string m_target;
public:
  PresidentialPardonForm();
  PresidentialPardonForm(std::string target);
  PresidentialPardonForm(const PresidentialPardonForm &copy);
  PresidentialPardonForm &operator=(const PresidentialPardonForm &obj);
  ~PresidentialPardonForm();

	std::string getTarget() const;

	//functions
  void execute(Bureaucrat const &executor) const;

};
std::ostream &operator<<(std::ostream &os, const PresidentialPardonForm &obj);


#endif