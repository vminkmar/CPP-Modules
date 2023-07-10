#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {

  Dog *dog = new Dog();
  dog->setIdea(0, "hallo");
  Dog *dogCopy = new Dog(*dog);
  std::cout << std::endl;
  dog->printIdea();
  dogCopy->printIdea();
  dogCopy->setIdea(0, "Hello");
  dog->printIdea();
  dogCopy->printIdea();
  std::cout << std::endl;

  delete dog;
  std::cout << std::endl;
  dogCopy->printIdea();
  std::cout << std::endl;
  delete dogCopy;

  Animal *animalArray[5];
  for (int i = 0; i < 5; i++) {
    if (i % 2 == 0)
      animalArray[i] = new Dog;
    else
      animalArray[i] = new Cat;
  }

  std::cout << std::endl;
  for (int i = 0; i < 5; i++) {
    std::cout << "Animal: " << animalArray[i]->getType() << std::endl;
    animalArray[i]->makeSound();
    std::cout << std::endl;
  }

  for (int i = 0; i < 5; i++) {
    delete animalArray[i];
  }
  return (0);
}