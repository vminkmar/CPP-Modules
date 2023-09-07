#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <exception>
#include <iostream>
#include <iterator>
#include <new>
#include <deque>
#include <stack>
#include <string>
#include <vector>

class PmergeMe {
private:
  std::vector<int> vector;
  std::vector<int> result;
  std::vector<std::pair<int, int> > newPair;
  std::deque<int> deque;
  std::deque<int> resultDeque;
  std::deque<std::pair<int, int> > newDeque;
  size_t lastJacob;
  clock_t startTime;
  clock_t endTime;
  int left;

public:
  PmergeMe();
  PmergeMe(int, int);
  ~PmergeMe();
  // PmergeMe(const PmergeMe &copy);
  // PmergeMe &operator=(const PmergeMe &obj);
  PmergeMe &argvToIntandVector(char **argv, int i);
  void print();
  void printResult();
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

  class intTooBigException : public std::exception {
  public:
    virtual const char *what() const throw();
  };
};
bool checkInput(int argc);
int getLength(char **argv);
size_t jacob(size_t n);

#endif