#ifndef ANIMAL_HPP
#define ANIMAL_HPP
#include <iostream>
#include <new>
#include <string>

class Animal {
protected:
  std::string m_type;

public:
  Animal();
  Animal(const Animal &copy);
  Animal &operator=(const Animal &obj);
  virtual ~Animal();

  // getter
  std::string getType() const;

  // member
  virtual void makeSound() const;
};
#endif