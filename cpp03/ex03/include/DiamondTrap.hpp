#ifndef DIAMONDTRAP_HPP
#define DIAMONDTRAP_HPP
#include "FragTrap.hpp"
#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class DiamondTrap : public FragTrap, public ScavTrap {
private:
std::string m_name;

public:
  DiamondTrap();
  DiamondTrap(std::string player);
  DiamondTrap(const DiamondTrap &copy);
  DiamondTrap &operator=(const DiamondTrap &obj);
  ~DiamondTrap();

  // member
  void highFivesGuys(void);
};
#endif