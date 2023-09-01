#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <iterator>
#include <new>
#include <queue>
#include <stack>
#include <string>
#include <vector>

class PmergeMe {
private:
  std::vector<int> vector;
  std::vector<int> result;
	std::vector<std::pair<int, int> > newPair;

public:
  PmergeMe();
  PmergeMe(int, int);
  ~PmergeMe();
  // PmergeMe(const PmergeMe &copy);
  // PmergeMe &operator=(const PmergeMe &obj);
  PmergeMe &argvToIntandVector(char **argv);
  void print();
	void sortVector();
	void getPairsAndSort();
	void sortPairs();
	void writeInNewVector();
	void sortBySize(size_t i, size_t n);
	int jabosthal(int n);
  class wrongInputException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

  class negativeIntException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
bool checkInput(int argc);
int getLength(char **argv);

#endif