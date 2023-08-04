#include "ScalarConverter.hpp"

ScalarConverter::ScalarConverter() {
  floatCounter = 0;
  std::cout << "ScalarConverter Constructor called" << std::endl;
}

ScalarConverter::ScalarConverter(const ScalarConverter &copy) { *this = copy; }

ScalarConverter::~ScalarConverter() {
  std::cout << "ScalarConverter Destructor called" << std::endl;
}

ScalarConverter &ScalarConverter::operator=(const ScalarConverter &obj) {
  this->floatCounter = obj.floatCounter;
  return *this;
}

bool checkInput(int argc, char **argv) {
  if (argc != 2) {
    std::cerr << "Check number of arguments" << std::endl;
    return (false);
  }
  std::string input = argv[1];
  if (input.empty()) {
    std::cerr << "There is nothing to convert" << std::endl;
    return (false);
  }
  return (true);
}
