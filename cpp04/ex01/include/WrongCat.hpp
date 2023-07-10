#ifndef WRONGCAT_HPP
#define WRONGCAT_HPP
#include "WrongAnimal.hpp"
#include <iostream>
#include <new>
#include <string>

class WrongCat : public WrongAnimal {
public:
  WrongCat();
  WrongCat(const WrongCat &copy);
  WrongCat &operator=(const WrongCat &obj);
  ~WrongCat();

  // member
  void makeSound() const;
};
#endif