#ifndef AMATERIA_HPP
#define AMATERIA_HPP
#include <iostream>
#include <new>
#include <string>
#include "ICharacter.hpp"
#include "MateriaList.hpp"

class ICharacter;

class AMateria {
protected:
  std::string m_type;

public:
	AMateria();
  AMateria(std::string const &type);
  AMateria(const AMateria &copy);
  AMateria &operator=(const AMateria &obj);
  virtual ~AMateria();

  // getter
  std::string getType();

  // functions
  std::string const &getType() const; // Returns the materia type
  virtual AMateria *clone() const = 0;
  virtual void use(ICharacter &target);
};

#endif