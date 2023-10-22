#include "Span.hpp"

int main() {
  Span sp = Span(10);
	std::cout << std::endl;
  sp.addMoreNumbers(10);
	std::cout << "values in sp: " <<std::endl;
  sp.print();
	std::cout << std::endl;
  std::cout << "Size: " << sp.getCurrentSize() << std::endl; 
  std::cout << "shortest Span: " << sp.shortestSpan() << std::endl;
  std::cout << "longest Span: " << sp.longestSpan() << std::endl;
	std::cout << std::endl;
	std::cout << "try to add more numbers:" << std::endl;

  try {
    sp.addMoreNumbers(2);
  } catch (Span::TooManyValuesException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
	std::cout << std::endl;
	Span sp1 = Span(1);
  try {
    sp1.longestSpan();
  } catch (Span::NoSpanException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
  try {
    sp1.shortestSpan();
  } catch (Span::NoSpanException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
	std::cout << std::endl;
}
