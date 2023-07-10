#ifndef CAT_HPP
#define CAT_HPP
#include "Animal.hpp"
#include <iostream>
#include <new>
#include <string>

class Cat : public Animal {
public:
  Cat();
  Cat(const Cat &copy);
  Cat &operator=(const Cat &obj);
  ~Cat();

  // member
  void makeSound() const;
};
#endif