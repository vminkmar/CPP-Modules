#ifndef HUMANA_HPP
#define HUMANA_HPP
#include "Weapon.hpp"
#include <iostream>
#include <new>
#include <string>

class HumanA {
private:
  std::string m_name;
  Weapon &m_type;

public:
  HumanA(std::string nameHumanA, Weapon &weaponType);
  ~HumanA();

	//functions
  void attack();
};
#endif