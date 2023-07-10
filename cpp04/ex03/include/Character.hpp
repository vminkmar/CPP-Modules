#ifndef CHARACTER_HPP
#define CHARACTER_HPP
#include "ICharacter.hpp"
#include "AMateria.hpp"
#include "MateriaList.hpp"

class Character : public ICharacter
{
protected:
AMateria *m_inventory[4];
std::string m_name;
MateriaList *m_materiaList;

public:
Character(std::string const name);
Character(const Character &copy);
Character &operator=(const Character &obj);
~Character();


AMateria *createLinkedList();
AMateria *appendLinkedList();
std::string const & getName() const;
void equip(AMateria* m);
void unequip(int idx);
void use(int idx, ICharacter& target);
};

#endif