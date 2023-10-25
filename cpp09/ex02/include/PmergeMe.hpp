#ifndef PMERGEME_HPP
#define PMERGEME_HPP
#include <algorithm>
#include <cstdlib>
#include <ctime>
#include <deque>
#include <exception>
#include <iostream>
#include <iterator>
#include <new>
#include <stack>
#include <string>
#include <vector>
#include <climits>

class PmergeMe {
private:
  std::vector<int> vector;
  std::vector<int> result;
  std::vector<std::pair<int, int> > newPair;
  std::deque<int> deque;
  std::deque<int> resultDeque;
  std::deque<std::pair<int, int> > newDeque;
  size_t m_lastJacob;
  clock_t m_startTime;
  clock_t m_endTime;
  int m_left;

public:
  int m_counter;
  PmergeMe();
  PmergeMe(int, int);
  ~PmergeMe();
  PmergeMe(const PmergeMe &copy);
  PmergeMe &operator=(const PmergeMe &obj);
  PmergeMe &argvToIntandVector(char **argv);
  int jabosthal(int n);
  void printResult();

  void sortPairsDeque();
  void writeInNewDeque();
  void getDeque();
  void finalSortDeque(size_t jacob);
  void sortBySizeDeque(size_t i, size_t n);
  int binarySortDeque(int first, int number);

  void sortVector(int jacob);
  void sortPairs();
  void writeInNewVector();
  void getVector();
  void finalSort(size_t jacob);
  void sortBySize(size_t i, size_t n);
  void sortByJacob();
  int binarySort(int first, int number);

  class justOneNumberException : public std::exception {
  public:
    virtual const char *what() const throw();
  };

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