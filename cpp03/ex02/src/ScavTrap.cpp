#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap() {
  std::cout << "Default ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(std::string player) : ClapTrap(player) {
  std::cout << "Name ScavTrap Constructor called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy) {
  std::cout << "Copy ScavTrap Constructor called" << std::endl;
  *this = copy;
}

ScavTrap &ScavTrap::operator=(const ScavTrap &obj) {
  this->m_HP = obj.m_HP;
  this->m_name = obj.m_name;
  this->m_AD = obj.m_AD;
  this->m_EP = obj.m_EP;
  return *this;
}

ScavTrap::~ScavTrap() {
  std::cout << "ScavTrap Destructor called" << std::endl;
}
