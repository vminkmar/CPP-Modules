#include "FragTrap.hpp"

FragTrap::FragTrap()
	:ClapTrap()
{
  std::cout << "Default FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(std::string player)
	: ClapTrap(player)
{
  std::cout << "Name FragTrap Constructor called" << std::endl;
}

FragTrap::FragTrap(const FragTrap &copy) : ClapTrap(copy){
  std::cout << "Copy FragTrap Constructor called" << std::endl;
  *this = copy;
}

FragTrap &FragTrap::operator=(const FragTrap &obj) {
  this->m_HP = obj.m_HP;
  this->m_name = obj.m_name;
  this->m_AD = obj.m_AD;
  this->m_EP = obj.m_EP;
  return *this;
}

FragTrap::~FragTrap() { std::cout << "FragTrap Destructor called" << std::endl; }

void FragTrap::highFivesGuys(void)
{
	std::cout << getName() << " FragTrap is asking for a high five" << std::endl;
}