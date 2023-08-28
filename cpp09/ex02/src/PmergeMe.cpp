#include "PmergeMe.hpp"

PmergeMe::PmergeMe() {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::argvToIntandVector(char **argv) {
	int start = 0;
  int end = 0;
	int number;
	std::string tmp;
	std::string string = argv[1];
  while (argv[1][end] != '\0') {
		if(isdigit(argv[1][end]) || argv[1][end] == '-'){
			while(isdigit(argv[1][end]) || argv[1][end] == '-')
			{
				if(argv[1][end + 1] == ' ' || argv[1][end + 1] == '\0')
					tmp = string.substr(start, end + 1);
					end++;
			}
			}
		else if(argv[1][end] == ' '){
			end++;
			start = end;
			continue;
		}
		else{
			std::cout << "wrong input" << std::endl;
			exit (1);
		}
		number = atoi(tmp.c_str());
		if(number < 0)
		{
			std::cout << "Error: negative number" << std::endl;
			exit(1);
		}
		vector.push_back(number);
  }
	return *this;
}

void PmergeMe::print() {
    for (std::vector<int>::iterator it = vector.begin(); it != vector.end(); ++it) {
        std::cout << *it << std::endl;
    }
}



bool checkInput(int argc) {
  if (argc < 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    return false;
  }
  return true;
}
