#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <iostream>
#include <string>
#include <algorithm>
#include <stack>
#include <cstdlib>
#include <queue>
#include <vector>

class PmergeMe{
	private:
		std::vector<int> vector;
	public:
	PmergeMe();
	~PmergeMe();
	// PmergeMe(const PmergeMe &copy);
	// PmergeMe &operator=(const PmergeMe &obj);
};
bool checkInput(int argc);

#endif