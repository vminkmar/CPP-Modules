#ifndef CONTACT_HPP
#define CONTACT_HPP
#include <iostream>
#include <string>
#include <iomanip>

class Contact {
private:
  std::string FirstName;
  std::string LastName;
  std::string Nickname;
  std::string PhoneNumber;
  std::string DarkestSecret;

public:
  Contact();
  ~Contact();
  Contact(const std::string &FirstName, const std::string &LastName,
          const std::string &Nickname, const std::string &PhoneNumber,
          const std::string &DarkestSecret);

  std::string getFirstName() const;
  std::string getLastName() const; 
  std::string getDarkestSecret() const;	
  std::string getNickname() const;
  std::string getPhoneNumber() const;
  void setFirstName(const std::string &FirstName);
  void setLastName(const std::string &LastName);
  void setNickname(const std::string &Nickname);
  void setPhoneNumber(const std::string &PhoneNumber);
  void setDarkestSecret(const std::string &DarkestSecret);
  bool isEmpty() const;
};

#endif