#ifndef MATERIALIST_HPP
#define MATERIALIST_HPP
#include "AMateria.hpp"
#include <iostream>
#include <new>
#include <string>
class AMateria;

class MateriaList {

public:
  MateriaList();
  MateriaList(const MateriaList &copy);
  MateriaList &operator=(const MateriaList &obj);
  ~MateriaList();

	AMateria *Loot;
	MateriaList *next;
	MateriaList *createList();
	void addNode(AMateria *materia);
};
#endif