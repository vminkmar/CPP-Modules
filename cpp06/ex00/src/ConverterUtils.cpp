#include "ScalarConverter.hpp"

bool ScalarConverter::isFloat(std::string input) {
  std::istringstream iss(input);
  float f;
  iss >> std::noskipws >> f;
  if (iss.eof() && !iss.fail())
    return (true);
  return (false);
}

bool ScalarConverter::isDouble(std::string input) {
  std::istringstream iss(input);
  double d;
  iss >> std::noskipws >> d;
  if (iss.eof() && !iss.fail())
    return (true);
  return (false);
}

bool ScalarConverter::isInt(std::string input) {
  std::istringstream iss(input);
  int i;
  iss >> std::noskipws >> i;
  if (iss.eof() && !iss.fail())
    return (true);
  return (false);
}

bool ScalarConverter::checkForFloat(std::string input) {
  size_t i = 0;
  if (input[0] == '-')
    i++;
  while (i < input.find('.')) {
    if (!isdigit(input[i]))
      return (false);
    i++;
  }
  i++;
  int counter = 0;
  while (i < input.size()) {
    if (isdigit(input[i]))
      i++;
    else if (input[i] == 'f') {
      counter++;
    } else
      return (false);
    i++;
  }
  if (counter != 1)
    return (false);

  return (true);
}

bool ScalarConverter::checkForDouble(std::string input) {
  size_t i = 0;
  if (input[0] == '-')
    i++;
  while (i < input.find('.')) {
    if (!isdigit(input[i]))
      return (false);
    i++;
  }
  i++;
  while (i < input.length()) {
    if (!isdigit(input[i]))
      return (false);
    i++;
  }
  return (true);
}

bool ScalarConverter::checkforPoint(std::string input) {
  size_t pos = input.find('.');
  if (pos == std::string::npos)
    return (false);
  return (true);
}

bool ScalarConverter::checkForNanorInf(std::string input){
	if(input == "nan" || input == "inf" || input == "-inf" || input == "-nan" || input == "-nanf")
		return (true);
	return (false);
}
