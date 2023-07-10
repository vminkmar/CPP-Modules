#include "Cat.hpp"
#include "Dog.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
  const Animal *animal = new Animal();
  const Animal *dog = new Dog();
  const Animal *cat = new Cat();
  const WrongAnimal *wrongAnimal = new WrongAnimal();
  const WrongAnimal *wrongCat = new WrongCat();
  const WrongAnimal *wrongDog = new WrongDog();
  std::cout << cat->getType() << " " << std::endl;
  std::cout << dog->getType() << " " << std::endl;
  std::cout << wrongDog->getType() << " " << std::endl;
  std::cout << wrongCat->getType() << " " << std::endl;
  cat->makeSound();
  dog->makeSound();
  animal->makeSound();
  wrongAnimal->makeSound();
  wrongCat->makeSound(); 
  wrongDog->makeSound(); 
  delete animal;
  delete dog;
  delete cat;
  delete wrongCat;
  delete wrongDog;
  delete wrongAnimal;
  return (0);
}