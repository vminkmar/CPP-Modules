#include "FragTrap.hpp"

// int main(void) {
//   ScavTrap FT1;
//   ScavTrap FT3("Herbert");
//   ScavTrap FT3(FT3);

//   FT1 = FT3;
//   FT1.setName("Bert");
//   FT1.guardGate();
//   FT3.guardGate();
//   FT3.attack(FT1.getName());
//   FT1.takeDamage(FT1.getAD());
//   FT1.attack(FT3.getName());
//   FT3.takeDamage(FT3.getAD());
// }

int main(void) {
  FragTrap FT1;
  FragTrap FT2("Herbert");
  FragTrap FT3(FT2);

  FT1 = FT3;
  FT1.setName("Bert");

  for (int i = 0; i < 11; i++) {
    std::cout << "\n" << i << "\n";
    FT2.attack(FT1.getName());
    std::cout << "\n" << i << "\n";
    FT1.takeDamage(FT1.getAD());
    std::cout << "\n" << i << "\n";
    FT1.attack(FT2.getName());
    std::cout << "\n" << i << "\n";
    FT1.takeDamage(FT2.getAD());
	std::cout << std::endl;
  }
  FT1.highFivesGuys();
  FT2.highFivesGuys();
}