#include "ClapTrap.hpp"

int main(void) {
  ClapTrap CT1;
  ClapTrap CT2("Herbert");
  ClapTrap CT3(CT2);

  CT1 = CT2;
  CT1.setName("Bert");
  CT2.attack(CT1.getName());
  CT1.takeDamage(CT1.getAD());
  CT1.attack(CT2.getName());
  CT2.takeDamage(CT2.getAD());
}
