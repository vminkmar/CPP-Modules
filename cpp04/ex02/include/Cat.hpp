#ifndef CAT_HPP
#define CAT_HPP
#include "AbstractAnimal.hpp"
#include "Brain.hpp"
#include <iostream>
#include <new>
#include <string>

class Cat : public AbstractAnimal {
private:
  Brain *m_brain;

public:
  Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &obj);
  ~Cat();

  // member
  void makeSound();
	void printIdea() const;
	
	//setter
	void setIdea(unsigned int index, std::string newIdea) const;

  //getter
  Brain* getBrain() const;
};
#endif