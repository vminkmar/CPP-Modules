#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP
#include "ClapTrap.hpp"
#include <iostream>
#include <string>

class FragTrap : public ClapTrap {
public:
  FragTrap();
  FragTrap(std::string player);
  FragTrap(const FragTrap &copy);
  FragTrap &operator=(const FragTrap &obj);
  ~FragTrap();

  // member
  void highFivesGuys(void);
};
#endif