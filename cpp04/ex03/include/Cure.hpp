#ifndef CURE_HPP
#define CURE_HPP
#include <iostream>
#include <new>
#include <string>
#include "AMateria.hpp"
class ICharacter;

class Cure : public AMateria {
public:
  Cure();
  Cure(const Cure &copy);
  Cure &operator=(const Cure &obj);
  virtual ~Cure();

  std::string const &getType() const; // Returns the materia type
  Cure *clone() const;
  void use(ICharacter &target);
};

#endif