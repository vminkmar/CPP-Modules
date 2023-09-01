#include "FragTrap.hpp"

int main(void) {
  FragTrap FT1;
  FragTrap FT2("Herbert");
  FragTrap FT3(FT2);

  FT1 = FT3;
  FT1.setName("Bert");

  for (int i = 0; i < 11; i++) {
    std::cout << "\n" << "Rounds of attack " << i << "\n";
    FT2.attack(FT1.getName());
    FT1.takeDamage(FT1.getAD());
    FT1.attack(FT2.getName());
    FT1.takeDamage(FT2.getAD());
    std::cout << std::endl;
  }
	FT2.setEP(0);
	std::cout << "EP FT2 " << FT2.getEP() <<std::endl;
	FT2.attack(FT1.getName());
  std::cout << std::endl;
  FT1.highFivesGuys();
  FT2.highFivesGuys();
  std::cout << std::endl;
}