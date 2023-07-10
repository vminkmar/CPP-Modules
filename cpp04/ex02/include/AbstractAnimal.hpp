#ifndef AbstractAnimal_HPP
#define AbstractAnimal_HPP
#include <iostream>
#include <new>
#include <string>

class AbstractAnimal {
protected:
  std::string m_type;

public:
  AbstractAnimal();
  AbstractAnimal(const AbstractAnimal &copy);
  AbstractAnimal &operator=(const AbstractAnimal &obj);
  virtual ~AbstractAnimal();

  // getter
  std::string getType() const;

  // member
  virtual void makeSound() = 0;
};
#endif