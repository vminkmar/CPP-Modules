#include "ScavTrap.hpp"

// int main(void) {
//   ScavTrap ST1;
//   ScavTrap ST2("Herbert");
//   ScavTrap ST3(ST2);

//   ST1 = ST3;
//   ST1.setName("Bert");
//   ST1.guardGate();
//   ST2.guardGate();
//   ST2.attack(ST1.getName());
//   ST1.takeDamage(ST1.getAD());
//   ST1.attack(ST2.getName());
//   ST2.takeDamage(ST2.getAD());
// }

int main(void) {
  ScavTrap ST1;
  ScavTrap ST2("Herbert");
  ScavTrap ST3(ST2);

  ST1 = ST3;
  ST1.setName("Bert");
  ST1.guardGate();
  ST2.guardGate();
  for (int i = 0; i < 11; i++) {
    std::cout << "\n" << i << "\n";
    ST2.attack(ST1.getName());
    std::cout << "\n" << i << "\n";
    ST1.takeDamage(ST1.getAD());
    std::cout << "\n" << i << "\n";
    ST1.attack(ST2.getName());
    std::cout << "\n" << i << "\n";
    ST2.takeDamage(ST2.getAD());
    std::cout << std::endl;
  }
}