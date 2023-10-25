#include "PmergeMe.hpp"

PmergeMe::PmergeMe()
    : m_lastJacob(0), m_startTime(0), m_endTime(0), m_left(-1), m_counter(0) {}

PmergeMe::~PmergeMe() {}

PmergeMe::PmergeMe(const PmergeMe &copy)
{
	vector = copy.vector;
	result = copy.result;
	newPair = copy.newPair;
	deque = copy.deque;
	resultDeque = copy.resultDeque;
	newDeque = copy.newDeque;
	m_lastJacob = copy.m_lastJacob;
	m_startTime = copy.m_startTime;
	m_endTime = copy.m_endTime;
	m_left = copy.m_left;
}

PmergeMe &PmergeMe::operator=(const PmergeMe &obj)
{
	if(this == &obj)
		return *this;
	vector = obj.vector;
	result = obj.result;
	newPair = obj.newPair;
	deque = obj.deque;
	resultDeque = obj.resultDeque;
	newDeque = obj.newDeque;
	m_lastJacob = obj.m_lastJacob;
	m_startTime = obj.m_startTime;
	m_endTime = obj.m_endTime;
	m_left = obj.m_left;
	return *this;
}

PmergeMe &PmergeMe::argvToIntandVector(char **argv)
{
	int arg = 1;
  int start = 0;
  int end = 0;
  long number;
  std::string tmp;
  m_startTime = clock();
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
      if (this->m_counter == 0)
        vector.push_back(number);
      else if (this->m_counter == 1)
        deque.push_back(number);
    }
    arg++;
  }
		if((this->m_counter == 0 && vector.size() <= 1) || (this->m_counter == 1 &&  deque.size() <= 1))
			throw justOneNumberException();
  return *this;
}

void PmergeMe::getDeque() {
  size_t size;
  m_lastJacob = 0;
  if (deque.size() % 2 != 0) {
    size = deque.size() - 1;
    m_left = deque.back();
  } else
    size = deque.size();

  for (size_t i = 0; i < size; i += 2) {
    newDeque.push_back(std::make_pair(deque[i], deque[i + 1]));
  }
  sortPairsDeque();
  sortBySizeDeque(0, newDeque.size() - 1);
  writeInNewDeque();
  sortByJacob();
  if (m_left != -1) {
    int pos = binarySort(0, deque.back());
    resultDeque.insert(resultDeque.begin() + pos, deque.back());
  }
}

void PmergeMe::getVector() {
  size_t size;
  if (vector.size() % 2 != 0) {
    size = vector.size() - 1;
    m_left = vector.back();
  } else
    size = vector.size();

  for (size_t i = 0; i < size; i += 2) {
    newPair.push_back(std::make_pair(vector[i], vector[i + 1]));
  }
  sortPairs();
  sortBySize(0, newPair.size() - 1);
  writeInNewVector();
  sortByJacob();
  if (this->m_left != -1) {
    int pos = binarySort(0, vector.back());
    result.insert(result.begin() + pos, vector.back());
  }
}

void PmergeMe::sortPairs() {
  for (size_t i = 0; i < newPair.size(); i++) {
    if (newPair[i].first > newPair[i].second)
      std::swap(newPair[i].first, newPair[i].second);
  }
}

