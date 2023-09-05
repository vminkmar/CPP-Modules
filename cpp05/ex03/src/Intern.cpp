#include "Intern.hpp"

Intern::Intern() {}

Intern::Intern(const Intern &copy)
{
	*this = copy;
}

// Intern &Intern::operator=(const Intern &obj)
// {
// 	return *this;
// }

Intern::~Intern() {}

AForm *RobotomyRequestForm(std::string target){
	std::string newString = target;
	std::cout << "robotarget: " << target << std::endl;
	return new class RobotomyRequestForm(target);
}

AForm *PresidentialPardonForm(std::string target){
	std::string newString = target;
	return new class PresidentialPardonForm(target);
}

AForm *ShrubberyCreationForm(std::string target){
	std::string newString = target;
	return new class ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *(*forms[])(std::string target) = {RobotomyRequestForm, PresidentialPardonForm, ShrubberyCreationForm};
	std::string formNames[3] = {"robotomy", "presidential", "shrubbery"};
	for(int i = 0; i < 3; i++)
	{
		if(name==formNames[i]){
			std::cout << "Intern creates " << name << std::endl;
			return forms[i](target);
		}
	}
	std::cout << "Intern can't create " << name << std::endl;
	return NULL;
}
