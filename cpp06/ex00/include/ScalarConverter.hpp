#ifndef SCALARCONVERTER_HPP
#define SCALARCONVERTER_HPP
#include <string>
#include <iostream>
#include <sstream>
#include <stdlib.h>
#include <stdio.h>

class ScalarConverter{
	private:

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
	static void convertFloat(float f);
	static void convertDouble(double d);
	static bool checkForPseudoLiterals(std::string input);
};
bool checkInput(int argc, char **argv);

#endif