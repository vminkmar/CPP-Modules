#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
	:m_name(ClapTrap::m_name), FragTrap::m_HP, ScavTrap::m_EP, FragTrap::m_AD
{
  std::cout << "Default DiamondTrap Constructor called" << std::endl;
}


void DiamondTrap::attack() : ScavTrap::attack