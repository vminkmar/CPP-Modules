#ifndef SPAN_HPP
#define SPAN_HPP
#include <algorithm>
#include <iostream>
#include <vector>
#include <cstdlib>
#include <string>
#include <exception>
#include <climits>

class Span{
	private:
		unsigned int N;
		unsigned int m_size;
		std::vector<int> m_vector;
		
	public:
		Span();
		Span(unsigned int N);
		~Span();
		Span(const Span &copy);
		Span &operator=(const Span &obj);

		unsigned int getCurrentSize();
		void print();
		void addNumber(int number);
		int shortestSpan();
		int longestSpan();
		void addMoreNumbers(unsigned int numberOfValues);
		class NoSpanException : public std::exception{
			public:
			virtual const char *what() const throw();
		};

		class TooManyValuesException : public std::exception{
			public:
     virtual const char *what() const throw();
		};
};

#endif