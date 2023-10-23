#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP
#include <algorithm>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <stack>
#include <iterator>
#include <deque>
#include <string>
#include <vector>
#include <list>

template <typename T, typename U = std::deque<T> >
 class MutantStack : public std::stack<T, U>{

public:
  MutantStack() : std::stack<T, U>() {};
  ~MutantStack(){};

	typedef typename std::stack<T, U>::container_type::iterator iterator; 
	typedef typename std::stack<T, U>::container_type::const_iterator const_iterator; 

	iterator begin() {return std::stack<T, U>::c.begin();} 
	iterator begin() const {return std::stack<T, U>::c.begin();} 
	iterator end() {return std::stack<T, U>::c.end();} 
	iterator end() const {return std::stack<T, U>::c.end();} 	
};

#endif