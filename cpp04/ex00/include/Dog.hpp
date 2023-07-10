#ifndef DOG_HPP
#define DOG_HPP
#include "Animal.hpp"
#include <iostream>
#include <new>
#include <string>

class Dog : public Animal {
public:
  Dog();
  Dog(const Dog &copy);
  Dog &operator=(const Dog &obj);
  ~Dog();

  // member
  void makeSound() const;
};
#endif