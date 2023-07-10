#ifndef WRONGDOG_HPP
#define WRONGDOG_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <new>
#include <string>

class WrongDog : public WrongAnimal {
  public:
  WrongDog();
  WrongDog(const WrongDog &copy);
  WrongDog &operator=(const WrongDog &obj);
  ~WrongDog();

  // member
  void makeSound() const;
};
#endif