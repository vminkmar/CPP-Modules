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
    if (isdigit(argv[1][end]) || argv[1][end] == '-') {
      while (isdigit(argv[1][end]) || argv[1][end] == '-') {
        if (argv[1][end + 1] == ' ' || argv[1][end + 1] == '\0')
          tmp = string.substr(start, end + 1);
        end++;
      }
    } else if (argv[1][end] == ' ') {
      end++;
      start = end;
      continue;
    } else {
      throw wrongInputException();
    }
    number = atoi(tmp.c_str());
    if (number < 0)
      throw negativeIntException();
    vector.push_back(number);
  }
  return *this;
}

void PmergeMe::print() {
  // for (std::vector<std::pair<int, int> >::iterator it = newPair.begin();
  //      it != newPair.end(); ++it) {
  //   std::cout << it->first << "		" << it->second << std::endl;
  // }
  for (std::vector<int>::iterator it = result.begin(); it != result.end();
       ++it) {
    std::cout << *it << std::endl;
  }
}

void PmergeMe::sortVector() {}

void PmergeMe::sortBySize(size_t i, size_t n) {
  int value = newPair[i].second;
  int j = i;
  while (j > 0 && newPair[j - 1].second > value) {
    newPair[j].second = newPair[j - 1].second;
    j--;
  }
  newPair[j].second = value;
  if (i + 1 <= n)
    sortBySize(i + 1, n);
}

void PmergeMe::writeInNewVector() {
  for (size_t i = 0; i < newPair.size(); i++)
    result.push_back(newPair[i].second);
}

void PmergeMe::sortPairs() {
  for (size_t i = 0; i < newPair.size(); i++) {
    if (newPair[i].first > newPair[i].second)
      std::swap(newPair[i].first, newPair[i].second);
  }
}

int PmergeMe::jabosthal(int n) {
	  if(n == 0)
			return 0;
		if(n == 1)
			return 1;
		return jabosthal(n - 1) + 2 * jabosthal(n - 2);
}

void PmergeMe::getPairsAndSort() {
  size_t size;
  if (vector.size() % 2 != 0)
    size = vector.size() - 1;
  else
    size = vector.size();
  for (size_t i = 0; i < size - 1; i += 2) {
    newPair.push_back(std::make_pair(vector[i], vector[i + 1]));
  }
  sortPairs();
  sortBySize(0, newPair.size() - 1);
  writeInNewVector();
	
}

const char *PmergeMe::wrongInputException::what() const throw() {
  return "Wrong Input";
}

const char *PmergeMe::negativeIntException::what() const throw() {
  return "Negative Ints as Input";
}

bool checkInput(int argc) {
  if (argc < 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    return false;
  }
  return true;
}
