#ifndef BRAIN_HPP
#define BRAIN_HPP
#include <iostream>
#include <new>
#include <string>

class Brain {
private:
  std::string m_ideas[100];

public:
  Brain();
  Brain(const Brain &copy);
  Brain &operator=(const Brain &obj);
  ~Brain();

  // variables
  int index;


	//getter
	std::string getIdea(unsigned int index) const;
  // member
  void makeSound() const;
	void setIdea(unsigned int index, std::string str);
};
#endif