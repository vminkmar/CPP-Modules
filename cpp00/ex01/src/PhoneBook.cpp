/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   PhoneBook.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vminkmar <vminkmar@student.42heilbronn.    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/06 13:28:33 by vminkmar          #+#    #+#             */
/*   Updated: 2023/06/12 11:36:38 by vminkmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "PhoneBook.hpp"

bool IsValidNumber(const std::string &str) {
  for (size_t i = 0; i < str.length(); i++) {
    if (isdigit(str[i]) == 0)
      return false;
  }
  return true;
}

void PrintTable() {
  std::cout << std::setw(10) << std::internal << "INDEX"
            << "|" << std::setw(10) << std::internal << "First Name"
            << "|" << std::setw(10) << std::internal << "Last Name"
            << "|" << std::setw(10) << std::internal << "Nickname"
            << "|" << std::endl
            << "____________________________________________" << std::endl;
}

bool IsNotDigit(const std::string str) {
  for (size_t i = 0; i < str.size(); i++) {
    char c = str[i];
    if (!isdigit(c))
      return (true);
  }
  return (false);
}

void AddFirstName(Contact &newContact, std::string &FirstName) {
  while (true) {
    std::cout << "Enter the first name:  ";
    std::getline(std::cin, FirstName);
    if (!FirstName.empty()) {
      newContact.setFirstName(FirstName);
      break;
    } else
      std::cout << "Error! No empty input allowed!" << std::endl;
  }
}

void AddLastName(Contact &newContact, std::string &LastName) {
  while (true) {
    std::cout << "Enter the last name:  ";
    std::getline(std::cin, LastName);
    if (!LastName.empty()) {
      newContact.setLastName(LastName);
      break;
    } else
      std::cout << "Error! No empty input allowed!" << std::endl;
  }
}

void AddNickname(Contact &newContact, std::string &Nickname) {
  while (true) {
    std::cout << "Enter the nickname:  ";
    std::getline(std::cin, Nickname);
    if (!Nickname.empty()) {
      newContact.setNickname(Nickname);
      break;
    } else
      std::cout << "Error! No empty input allowed!" << std::endl;
  }
}

void AddPhoneNumber(Contact &newContact, std::string &PhoneNumber) {
  while (true) {
    std::cout << "Enter the phone number:  ";
    std::getline(std::cin, PhoneNumber);
    if (IsValidNumber(PhoneNumber) == false)
      std::cout << "Error! Enter a number." << std::endl;
    else if (!PhoneNumber.empty()) {
      newContact.setPhoneNumber(PhoneNumber);
      break;
    } else
      std::cout << "Error! No empty input allowed!" << std::endl;
  }
}

void AddDarkestSecret(Contact &newContact, std::string &DarkestSecret) {
  while (true) {
    std::cout << "Enter a dark secret:  ";
    std::getline(std::cin, DarkestSecret);
    if (!DarkestSecret.empty()) {
      newContact.setDarkestSecret(DarkestSecret);
      break;
    } else
      std::cout << "Error! No empty input allowed!" << std::endl;
  }
}

bool Phonebook::CheckEmptySlot(int i) const {
  if (Contacts[i].getFirstName().empty())
    return (true);
  return (false);
}

void Phonebook::PrintDiffLength(int i) const {
  std::cout << std::setw(10) << std::right << i << "|" << std::setw(10);
  if (Contacts[i].getFirstName().size() > 10)
    std::cout << std::right << Contacts[i].getFirstName().substr(0, 9) << ".|";
  else
    std::cout << std::setw(10) << std::right << Contacts[i].getFirstName()
              << "|";
  if (Contacts[i].getLastName().size() > 10)
    std::cout << std::setw(10) << std::right
              << Contacts[i].getLastName().substr(0, 9) << ".|";
  else
    std::cout << std::setw(10) << std::right << Contacts[i].getLastName()
              << "|";
  if (Contacts[i].getNickname().size() > 10)
    std::cout << std::setw(10) << std::right
              << Contacts[i].getNickname().substr(0, 9) << ".|";
  else
    std::cout << std::setw(10) << std::right << Contacts[i].getNickname()
              << "|";
}

int Phonebook::PrintAllContacts() const {
  if (Contacts[0].getFirstName().empty()) {
    std::cout << "The Phonebook is empty" << std::endl;
    return (1);
  }
  PrintTable();
  for (int i = 0; i < 8; i++) {
    if (Contacts[i].getFirstName().empty())
      return (0);
    else {
      PrintDiffLength(i);
      std::cout << std::endl;
    }
  }
  return (0);
}

int Phonebook::PrintContact(int index) const {
  if (Contacts[index].getFirstName().empty()) {
    std::cout << "There is no Contact with that index";
    return (1);
  }
  std::cout << std::endl;
  std::cout << "First Name: " << Contacts[index].getFirstName() << std::endl;
  std::cout << "Last Name: " << Contacts[index].getLastName() << std::endl;
  std::cout << "Nickname: " << Contacts[index].getNickname() << std::endl;
  std::cout << "Phone Number: " << Contacts[index].getPhoneNumber()
            << std::endl;
  std::cout << "Dark Secret: " << Contacts[index].getDarkestSecret()
            << std::endl;
  return (0);
}

void Phonebook::SearchContact() {
  std::string input;
  int digit;
  if (PrintAllContacts() == 1)
    return;
  std::cout << std::endl;
  std::cout
      << "If you want to search for a special Contact then enter the Index: ";
  std::getline(std::cin, input);
  if (input.empty())	
    return;
  if (IsNotDigit(input) == true) {
    std::cout << "Invalid input" << std::endl;
    return;
  } else {
    digit = atoi(input.c_str());
	std::cout << digit << std::endl << std::endl;
    if ((digit < 0 || digit > 8) && CheckEmptySlot(digit) == true)
      std::cout << "Invalid input";
    if (PrintContact(digit) == 1)
      return;
  }
}

void Phonebook::AddContact() {
  Contact newContact;
  std::string FirstName, LastName, Nickname, PhoneNumber, DarkestSecret;
  AddFirstName(newContact, FirstName);
  AddLastName(newContact, LastName);
  AddNickname(newContact, Nickname);
  AddPhoneNumber(newContact, PhoneNumber);
  AddDarkestSecret(newContact, DarkestSecret);
  if (ContactCount == 8)
    ContactCount = 0;
  if (ContactCount < 8) {
    this->Contacts[ContactCount] = newContact;
    ContactCount++;
  }
}
