#include "Span.hpp"

Span::Span() : m_size(0) {
  std::cout << "Default Constructor called" << std::endl;
}

Span::Span(unsigned int N) : m_size(N) {
  std::cout << "Constructor with Size " << N << " called" << std::endl;
  m_vector.reserve(m_size);
}

Span::~Span() { std::cout << "Destructor called" << std::endl; }

Span::Span(const Span &copy) { *this = copy.N; }

Span &Span::operator=(const Span &obj) {
  N = obj.N;
  m_size = obj.m_size;
  return *this;
}

void Span::addNumber(int number) {
  if (m_vector.size() > m_size)
    throw TooManyValuesException();
  m_vector.push_back(number);
}

void Span::print() {
  for (std::vector<int>::const_iterator i = m_vector.begin();
       i != m_vector.end(); i++)
    std::cout << *i << std::endl;
}

unsigned int Span::getCurrentSize() {
  int currentSize = 0;
  for (std::vector<int>::const_iterator i = m_vector.begin();
       i != m_vector.end(); i++) {
    if (m_vector.empty())
      break;
  }
  return currentSize;
}

int Span::shortestSpan() {
  if (m_vector.size() == 0 || m_vector.size() == 1)
    throw NoSpanException();
  std::sort(m_vector.begin(), m_vector.end());
  std::vector<int>::const_iterator first;
  std::vector<int>::const_iterator second;
  int max = INT_MAX;
  for (first = m_vector.begin(); first < m_vector.end(); first++) {
    for (second = m_vector.begin(); second < m_vector.end(); second++) {
      int temp;
      if (*first == *second)
        continue;
      if (*second > *first)
        temp = *second - *first;
      else
        temp = *first - *second;
      if (temp < max)
        max = temp;
    }
  }
  return max;
}

int Span::longestSpan() {
  if (m_vector.size() == 0 || m_vector.size() == 1)
    throw NoSpanException();
  std::sort(m_vector.begin(), m_vector.end());
  std::vector<int>::const_iterator i;
  std::vector<int>::const_iterator j;
  j = m_vector.end() - 1;
  i = m_vector.begin();
  return *j - *i;
}

void Span::addMoreNumbers(unsigned int numberOfValues) {
  for (unsigned int i = 0; i < numberOfValues; i++) {
    int number = rand() % 20;
    addNumber(number);
  }
}

const char *Span::NoSpanException::what() const throw() {
  return "There are not enough values";
}

const char *Span::TooManyValuesException::what() const throw() {
  return "There are too many values";
}
