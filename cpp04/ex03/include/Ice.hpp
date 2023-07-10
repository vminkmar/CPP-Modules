#ifndef ICE_HPP
#define ICE_HPP
#include <iostream>
#include <new>
#include <string>
#include "AMateria.hpp"
class ICharacter;

class Ice : public AMateria {
public:
  Ice();
  Ice(const Ice &copy);
  Ice &operator=(const Ice &obj);
  virtual ~Ice();

  std::string const &getType() const; // Returns the materia type
  Ice *clone() const;
  void use(ICharacter &target);
};

#endif