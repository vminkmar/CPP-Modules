#ifndef MateriaSource_HPP
#define MateriaSource_HPP
#include "AMateria.hpp"
#include "IMateriaSource.hpp"
#include <iostream>
#include <new>
#include <string>

class MateriaSource : public IMateriaSource {
private:
  AMateria *m_memory[4];

public:
  MateriaSource();
  MateriaSource(const MateriaSource &copy);
  MateriaSource &operator=(const MateriaSource &obj);
  ~MateriaSource();
  void learnMateria(AMateria *m);
  AMateria *createMateria(std::string const &type);
};
#endif