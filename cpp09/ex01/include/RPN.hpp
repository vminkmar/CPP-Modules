#ifndef RPN_HPP
#define RPN_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cstdlib>

class RPN{
	private:
		std::stack<float> stack;
	public:
	RPN();
	~RPN();
	// RPN(const RPN &copy);
	// RPN &operator=(const RPN &obj);
	void calculate(std::string line);
	bool isOperator(char c);
	float calculateOperator(float first, float second, char op);
};
bool checkInput(int argc);

#endif