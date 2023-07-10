#include "MateriaSource.hpp"
#include "AMateria.hpp"

MateriaSource::MateriaSource() {
  std::cout << "MateriaSource Default Constructor called" << std::endl;
  for (int i = 0; i < 4; i++) {
    m_memory[i] = NULL;
  }
}

MateriaSource::MateriaSource(const MateriaSource &copy) {
  int i = 0;

  while (i < 4) {
    if (m_memory[i] != NULL) {
      delete m_memory[i];
    }
    this->m_memory[i] = copy.m_memory[i]->clone();
  }
}

MateriaSource &MateriaSource::operator=(const MateriaSource &obj) {
  for (int i = 0; i < 4; i++) {
    this->m_memory[i] = obj.m_memory[i];
  }
  return *this;
}

MateriaSource::~MateriaSource() {
  std::cout << "MateriaSource Destructor called" << std::endl;
  for (int i = 0; i < 4; i++) {
    if (m_memory[i] != NULL) {
      delete m_memory[i];
    }
  }
}

void MateriaSource::learnMateria(AMateria *m) {
  int i = 0;

  while (i <= 4 && m_memory[i] != NULL) {
    if (i >= 4) {
      std::cout << "Memory is full" << std::endl;
      return;
    }
    i++;
  }
  m_memory[i] = m;
  std::cout << "Added Materia to memory" << std::endl;
}

AMateria *MateriaSource::createMateria(std::string const &type) {
  int i = 0;

  while (i < 4 && m_memory[i] != NULL) {
    if (m_memory[i]->getType() == type)
      return (m_memory[i]->clone());
    i++;
  }
  return (NULL);
}