void PmergeMe::sortPairsDeque() {
  for (size_t i = 0; i < newDeque.size(); i++) {
    if (newDeque[i].first > newDeque[i].second)
      std::swap(newDeque[i].first, newDeque[i].second);
  }
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

void PmergeMe::sortBySizeDeque(size_t i, size_t n) {
  std::pair<int, int> value = newDeque[i];
  int j = i;
  while (j > 0 && newDeque[j - 1].second > value.second) {
    newDeque[j] = newDeque[j - 1];
    j--;
  }
  newDeque[j] = value;
  if (i + 1 <= n)
    sortBySizeDeque(i + 1, n);
}

void PmergeMe::writeInNewVector() {
  for (size_t i = 0; i < newPair.size(); i++)
    result.push_back(newPair[i].second);
}

void PmergeMe::writeInNewDeque() {
  for (size_t i = 0; i < newDeque.size(); i++)
    resultDeque.push_back(newDeque[i].second);
}

int PmergeMe::jabosthal(int n) {
  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return jabosthal(n - 1) + 2 * jabosthal(n - 2);
}

void PmergeMe::sortByJacob() {
  unsigned int number = 0;
  size_t i = 0;
  while (1) {
    if (i == 2) {
      i++;
      continue;
    }
    number = jacob(i);
    if (this->m_counter == 0) {
      this->finalSort(number);
      if (number >= newPair.size() - 1)
        break;
    } else {
      this->finalSortDeque(number);
      if (number >= newDeque.size() - 1)
        break;
    }
    i++;
  }
}

void PmergeMe::finalSort(size_t jacob) {
  int pos;
  int tmp = jacob;
  if (jacob == 0)
    result.insert(result.begin(), newPair[0].first);
  else {
    while (jacob > this->m_lastJacob) {
      if (jacob > this->newPair.size() - 1) {
        jacob--;
        continue;
      }
      pos = binarySort(0, newPair[jacob].first);
      result.insert(result.begin() + pos, newPair[jacob].first);
      jacob--;
    }
  }
  m_lastJacob = tmp;
}

void PmergeMe::finalSortDeque(size_t jacob) {
  int pos;
  int tmp = jacob;
  if (jacob == 0)
    resultDeque.insert(resultDeque.begin(), newDeque[0].first);
  else {
    while (jacob > this->m_lastJacob) {
      if (jacob > newDeque.size() - 1) {
        jacob--;
        continue;
      }
      pos = binarySortDeque(0, newDeque[jacob].first);
      resultDeque.insert(resultDeque.begin() + pos, newDeque[jacob].first);
      jacob--;
    }
  }
  m_lastJacob = tmp;
}

void PmergeMe::printResult() {

  if (this->m_counter == 0) {
    this->m_endTime = clock();
    float elapsedTime =
        static_cast<float>(this->m_endTime - this->m_startTime) /
        CLOCKS_PER_SEC * 1000000;
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
    std::cout << std::endl;
  } else {
    this->m_endTime = clock();
    float elapsedTime =
        static_cast<float>(this->m_endTime - this->m_startTime) /
        CLOCKS_PER_SEC * 1000000;
    std::cout << "Before: ";
    for (std::deque<int>::iterator iterator = deque.begin();
         iterator != deque.end(); ++iterator) {
      std::cout << *iterator << " ";
    }
    std::cout << std::endl;
    std::cout << "After: ";
    for (std::deque<int>::iterator it = resultDeque.begin();
         it != resultDeque.end(); ++it) {
      std::cout << *it << " ";
    }
    std::cout << std::endl;
    std::cout << "Time to process a range of " << deque.size()
              << " with std::deque"
              << ": " << elapsedTime << " us" << std::endl;
  }
}

int PmergeMe::binarySort(int first, int number) {
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

int PmergeMe::binarySortDeque(int first, int number) {
  int last = resultDeque.size() - 1;

  while (first <= last) {
    int mid = first + (last - first) / 2;
    if (resultDeque[mid] == number)
      return mid;

    if (resultDeque[mid] < number)
      first = mid + 1;

    else
      last = mid - 1;
  }

  return first;
}

size_t jacob(size_t n) {

  if (n == 0)
    return 0;
  if (n == 1)
    return 1;
  return jacob(n - 1) + 2 * jacob(n - 2);
}

bool checkInput(int argc) {
  if (argc < 2) {
    std::cerr << "Check the number of Arguments" << std::endl;
    return false;
  }
  return true;
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

const char *PmergeMe::justOneNumberException::what() const throw() {
  return "There is just one number as Input";
}