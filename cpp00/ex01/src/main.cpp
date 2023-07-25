#include "PhoneBook.hpp"

void StartPhonebook() {
  std::cout << std::endl;
  std::cout << "\033[1;31mWelcome to your Phonebook." << std::endl;
  std::cout << "You can type in the following commands:" << std::endl;
  std::cout << "ADD: To add a new Contact." << std::endl;
  std::cout << "SEARCH: To search an existing Contact." << std::endl;
  std::cout << "EXIT: Then your Phonebook gets deleted." << std::endl;
  std::cout << std::endl;
  std::cout << "\033[1;32mWhat do you want to do?\033[1;30m" << std::endl;
}

int main() {
  Phonebook Phonebook;
  std::string input;

  while (1 && !std::cin.eof()) {
    StartPhonebook();
    std::getline(std::cin, input);
    if (input.compare("ADD") == 0)
      Phonebook.AddContact();
    else if (input.compare("SEARCH") == 0)
      Phonebook.SearchContact();
    else if (input.compare("EXIT") == 0)
      break;
    else
      std::cout << "Invalid input" << std::endl;
  }
	return (0);
}
