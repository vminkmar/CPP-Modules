#include "RPN.hpp"

RPN::RPN() {}

RPN::~RPN() {}

// RPN::RPN(const RPN &copy){

// }

// RPN:RPN &operator=(const RPN &obj){

// }

bool checkInput(int argc) {
  if (argc != 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    return false;
  }
	return true;
}


bool RPN::isOperator(char c) {
  if (c == '+' || c == '-' || c == '*' || c == '/')
    return true;
  return false;
}

float RPN::calculateOperator(float first, float second, char op) {
  if (op == '+')
    return first + second;
  else if (op == '-')
    return first - second;
  else if (op == '*')
    return first * second;
  else
    return first / second;
}

void RPN::calculate(std::string line) {
  size_t i = 0;

  float f;
  if (isOperator(line[i])) {
    std::cout << "No operators first" << std::endl;
    return;
  }
  while (i < line.size()) {
    if (line[i] == ' ') {
      if (line[i % 2] != ' ') {
        std::cout << "Input Error" << std::endl;
       return;
      }
      i++;
      continue;
    }
    if (isdigit(line[i])) {
      char *ptr;
      char tmp[2];
      tmp[0] = line[i];
      tmp[1] = '\0';
      f = strtof(tmp, &ptr);
      if (*ptr != '\0') {
        std::cout << "Input is not a float" << std::endl;
        return;
      }
      stack.push(f);
    } else if (isOperator(line[i])) {
			if(stack.size() < 2){
				if(stack.size() == 1)
					stack.pop();
				std::cout << "Input Error" << std::endl;
				return;
			}
      char op = line[i];
      float second = stack.top();
      stack.pop();
      float first = stack.top();
      stack.pop();
      stack.push(calculateOperator(first, second, op));
    } else {
      std::cout << "There is an input error" << std::endl;
      return;
    }
    i++;
  }
  std::cout << stack.top() << std::endl;
  stack.pop();
}