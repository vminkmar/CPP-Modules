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
	size_t lastJacob;
	int left;

public:
  PmergeMe();
  PmergeMe(int, int);
  ~PmergeMe();
  // PmergeMe(const PmergeMe &copy);
  // PmergeMe &operator=(const PmergeMe &obj);
  PmergeMe &argvToIntandVector(char **argv);
  void print();
  void print1();
	void sortVector(int jacob);
	void getPairsAndSort();
	void sortPairs();
	void writeInNewVector();
	void finalSort(size_t jacob);
	void sortBySize(size_t i, size_t n);
	int jabosthal(int n);
	void sortByJacob();
	int binarySort(int lastJacob, int number);
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
size_t jacob(size_t n);

#endif