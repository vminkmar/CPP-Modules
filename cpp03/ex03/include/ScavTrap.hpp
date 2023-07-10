#ifndef SCAVTRAP_HPP
#define SCAVTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class ScavTrap : public ClapTrap {
public:
  ScavTrap();
  ScavTrap(std::string player);
  ScavTrap(const ScavTrap &copy);
  ScavTrap &operator=(const ScavTrap &obj);
  ~ScavTrap();

  // member
  void guardGate();
};
#endif