#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP
#include "Contact.hpp"
#include <iomanip>
#include <iostream>
#include <string>
#include <cstdlib>

class PhoneBook {
private:
  Contact Contacts[8];
  int ContactCount;
  bool CheckEmptySlot(int) const;
  int PrintAllContacts() const;
  int PrintContact(int) const;
  void PrintDiffLength(int) const;

public:
  PhoneBook();
  ~PhoneBook();
  void AddContact();
  void SearchContact();
};

#endif