#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <iterator>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>
#include <new>

class PmergeMe{
	private:
		std::vector<int> vector;
	public:
	PmergeMe();
	~PmergeMe();
	// PmergeMe(const PmergeMe &copy);
	// PmergeMe &operator=(const PmergeMe &obj);
	PmergeMe &argvToIntandVector(char **argv);
	void print();
};
bool checkInput(int argc);
int getLength(char **argv);


#endif