#ifndef WHATEVER_HPP
#define WHATEVER_HPP
#include <string>
#include <iostream>

template <typename T>
void swap(T &first, T &second){
  T temp;
  temp = second;
  second = first;
  first = temp;
}

template <typename A>
A min(A a, A b){
  if (a < b)
    return a;
  else
    return b;
}

template <typename B>
B max(B a, B b){
  if (a > b)
    return a;
  else
    return b;
}


#endif