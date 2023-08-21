#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <stack>
#include <string>
#include <vector>

template <typename T, typename U = std::deque<T> > class MutantStack : public std::stack<T, U>{
private:
  std::stack<T> container;

public:
  MutantStack();
  ~MutantStack();
  // MutantStack(const MutantStack &copy){}
  // MutantStack &operator=(const MutantStack &obj){}
	
	
};

#endif