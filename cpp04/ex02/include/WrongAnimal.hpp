#ifndef WRONGANIMAL_HPP
#define WRONGANIMAL_HPP
#include <iostream>
#include <new>
#include <string>

class WrongAnimal {
protected:
  std::string m_type;

public:
  WrongAnimal();
  WrongAnimal(const WrongAnimal &copy);
  WrongAnimal &operator=(const WrongAnimal &obj);
  virtual ~WrongAnimal();

  // getter
  std::string getType() const;

  // member
  virtual void makeSound() const;
};
#endif