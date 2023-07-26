#include <cctype>
#include <iostream>
#include <string>

int main(int argc, char **argv) {
  if (argc == 1)
    std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
  else {
    for (int outer = 1; outer < argc; outer++) {
      std::string argvString = argv[outer];
      for (int inner = 0; (size_t)inner < argvString.length(); inner++) {
        argvString[inner] = std::toupper(argvString[inner]);
      }
      std::cout << argvString;
    }
    std::cout << std::endl;
  }
}