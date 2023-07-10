#include "Bureaucrat.hpp"

int main()
{
	Bureaucrat person1("Hans", 150);

	person1.incrementGrade(100);
	std::cout << person1;
}