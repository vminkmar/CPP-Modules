#include "Span.hpp"

int main() {
  Span sp = Span(10);
  sp.addMoreNumbers(10);
  sp.print();
  std::cout << "Size: " << sp.getCurrentSize() << std::endl; 
  std::cout << "shortest Span: " << sp.shortestSpan() << std::endl;
  std::cout << "longest Span: " << sp.longestSpan() << std::endl;
  try {
    sp.addNumber(1000);
  } catch (Span::TooManyValuesException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }

	Span sp1 = Span(1);
  try {
    sp1.longestSpan();
  } catch (Span::NoSpanException &ex) {
    std::cerr << "Caught exception: " << ex.what() << std::endl;
  }
}
