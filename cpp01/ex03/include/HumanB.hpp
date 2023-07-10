#ifndef HUMANB_HPP
#define HUMANB_HPP
#include "Weapon.hpp"
#include <iostream>
#include <new>
#include <string>

class HumanB {
private:
  std::string m_name;
  Weapon *m_type;

public:
  HumanB(std::string nameHumanB);
  ~HumanB();
  void setWeapon(Weapon &newWeapon);
  void attack();
};
#endif