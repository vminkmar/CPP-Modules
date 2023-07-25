#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string Contact::getFirstName() const { return this->FirstName; }

std::string Contact::getLastName() const { return this->LastName; }

std::string Contact::getNickname() const { return this->Nickname; }

std::string Contact::getPhoneNumber() const { return this->PhoneNumber; }

std::string Contact::getDarkestSecret() const { return this->DarkestSecret; }

void Contact::setFirstName(const std::string &FirstName) {
  this->FirstName = FirstName;
}

void Contact::setLastName(const std::string &LastName) {
  this->LastName = LastName;
}

void Contact::setNickname(const std::string &Nickname) {
  this->Nickname = Nickname;
}

void Contact::setPhoneNumber(const std::string &PhoneNumber) {
  this->PhoneNumber = PhoneNumber;
}

void Contact::setDarkestSecret(const std::string &DarkestSecret) {
  this->DarkestSecret = DarkestSecret;
}
