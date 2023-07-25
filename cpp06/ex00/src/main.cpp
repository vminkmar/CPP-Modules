#include "ScalarConverter.hpp"

int main(int argc, char **argv){
	if (checkInput(argc, argv) == false)
		return (1);
	std::string input = argv[1];
	ScalarConverter convertValue;
	convertValue.Convert(input);
} //220.00 is not 220