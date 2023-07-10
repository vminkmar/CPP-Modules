#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <new>
#include <string>

class Dog : public Animal {
private:
  Brain *m_brain;

public:
  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &obj);
  ~Dog();

  // member
  void makeSound() const;
	void printIdea() const;
	
	//setter
	void setIdea(unsigned int index, std::string newIdea) const;

  //getter
  Brain* getBrain() const;

};
#endif