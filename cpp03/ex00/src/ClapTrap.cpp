#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : m_name(""), m_HP(10), m_EP(10), m_AD(0) {
  std::cout << "Default Constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string player)
    : m_name(player), m_HP(10), m_EP(10), m_AD(0) {
  std::cout << "Name Constructor called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap &copy) {
  std::cout << "Copy Constructor called" << std::endl;
  *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &obj) {
  this->m_HP = obj.m_HP;
  this->m_name = obj.m_name;
  this->m_AD = obj.m_AD;
  this->m_EP = obj.m_EP;
  return *this;
}

ClapTrap::~ClapTrap() { std::cout << "Destructor called" << std::endl; }

void ClapTrap::attack(const std::string &target) {
  if (this->m_EP <= 0) {
    std::cout << this->m_name << " has no EP left" << std::endl;
    return;
  }
  std::cout << m_name << " attacks " << target << " causing " << m_AD
            << " points of damage" << std::endl;
  this->m_EP--;
}

void ClapTrap::beRepaired(unsigned int amount) {
  this->m_HP += amount;
  if (this->m_EP <= 0) {
    std::cout << "You have no EP left" << std::endl;
    return;
  }
  this->m_EP--;
  std::cout << this->m_name << " got repaired " << std::endl;
}

void ClapTrap::takeDamage(unsigned int amount) {
  if (m_EP <= 0)
    return;
  this->m_HP -= amount;
  std::cout << m_name << " took " << amount << " damage" << std::endl;
}

int ClapTrap::getAD() const { return (m_AD); }

int ClapTrap::getHP() const { return (m_HP); }

int ClapTrap::getEP() const { return (m_EP); }

std::string ClapTrap::getName() const { return (m_name); }

void ClapTrap::setAD(int newAD) { m_AD = newAD; }

void ClapTrap::setHP(int newHP) { m_HP = newHP; }

void ClapTrap::setEP(int newEP) { m_EP = newEP; }

void ClapTrap::setName(const std::string player) { m_name = player; }