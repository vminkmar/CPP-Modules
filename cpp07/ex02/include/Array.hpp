#ifndef ARRAY_HPP
#define ARRAY_HPP
#include <cctype>
#include <exception>
#include <iostream>
#include <string>

template <typename U, unsigned int n> class Array1 {
private:
  U *array;

public:
  Array1() { array = new U[n]; }

  ~Array1() { delete[] array; }

  Array1(const Array1 &copy) {
    this->array = NULL;
    *this = copy;
  }

  Array1 &operator=(const Array1 &obj) {
    if (this != &obj) {
      delete[] array;
      array = new U[n];
      for (unsigned int i = 0; i < n; i++)
        array[i] = obj.array[i];
    }
    return *this;
  }

  U &operator[](unsigned int index) {
    if (index >= size())
      throw IndexException();
    return array[index];
  }

  unsigned int size() const { return n; }

  class IndexException : public std::exception {
  public:
    virtual const char *what() const throw() { return "wrong Index"; }
  };
};

template <typename T> class Array {
private:
  T *array;
  unsigned int n;

public:
  Array() : n(0) { array = new T[n]; }

  Array(unsigned int size) : n(size) { array = new T[n]; }

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

  unsigned int size() const { return n; }

  class IndexException : public std::exception {
  public:
    virtual const char *what() const throw() { return "wrong Index"; }
  };
};

#endif