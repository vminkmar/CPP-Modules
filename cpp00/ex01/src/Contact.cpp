#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getFirstName() const { return this->FirstName; }

void Contact::setFirstName(std::string &FirstName) {
  this->FirstName = FirstName;
}

std::string Contact::getLastName() const { return this->LastName; }

void Contact::setLastName(std::string &LastName) {
  this->LastName = LastName;
}
std::string Contact::getNickname() const { return this->Nickname; }

void Contact::setNickname(std::string &Nickname) {
  this->Nickname = Nickname;
}
std::string Contact::getPhoneNumber() const { return this->PhoneNumber; }

void Contact::setPhoneNumber(std::string &PhoneNumber) {
  this->PhoneNumber = PhoneNumber;
}
std::string Contact::getDarkestSecret() const { return this->DarkestSecret; }

void Contact::setDarkestSecret(std::string &DarkestSecret) {
  this->DarkestSecret = DarkestSecret;
}
