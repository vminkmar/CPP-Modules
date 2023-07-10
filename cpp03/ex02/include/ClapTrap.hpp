#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP
#include <iostream>
#include <string>

class ClapTrap {
protected:
std::string m_name;
int m_HP;
int m_EP;
int m_AD;

public:
ClapTrap();
ClapTrap(std::string player);
ClapTrap(const ClapTrap &copy);
ClapTrap& operator=(const ClapTrap &obj);
~ClapTrap();

//member functions
void attack(const std::string &target);
void takeDamage(unsigned int amount);
void beRepaired(unsigned int amount);

//getter
int getHP() const;
int getEP() const;
int getAD() const;
std::string getName() const;

//setter
void setHP(int newHP);
void setEP(int newEP);
void setAD(int newAD);
void setName(const std::string player);
};
#endif