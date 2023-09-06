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

AForm *RobotomyRequestFormCreation(std::string target){
	std::string newString = target;
	return new RobotomyRequestForm(target);
}

AForm *PresidentialPardonFormCreation(std::string target){
	std::string newString = target;
	return new PresidentialPardonForm(target);
}

AForm *ShrubberyCreationFormCreation(std::string target){
	std::string newString = target;
	return new ShrubberyCreationForm(target);
}

AForm *Intern::makeForm(std::string name, std::string target)
{
	AForm *(*forms[])(std::string target) = {RobotomyRequestFormCreation, PresidentialPardonFormCreation, ShrubberyCreationFormCreation};
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
