#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cctype>
#include <exception>
#include <iostream>
#include <string>

template <typename T, unsigned int n>
class Array {
private:
  T *array;

public:
  Array() { array = new T[n]; }

  ~Array() { delete[] array; }

  Array(const Array &copy) {
    this->array = NULL;
    *this = copy;
  }

  Array &operator=(const Array &obj) {
    if (this != &obj) {
      delete[] array;
      array = new T[n];
      for (unsigned int i = 0; i < n; i++)
        array[i] = obj.array[i];
    }
    return *this;
  }

  T &operator[](unsigned int index) {
    if (index >= size())
      throw IndexException();
    return array[index];
  }

  unsigned int size() { return n; }

  class IndexException : public std::exception {
  public:
    virtual const char *what() const throw() { return "wrong Index"; }
  };
};

#endif