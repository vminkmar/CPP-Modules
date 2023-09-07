#include "PmergeMe.hpp"

PmergeMe::PmergeMe() : lastJacob(0), startTime(0), endTime(0), left(-1) {}

PmergeMe::~PmergeMe() {}

PmergeMe &PmergeMe::argvToIntandVector(char **argv, int i) {
  int arg = 1;
  int start = 0;
  int end = 0;
  long number;
  std::string tmp;
  while (argv[arg] != NULL) {
    end = 0;
    while (argv[arg][end] != '\0') {
      std::string string = argv[arg];
      if (isdigit(argv[arg][end]) || argv[arg][end] == '-') {
        while (isdigit(argv[arg][end]) || argv[arg][end] == '-') {
          if (string.size() == 1)
            tmp = string;
          else if (argv[arg][end + 1] == ' ' || argv[arg][end + 1] == '\0')
            tmp = string.substr(start, end + 1);
          end++;
        }
      } else if (argv[arg][end] == ' ') {
        end++;
        start = end;
        continue;
      } else {
        throw wrongInputException();
      }
      number = atol(tmp.c_str());
      if (number < 0)
        throw negativeIntException();
			if (number > INT_MAX)
				throw intTooBigException();
      startTime = clock();
			if(i == 0)
      	vector.push_back(number);
			else
				deque.push_back(number);
    }
    arg++;
  }
  return *this;
}

void PmergeMe::print() {
  for (std::vector<std::pair<int, int> >::iterator it = newPair.begin();
       it != newPair.end(); ++it) {
    std::cout << it->first << "		" << it->second << std::endl;
  }
  std::cout << std::endl;
  std::cout << std::endl;
  std::cout << std::endl;
  // for (std::vector<int>::iterator it = result.begin(); it != result.end();
  //      ++it) {
  //   std::cout << *it << std::endl;
  // }
}
void PmergeMe::printResult() {
  endTime = clock();
  float elapsedTime = static_cast<float>(endTime - startTime) / CLOCKS_PER_SEC * 1000000;
  std::cout << "Before: ";
  for (std::vector<int>::iterator iter = vector.begin(); iter != vector.end();
       ++iter) {
    std::cout << *iter << " ";
  }
  std::cout << std::endl;
  std::cout << "After: ";
  for (std::vector<int>::iterator it = result.begin(); it != result.end();
       ++it) {
    std::cout << *it << " ";
  }
  std::cout << std::endl;
  std::cout << "Time to process a range of " << vector.size()
            << " with std::vector"
            << ": " << elapsedTime << " us" << std::endl;
}

void PmergeMe::sortBySize(size_t i, size_t n) {
  std::pair<int, int> value = newPair[i];
  int j = i;
  while (j > 0 && newPair[j - 1].second > value.second) {
    newPair[j] = newPair[j - 1];
    j--;
  }
  newPair[j] = value;
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
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return jabosthal(n - 1) + 2 * jabosthal(n - 2);
}

void PmergeMe::sortByJacob() {
  size_t number = 0;
  size_t i = 0;
  while (1) {
    if (i == 2) {
      i++;
      continue;
    }
    number = jacob(i);
    this->finalSort(number);
    if (number >= newPair.size() - 1)
      break;
    i++;
  }
}

int PmergeMe::binarySort(int lastJacob, int number) {
  int first = lastJacob;
  int last = result.size() - 1;

  while (first <= last) {
    int mid = first + (last - first) / 2;
    if (result[mid] == number)
      return mid;

    if (result[mid] < number)
      first = mid + 1;

    else
      last = mid - 1;
  }

  return first;
}

void PmergeMe::finalSort(size_t jacob) {
  int pos;
  int tmp = jacob;
  if (jacob == 0)
    result.insert(result.begin(), newPair[0].first);
  else {
    while (jacob > lastJacob) {
      if (jacob > newPair.size() - 1) {
        jacob--;
        continue;
      }
      pos = binarySort(0, newPair[jacob].first);
      result.insert(result.begin() + pos, newPair[jacob].first);
      jacob--;
    }
  }
  lastJacob = tmp;
}

void PmergeMe::getPairsAndSort() {
  size_t size;
  if (vector.size() % 2 != 0) {
    size = vector.size() - 1;
    left = vector.back();
  } else
    size = vector.size();

  for (size_t i = 0; i < size; i += 2) {
    newPair.push_back(std::make_pair(vector[i], vector[i + 1]));
  }
  sortPairs();
  sortBySize(0, newPair.size() - 1);
  writeInNewVector();
  sortByJacob();
  if (left != -1) {
    int pos = binarySort(0, vector.back());
    result.insert(result.begin() + pos, vector.back());
  }
}

const char *PmergeMe::wrongInputException::what() const throw() {
  return "Wrong Input";
}

const char *PmergeMe::negativeIntException::what() const throw() {
  return "Negative Ints as Input";
}

const char *PmergeMe::intTooBigException::what() const throw() {
  return "Input is bigger than Int_Max";
}

bool checkInput(int argc) {
  if (argc < 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    return false;
  }
  return true;
}

size_t jacob(size_t n) {

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return jacob(n - 1) + 2 * jacob(n - 2);
}