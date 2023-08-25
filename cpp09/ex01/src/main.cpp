#include "RPN.hpp"



int main(int argc, char *argv[]){
	RPN numbers;
	if(checkInput(argc) == false)
		return (1);
	std::string line = argv[1];
	numbers.calculate(line);
}