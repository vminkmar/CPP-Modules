#ifndef EASYFIND_HPP
#define EASYFIND_HPP
#include <algorithm>
#include <iostream>
#include <list>
#include <string>

template <typename T>
void easyfind(T &type, int value) {
  typename T::iterator it;
  it = std::find(type.begin(), type.end(), value);
  if (it != type.end()) {
    std::cout << "Value found (" << *it << ")" << std::endl;
    return;
  }
  std::cerr << "Element not found in List" << std::endl;
  return;
}
#endif