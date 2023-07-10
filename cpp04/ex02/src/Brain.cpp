#include "Brain.hpp"

Brain::Brain() : m_ideas(), index(0) {
  std::cout << "Brain Default Constructor called" << std::endl;
}

Brain::~Brain() { std::cout << "Brain destructor called" << std::endl; }

Brain::Brain(const Brain &copy) {
  std::cout << "Brain Copy Constructor called" << std::endl;
  *this = copy;
}

Brain &Brain::operator=(const Brain &obj) {
	for(int i = 0; i < 100; i++)
	{
		m_ideas[i] = obj.m_ideas[i];
	}
	return *this;
}

void Brain::setIdea(unsigned int index, std::string str){
	if(index < 100)
	{	m_ideas[index] = str;
		index++;
	}
}

std::string Brain::getIdea(unsigned int index) const{
	return m_ideas[index];
}