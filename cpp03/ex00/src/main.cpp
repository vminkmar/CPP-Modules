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

// int main(void) {
//   ClapTrap CT1;
//   ClapTrap CT2("Herbert");
//   ClapTrap CT3(CT2);

//   CT1 = CT2;
//   CT1.setName("Bert");
//   for (int i = 0; i < 11; i++) {
//     std::cout << "\n" << i<<  "\n";
// 	CT2.attack(CT1.getName());
//     std::cout << "\n" << i<<  "\n";
//     CT1.takeDamage(CT1.getAD());
//     std::cout << "\n" << i<<  "\n";
//     CT1.attack(CT2.getName());
//     std::cout << "\n" << i<<  "\n";
//     CT2.takeDamage(CT2.getAD());
//   }
// }