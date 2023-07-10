#include "Brain.hpp"
#include "Cat.hpp"
#include "Dog.hpp"
#include "AbstractAnimal.hpp"
#include "WrongCat.hpp"
#include "WrongDog.hpp"

int main() {
	AbstractAnimal *animal = new Cat();
	AbstractAnimal *animal1 = new Dog();

	animal->makeSound();
	animal1->makeSound();
	

	delete animal;
	delete animal1;
}