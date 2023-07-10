#include "Character.hpp"

Character::Character(std::string const name) : m_name(name) {
  for (int i = 0; i < 4; i++) {
    m_inventory[i] = NULL;
  }
	m_materiaList = new MateriaList();
	m_materiaList->createList();
  std::cout << "Character Constructor called" << std::endl;
}

Character::Character(const Character &copy) {
  std::cout << "Character Copy Constructor called" << std::endl;
  m_name = copy.getName();
}

Character &Character::operator=(const Character &obj) {
  m_name = obj.getName();
  for (int i = 0; i < 4; i++) {
    m_inventory[i] = NULL;
  }
  return *this;
}

Character::~Character() {
  for (int i = 0; i < 4; i++) {
    if (m_inventory[i] != NULL) {
      delete m_inventory[i];
    }
  }
	MateriaList *current = m_materiaList;
	while(current != NULL){
		MateriaList *tmp = current;
		current = current->next;
		delete tmp;
	}
}

std::string const &Character::getName() const { return m_name; }

void Character::equip(AMateria *m) {
  if (m == NULL) {
    std::cout << "There is no Materia to put it into inventory" << std::endl;
    return;
  }
  int i = 0;
  while (i <= 4 && m_inventory[i] != NULL) {
    if (i == 4) {
      std::cout << "Inventory is full" << std::endl;
      return;
    }
    i++;
  }
  m_inventory[i] = m;
  std::cout << "Added Materia to inventory" << std::endl;
}

void Character::use(int idx, ICharacter &target) {
  if (m_inventory[idx] == NULL) {
    std::cout << "There is no Materia to use" << std::endl;
    return;
  }
  m_inventory[idx]->use(target);
}

void Character::unequip(int idx) {
  if (idx > 3 || m_inventory[idx] == NULL) {
    std::cout << "There is no Materia to unequip" << std::endl;
    return;
  }
	m_materiaList->addNode(m_inventory[idx]);
	m_inventory[idx] = NULL;
}
