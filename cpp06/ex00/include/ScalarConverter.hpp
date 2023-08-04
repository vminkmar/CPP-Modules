#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <iostream>
#include <sstream>
#include <stdio.h>
#include <stdlib.h>
#include <string>
#include <limits.h>

class ScalarConverter {
private:
  int floatCounter;

public:
  ScalarConverter();
  ScalarConverter(std::string input);
  ScalarConverter(const ScalarConverter &copy);
  ScalarConverter &operator=(const ScalarConverter &);
  ~ScalarConverter();

  // memberFunctions
  static void Convert(std::string input);
  static bool isFloat(std::string input);
  static bool isDouble(std::string input);
  static bool isInt(std::string input);
  static bool isChar(std::string input);
  static bool checkForFloat(std::string input);
  static void convertChar(char c);
  static void convertInt(int i);
  static void convertFloat(float f, std::string input);
  static void convertDouble(double d, std::string input);
  static bool checkForPseudoLiterals(std::string input);
	static bool checkforPoint(std::string input);
	static bool checkForDouble(std::string input);
	static bool checkForNanorInf(std::string input);
};
bool checkInput(int argc, char **argv);

#endif