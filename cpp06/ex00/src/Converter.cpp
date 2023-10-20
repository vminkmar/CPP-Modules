#include "ScalarConverter.hpp"

void ScalarConverter::convertChar(char c) {
  std::cout << "float  |			" << static_cast<float>(c)
            << ".0f" << std::endl;
  std::cout << "int    |			" << static_cast<int>(c)
            << std::endl;
  std::cout << "char   |			" << c << std::endl;
  std::cout << "double |			" << static_cast<double>(c)
            << ".0" << std::endl;
}

void ScalarConverter::convertInt(int i) {
  std::cout << "float  |			" << static_cast<float>(i)
            << ".0f" << std::endl;
  if (i > INT_MAX || i < INT_MIN)
    std::cout << "int    |			not printable" << std::endl;
  else
    std::cout << "int    |			" << static_cast<int>(i)
              << std::endl;
  if (isprint(i) == true)
    std::cout << "char   |			" << static_cast<char>(i)
              << std::endl;
  else
    std::cout << "char   |			not printable" << std::endl;
  std::cout << "double |			" << static_cast<double>(i)
            << ".0" << std::endl;
}

void ScalarConverter::convertFloat(float f, std::string input) {
  std::cout << "float  |			" << f << "f" << std::endl;
  if (f > INT_MAX || f < INT_MIN || input == "nanf")
    std::cout << "int    |			not printable" << std::endl;
  else
    std::cout << "int    |			" << static_cast<int>(f)
              << std::endl;
  if (f < 0 && isprint(f))
    std::cout << "char   |			" << static_cast<char>(f)
              << std::endl;
  else
    std::cout << "char   |			not printable" << std::endl;
  std::cout << "double |			" << static_cast<double>(f)
            << std::endl;
}

void ScalarConverter::convertDouble(double d, std::string input) {
  std::cout << "float  |			" << static_cast<float>(d)
            << "f" << std::endl;
  if (d > INT_MAX || d < INT_MIN || input == "nan")
    std::cout << "int    |			not printable" << std::endl;
  else
    std::cout << "int    |			" << static_cast<int>(d)
              << std::endl;
  if (d < 0 && isprint(d))
    std::cout << "char   |			" << static_cast<char>(d)
              << std::endl;
  else
    std::cout << "char   |			not printable" << std::endl;
  std::cout << "double |			" << d << std::endl;
}

bool ScalarConverter::checkForPseudoLiterals(std::string input) {
  if (input == "inff") {
    std::cout << "float  |			inff" << std::endl;
    std::cout << "int    |			not printable" << std::endl;
    std::cout << "char   |			not printable" << std::endl;
    std::cout << "double |			inf" << std::endl;
    return (true);
  } else if (input == "-inff") {
    std::cout << "float  |			-inff" << std::endl;
    std::cout << "int    |			not printable" << std::endl;
    std::cout << "char   |			not printable" << std::endl;
    std::cout << "double |			-inf" << std::endl;
    return (true);
  } else if (input == "nanf") {
    std::cout << "float  |			nanf" << std::endl;
    std::cout << "int    |			not printable" << std::endl;
    std::cout << "char   |			not printable" << std::endl;
    std::cout << "double |			nan" << std::endl;
    return (true);
  }
  return (false);
}

void ScalarConverter::Convert(std::string input) {
  if (checkForPseudoLiterals(input) == true)
    return;
  char *ptr;
  if (input.length() == 1) {
    char c = input[0];
    ScalarConverter::convertChar(c);
    return;
  } else if (ScalarConverter::isInt(input) == true) {
    long int i = strtol(input.c_str(), &ptr, 10);
    if (*ptr == '\0') {
      ScalarConverter::convertInt(i);
      return;
    }
  } else if (checkForFloat(input) == true && checkforPoint(input) == true) {
    int pos;
    pos = input.find('f');
    input.erase(pos);
    double f = strtof(input.c_str(), &ptr);
    if (*ptr == '\0') {
      ScalarConverter::convertFloat(f, input);
      return;
    }
  } else if ((checkForDouble(input) == true && checkforPoint(input) == true) ||
             checkForNanorInf(input) == true) {
    double d = strtod(input.c_str(), &ptr);
    if (*ptr == '\0') {
      ScalarConverter::convertDouble(d, input);
      return;
    }
  }
  std::cerr << "Given value can't be converted" << std::endl;
}