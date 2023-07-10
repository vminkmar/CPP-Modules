#include "MateriaList.hpp"

MateriaList::MateriaList()  { 
	std::cout << "MateriaList Constructor called" << std::endl; }

MateriaList::MateriaList(const MateriaList &copy) {
  std::cout << "MateriaList Copy Constructor called" << std::endl;
  *this = copy;
  return;
}

MateriaList &MateriaList::operator=(const MateriaList &obj) {
  if(this == &obj)
		return *this;
	Loot = obj.Loot;
	next = obj.next;
	return *this;
}

MateriaList::~MateriaList() { std::cout << "MateriaList Destructor called" << std::endl; }



MateriaList *MateriaList::createList(){
	MateriaList *node = NULL;
	next = NULL;
	return node;
}

void MateriaList::addNode(AMateria *materia)
{
	MateriaList *newNode = new MateriaList();
	newNode->Loot = materia;
	newNode->next = NULL;

	MateriaList *tmp = this;
	while(tmp->next != NULL)
	{
		tmp = tmp->next;
	}
	tmp->next = newNode;
}